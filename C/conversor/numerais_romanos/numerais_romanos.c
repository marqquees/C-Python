/*
    Conversor de Numerais Romanos.

    Escreva um programa para converter um número em numeração romana para a notação decimal.
    Ex. MCMLXXIX = 1979.
    Implemente um adequado tratamento de erros, que informe o utilizador, de forma clara,
    sobre o erro que cometeu na escrita do numeral romano, como por exemplo: "usou uma letra não permitida como o P".
*/

#include <stdio.h>
#include <string.h>

#define TAMANHO 10

int romano_para_decimal(char c);

int main(void)
{
    char romano[TAMANHO];
    int decimal = 0;

    puts("Conversor de Numerais Romanos");

    printf("\nNumeral Romano: ");
    scanf("%s", romano);

    for (int i = 0; i < TAMANHO; i++)
    {
        if (romano_para_decimal(romano[i]) == -1)
        {
            printf("\nLetra %c nao permitida.\n", romano[i]);
            printf("Numeral Romano: ");
            scanf("%s", romano);
        }
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        int numero_atual = romano_para_decimal(romano[i]);
        int numero_proximo = romano_para_decimal(romano[i + 1]);

        if (numero_atual < numero_proximo)
            decimal -= numero_atual;
        else
            decimal += numero_atual;
    }
    printf("\nDecimal: %d\n", decimal);

    return 0;
}

int romano_para_decimal(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return -1;
    }
}