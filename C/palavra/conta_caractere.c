/*
    Construa um programa que faz a contagem do número de caracteres em uma palavra.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[20];

    puts("Numero de Caracteres\n");

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    printf("\nA palavra %s tem %d letras.", palavra, strlen(palavra));
    return 0;
}
