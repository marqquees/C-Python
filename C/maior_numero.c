#include <stdio.h>

float maior_numero(float numero[], int tamanho_vetor);

int main()
{
    printf("MAIOR NUMERO\n\n");

    float numero[5] = {0};
    char nomes_numero[5][10] = {"primeiro","segundo","terceiro","quarto","quinto"};
    int tamanho_vetor = sizeof(numero) / sizeof(numero[0]);

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o %s numero: ", nomes_numero[i]);
        scanf("%f", &numero[i]);
    }

    printf("\nMaior Numero: %.1f", maior_numero(numero, tamanho_vetor));

    return 0;
}

float maior_numero(float numero[], int tamanho_vetor)
{
    //Calcula o maior número.
    float maior = numero[0];
    for (int i = 1; i < tamanho_vetor; i++)
        if (numero[i] > maior)
            maior = numero[i];
    return maior;
}