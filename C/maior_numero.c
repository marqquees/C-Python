#include <stdio.h>

int main()
{
    printf("MAIOR NUMERO\n\n");

    float numero[5], maior;
    char nomes_numero[5][10] = {"primeiro","segundo","terceiro","quarto","quinto"};
    int tamanho_vetor = sizeof(numero) / sizeof(numero[0]);

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o %s numero: ", nomes_numero[i]);
        scanf("%f", &numero[i]);
    }

    //calcula o maior número
    maior = numero[0];
    for (int i = 1; i < 5; i++)
    {
        if (numero[i] > maior)
            maior = numero[i];
    }
    printf("\nMaior Numero: %.2f", maior);

    return 0;
}
