/*
    UC: 21111 - Sistemas Operativos
    E-fólio B 2023-24 (mtxor.c)
    Aluno: 2304063 - Daniel Marques
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define MAX_BUFFER_SIZE 1000

// Estrutura do Buffer Circular
typedef struct
{
    int buffer[MAX_BUFFER_SIZE];
    int count;
    int head;
    int tail;
    pthread_mutex_t mtx_buf;
} buffer_t;

// Variáveis Globais
buffer_t buf;
int dimbuf, N, nt;
int *results, *counts;

// Função do Produtor (Main)
void *producer(void *arg)
{
    srand(737); // Inicialização da semente para geração de números aleatórios.
    int produced = 0;

    while (produced < N)
    {
        pthread_mutex_lock(&buf.mtx_buf);
        if (buf.count == dimbuf)
        {
            pthread_mutex_unlock(&buf.mtx_buf);
            sched_yield(); // Libera a CPU se o buffer estiver cheio.
        }
        else
        {
            buf.buffer[buf.tail] = rand(); // Insere número aleatório no buffer.
            buf.tail = (buf.tail + 1) % dimbuf;
            buf.count++;
            produced++;
            pthread_mutex_unlock(&buf.mtx_buf);
        }
    }
    return NULL;
}

// Função do Consumidor
void *consumer(void *arg)
{
    int id = *(int *)arg;
    int local_result = 0;
    int local_count = 0;
    int items_to_consume = dimbuf / nt;

    while (1)
    {
        pthread_mutex_lock(&buf.mtx_buf);
        if (buf.count == 0)
        {
            pthread_mutex_unlock(&buf.mtx_buf);
            if (N <= 0) break;  // Sai do loop se a produção acabou e o buffer está vazio.
            sched_yield(); // Libera a CPU se o buffer estiver vazio.
        }
        else
        {
            for (int i = 0; i < items_to_consume && buf.count > 0; i++)
            {
                int item = buf.buffer[buf.head];
                buf.head = (buf.head + 1) % dimbuf;
                buf.count--;
                local_result ^= item; // Calcula o XOR local.
                local_count++;
            }
            pthread_mutex_unlock(&buf.mtx_buf);
        }
    }

    results[id] = local_result;
    counts[id] = local_count;
    printf("T%d: %d Operações Realizadas\n", id, local_count);
    return NULL;
}

// Função que verifica se uma string representa um inteiro positivo.
int is_positive_integer(const char *str)
{
    if (*str == '\0') return 0; // Verifica se a string está vazia.
    while (*str)
    {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "pt_PT.UTF-8"); // Define o idioma do(s) output(s).

    if (argc != 4)
    {
        fprintf(stderr, "Uso: %s dimbuf N nt\n", argv[0]);
        return 1;
    }   
    if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]) || !is_positive_integer(argv[3]))
    {
        fprintf(stderr, "Todo(s) o(s) Argumento(s) deve(m) ser um Número Inteiro Positivo.\n");
        return 1;
    }

    dimbuf = atoi(argv[1]);
    N = atoi(argv[2]);
    nt = atoi(argv[3]);
    
    if (dimbuf <= 0 || N <= 0 || nt < 1) 
    {
        fprintf(stderr, "Argumentos Inválidos. dimbuf > 0, N > 0, nt >= 1.\n");
        return 1;
    }

    printf("Cálculo XOR de Sequência com %d item(s), %d tarefa(s) e Buffer %d item(s).\n", N, nt, dimbuf);
    printf("\n");

    buf.count = 0;
    buf.head = 0;
    buf.tail = 0;
    pthread_mutex_init(&buf.mtx_buf, NULL);

    pthread_t consumers[nt];
    int consumer_ids[nt];
    results = malloc(nt * sizeof(int));
    counts = malloc(nt * sizeof(int));
    memset(results, 0, nt * sizeof(int));
    memset(counts, 0, nt * sizeof(int));

    for (int i = 0; i < nt; i++)
    {
        consumer_ids[i] = i;
        pthread_create(&consumers[i], NULL, consumer, &consumer_ids[i]);
    }

    producer(NULL); // Executa a função do Produtor.

    N = 0; // Sinaliza aos consumidores que a produção acabou.

    for (int i = 0; i < nt; i++)
    {
        pthread_join(consumers[i], NULL);
    }

    int total_operations = 0, final_xor_result = 0;

    for (int i = 0; i < nt; i++)
    {
        total_operations += counts[i];
        final_xor_result ^= results[i];
    }

    printf("\nNúmero Total de Operações Efetuadas: %d\n", total_operations);
    printf("\nResultado Final XOR: %d\n", final_xor_result);

    free(results);
    free(counts);
    pthread_mutex_destroy(&buf.mtx_buf);

    return 0;
}
