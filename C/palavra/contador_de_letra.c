/*
    Construa um programa que conte a quantidade de um caracter,
    contido em uma palavra.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    char letra;
    int contador_letra = 0;

    printf("CONTADOR DE LETRA(S)\n");

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    // Limpar o buffer de entrada para evitar leitura incorreta do caracter.
    getchar();

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] == letra)
            contador_letra++;
    }
    printf("\nA palavra %s contem %d letra(s) %c.", palavra, letra, contador_letra);

    return 0;
}