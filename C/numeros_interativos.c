/*
    Criem um programa que leia dez números inteiro se permita ao utilizador escolher a opção pretendida.

    1. Maior número.
    2. Menor número.
    3. Média.
    4. Altera um valor lido indicando a posição.
    5. Imprimir o vetor com todos os valores inseridos.
    6. Sair

    Cada uma das opções deve ser desenvolvida numa função à parte.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

#define MAX 4

void leitura(int vetor[]);
void maior(int vetor[]);
void menor(int vetor[]);
void media(int vetor[]);
void posicao(int vetor[]);
void imprime(int vetor[]);
void limpa_ecra();

int main(void)
{
    int vetor[MAX] = {0};
    int opcao = 0;

    do
    {
        puts("NUMEROS INTERATIVOS\n");
        puts("1. Maior");
        puts("2. Menor");
        puts("3. Media");
        puts("4. Posicao");
        puts("5. Sair");
        printf("\nOpcao: ");
        scanf_s("%d", &opcao);

        switch (opcao)
        {
        case 1:
            maior(vetor);
            break;
        case 2:
            menor(vetor);
            break;
        case 3:
            media(vetor);
            break;
        case 4:
            posicao(vetor);
            break;
        case 5:
            break;
        default:
            puts("Opcao invalida! Tente novamente.\n");
            break;
        }
        limpa_ecra();
    } while (opcao != 5);

    return 0;
}

void leitura(int vetor[])
{
    printf("\nDigite %d valores inteiros.\n", MAX);
    for (int i = 0; i < MAX; i++)
    {
        printf("Valor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

void maior(int vetor[])
{
    leitura(vetor);
    int maior = vetor[0];
    for (int i = 1; i < MAX; i++)
        if (vetor[i] > maior)
            maior = vetor[i];
    printf("\nMaior: %d", maior);
}

void menor(int vetor[])
{
    leitura(vetor);
    int menor = vetor[0];
    for (int i = 1; i < MAX; i++)
        if (vetor[i] < menor)
            menor = vetor[i];
    printf("\nMenor: %d", menor);
}

void media(int vetor[])
{
    leitura(vetor);
    float soma = 0, media = 0;
    for (int i = 0; i < MAX; i++)
        soma += vetor[i];
    media = soma / MAX;
    printf("\nMedia: %.2f", media);
}

void posicao(int vetor[])
{
    leitura(vetor);
    int posicao = 0, valor = 0;
    bool substituir = false;

    printf("\nPosicao (0 a %d): ", MAX - 1);
    scanf("%d", &posicao);

    if (posicao >= 0 && posicao < MAX)
    {
        printf("\nValor para substituir na posicao [%d]: ", posicao);
        scanf("%d", &valor);
        vetor[posicao] = valor;
        substituir = true;
    }
    if (substituir)
        imprime(vetor);
    else
        puts("Posicao invalida! Tente novamente.");
    // Falta loop de verificação.
}

void imprime(int vetor[])
{
    puts("\nVetor: ");
    for (int i = 0; i < MAX; i++)
        printf("%d ", vetor[i]);
    puts("");
}

void limpa_ecra()
{
// Delay de 3 segundos antes de limpar o ecrã.
#ifdef _WIN32
    // Sleep é em milissegundos, então 3000 é igual a 3 segundos.
    Sleep(3000);
#else
    // sleep é em segundos no Unix.
    sleep(3);
#endif

// Limpa o ecrã.
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
