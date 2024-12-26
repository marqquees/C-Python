/*
    Construa um programa que conte a quantidade de um caracter, contido em uma palavra.
*/

#include <stdio.h>
#include <string.h>

void contador_letra(char palavra[], char letra, int contador_letra);

int main(void)
{
    char palavra[20];
    char letra;
    int contador = 0;

    puts("CONTADOR DE LETRA(S)");

    printf("\nDigite uma palavra: ");
    scanf("%s", &palavra);

    // Limpar o buffer de entrada para evitar leitura incorreta do caracter.
    getchar();

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    contador_letra(palavra, letra, contador);

    return 0;
}

void contador_letra(char palavra[20], char letra, int contador)
{
    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] == letra)
            contador++;
    }
    printf("\nA palavra %s contem %d letra(s) do tipo %c.", palavra, contador, letra);
}