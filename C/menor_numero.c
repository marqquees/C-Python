#include <stdio.h>

float menor_numero(float menor, * numero)
{

}

int main()
{
    printf("MENOR NUMERO\n\n");

    float numero[5], menor;
    char nomes_numero[5][10] = {"primeiro","segundo","terceiro","quarto","quinto"};
    int tamanho_vetor = sizeof(numero) / sizeof(numero[0]);

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o %s numero: ", nomes_numero[i]);
        scanf("%f", &numero[i]);
    }

    //calcula o menor número
    printf("\nMenor Numero: %.2f", menor_numero(numero));
    

    menor = numero[0];
    for (int i = 1; i < 5; i++)
    {
        if (numero[i] > menor)
            menor = numero[i];
    }
    printf("\nMaior Numero: %.2f", menor);

    return 0;
}
