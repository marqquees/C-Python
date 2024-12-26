/*
    Um número é perfeito se a soma dos divisores inteiros de n (excepto o próprio n) é igual ao valor de n.
    Por exemplo, o número 28 tem os seguintes divisores: 1, 2, 4, 7, 14, (28) cuja soma é exactamente 28.
    Os seguintes números são perfeitos: 6, 28, 496, 8128.
    Escrevam uma função que receba um número inteiro e devolva o os valores booleanos True ou False se o número é ou não perfeito,
    ou seja perfeito (N) indica se um número N é perfeito.
*/

#include <stdio.h>
#include <stdbool.h>

bool numero_perfeito(int numero);

int main(void)
{
    int numero;
    puts("NUMERO PERFEITO\n");

    printf("Numero inteiro: ");
    scanf("%d", &numero);

    if (numero_perfeito(numero))
        printf("\nO numero %d e perfeito.", numero);
    else
        printf("\nO numero %d e imperfeito.", numero);
    return 0;
}

bool numero_perfeito(int numero)
{
    int soma = 0;
    for (int i = numero - 1; i > 0; i--)
        if (numero % i == 0)
            soma += i;
    if (soma == numero)
        return true;
    else
        return false;
}