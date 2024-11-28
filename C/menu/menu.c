#include <stdio.h>
#include <stdlib.h>

#define MAX 4

void leitura(int vetor[]);
void maior(int vetor[]);
void menor(int vetor[]);
void media(int vetor[]);
void posicao(int vetor[]);
void imprime(int vetor[]);
void sair();

int main()
{
    int vetor[MAX] = {0};
    int opcao;

    leitura(vetor);

    do
    {
        printf("\n1. Maior");
        printf("\n2. Menor");
        printf("\n3. Media");
        printf("\n4. Posicao");
        printf("\n5. Imprimir os Valores");
        printf("\n6. Sair");
        printf("\n\nOpcao: ");
        scanf("%d", &opcao);


        switch (opcao)
        {
            case 1:
                maior(vetor);
                sair();
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
                sair();
                break;
            default:
                sair();
                break;
        }
    } while (opcao > 0 && opcao <= 6);
    
    return 0;
}

void leitura(int vetor[])
{
    printf("Digite %d valores inteiro.\n", MAX);
    for (int i = 0; i < MAX; i++)
    {
        printf("Valor [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }
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

    printf("\n\nPosicao: ");
    scanf("%d", &posicao);
    printf("\nValor que deseja [%d]: ", posicao);
    scanf("%d", &valor);
    vetor[posicao] = valor;
}

void imprime(int vetor[])
{
    for (int i = 0; i < MAX; i++)
        printf("%d ", vetor[i]);
}

void sair()
{
    printf("\n\n[Enter] para continuar..."); 
    //while (getchar() != '\n'); 
    getchar();
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

