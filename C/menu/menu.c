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

void maior(int vetor[]);
void menor(int vetor[]);
void media(int vetor[]);
void posicao(int vetor[]);
void imprime(int vetor[]);
void limpar_ecra();

int main()
{
    int vetor[MAX] = {0};
    int opcao;

    do
    {
        printf("\n1. Maior");
        printf("\n2. Menor");
        printf("\n3. Media");
        printf("\n4. Posicao");
        printf("\n5. Imprimir os Valores");
        printf("\n6. Sair\n");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        if (opcao == 6)
            break;
        
        printf("\nDigite %d valores inteiros.\n", MAX);
        for (int i = 0; i < MAX; i++)
        {
            printf("Valor [%d]: ", i);
            scanf("%d", &vetor[i]);
        }

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
                imprime(vetor);
                break;
            case 6:
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
        limpar_ecra();
    } while (opcao != 6);
    
    return 0;
}

void maior(int vetor[])
{
    int maior = vetor[0];
    for (int i = 1; i < MAX; i++)
        if (vetor[i] > maior)
            maior = vetor[i];
    printf("\nMaior: %d", maior);
}

void menor(int vetor[])
{
    int menor = vetor[0];
    for (int i = 1; i < MAX; i++)
        if (vetor[i] < menor)
            menor = vetor[i];
    printf("\nMenor: %d", menor);
}

void media(int vetor[])
{
    float soma = 0, media;
    for (int i = 0; i < MAX; i++)
        soma += vetor[i];
    media = soma / MAX;
    printf("\nMedia: %.2f", media);
}

void posicao(int vetor[])
{
    int posicao, valor;
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
        printf("Posicao invalida! Tente novamente.\n");
}

void imprime(int vetor[])
{
    printf("\nVetor: ");
    for (int i = 0; i < MAX; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

void limpar_ecra()
{
    // Delay de 3 segundos antes de limpar o ecrã.
    #ifdef _WIN32
        Sleep(3000);  // Sleep é em milissegundos, então 3000 = 3 segundos.
    #else
        sleep(3);  // sleep é em segundos no Unix.
    #endif

    //Limpa o ecrã.
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
    
    