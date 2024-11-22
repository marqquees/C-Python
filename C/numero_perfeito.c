#include <stdio.h>
#include <stdbool.h>

bool numero_perfeito(int numero);

int main()
{
    int numero;
    printf("NUMERO PERFEITO\n");

    printf("\nNumero inteiro: ");
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