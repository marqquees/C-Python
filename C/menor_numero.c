#include <stdio.h>

float menor_numero(float numero[], int tamanho_vetor);

int main()
{
    printf("MENOR NUMERO\n\n");

    float numero[5];
    char nomes_numero[5][10] = {"primeiro","segundo","terceiro","quarto","quinto"};
    int tamanho_vetor = sizeof(numero) / sizeof(numero[0]);

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o %s numero: ", nomes_numero[i]);
        scanf("%f", &numero[i]);
    }

    printf("\nMenor numero: %.1f", menor_numero(numero, tamanho_vetor));
    
    return 0;
}

float menor_numero(float numero[], int tamanho_vetor)
{
    //calcula o menor número.
    int menor = numero[0];
    for (int i = 1; i < tamanho_vetor; i++)
    {
        if (numero[i] < menor)
            menor = numero[i];
    }
    return menor;
}