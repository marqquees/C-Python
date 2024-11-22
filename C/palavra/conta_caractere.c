/*
    Construa um programa que faz a contagem do número de caracteres em uma palavra.
*/
#include <stdio.h>
#include <string.h>

int numero_letra(char palavra[]);

int main()
{
    char palavra[20];

    printf("QUANTAS CARACTERE(S)?\n");

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    printf("\nA palavra %s tem %d letra(s).", palavra, numero_letra(palavra));
    return 0;
}

int numero_letra(char palavra[])
{
    int n_letra = strlen(palavra);
    return n_letra;
}