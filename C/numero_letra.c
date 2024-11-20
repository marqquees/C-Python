/*
    Construa um programa que conte a quantidade de um caracter,
    contido em uma palavra.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    char caracter;
    int numero_caracter = 0;

    printf("QUANTIDADE DE CARACTER\n");

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    // Limpar o buffer de entrada para evitar leitura incorreta do caracter.
    getchar();

    printf("Digite o caracter: ");
    scanf("%c", &caracter);

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] == caracter)
            numero_caracter++;
    }
    printf("\nA palavra %s contem %d letra(s) %c.", palavra, numero_caracter, caracter);

    return 0;
}