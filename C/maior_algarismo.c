/*
    Escrevam um programa que leia um número inteiro e imprima o maior algarismo contido nesse número.
*/

#include <stdio.h>
#include <string.h>

int maior_algarismo(char numero_string[]);

int main(void)
{
    int numero = 0;
    char numero_string[15];

    puts("MAIOR ALGARISMO\n");

    printf("Numero Inteiro: ");
    scanf("%d", &numero);

    // Converte a variável do tipo Float para o tipo Char.
    sprintf(numero_string, "%d", numero);

    printf("\nMaior Algarismo: %d", maior_algarismo(numero_string));

    return 0;
}

int maior_algarismo(char numero_string[])
{
    int maior_alg = 0;
    for (int i = 0; i < strlen(numero_string); i++)
    {
        if (numero_string[i] >= '0' && numero_string[i] <= '9')
        {
            // Converte o char para int subtraindo o valor de '0' na tabela ASCII.
            int digito = numero_string[i] - '0';
            if (digito > maior_alg)
                maior_alg = digito;
        }
    }
    return maior_alg;
}