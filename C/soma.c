#include <stdio.h>

float soma(float n1, float n2, float n3);

int main(void)
{
    puts("SOMA DE TRES NUMEROS\n");

    float number[3] = {0};
    char names_number[3][10] = {"primeiro", "segundo", "terceiro"};
    int tamanho_vetor = sizeof(number) / sizeof(number[0]);

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o %s numero: ", names_number[i]);
        scanf("%f", &number[i]);
    }

    printf("\nResultado: %.2f", soma(number[0], number[1], number[2]));

    return 0;
}

float soma(float n1, float n2, float n3)
{
    return n1 + n2 + n3;
}
