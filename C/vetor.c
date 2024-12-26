#include <stdio.h>

#define TAMANHO 3

void imprime(int vetor[], int tamanho_vetor);
void digite(int vetor[], int tamanho_vetor);
void diferenca(int vetor[], int tamanho_vetor);
void par_impar(int vetor[], int tamanho_vetor);

int main(void)
{
    int vetor[TAMANHO] = {0};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    digite(vetor, tamanho_vetor);
    imprime(vetor, tamanho_vetor);
    diferenca(vetor, tamanho_vetor);
    par_impar(vetor, tamanho_vetor);

    return 0;
}

void digite(int vetor[], int tamanho_vetor)
{
    printf("\nDigite %d valores inteiros.\n", TAMANHO);
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void imprime(int vetor[], int tamanho_vetor)
{
    printf("\nValores digitados: ");
    for (int i = 0; i < tamanho_vetor; i++)
        printf("%d ", vetor[i]);
}

void diferenca(int vetor[], int tamanho_vetor)
{
    int maior_numero = 0;
    int menor_numero = 0;

    maior_numero = menor_numero = vetor[0];
    for (int i = 1; i < tamanho_vetor; i++)
    {
        if (vetor[i] > maior_numero)
            maior_numero = vetor[i];
        if (vetor[i] < menor_numero)
            menor_numero = vetor[i];
    }

    printf("\nMaior numero: %d", maior_numero);
    printf("\nMenor numero: %d", menor_numero);
    printf("\nDiferenca: %d", maior_numero - menor_numero);
}

void par_impar(int vetor[], int tamanho_vetor)
{
    puts("\nPar: ");
    for (int i = 0; i < tamanho_vetor; i++)
        if (vetor[i] % 2 == 0)
            printf("%d ", vetor[i]);

    puts("\nImpar: ");
    for (int i = 0; i < tamanho_vetor; i++)
        if (vetor[i] % 2 != 0)
            printf("%d ", vetor[i]);
}