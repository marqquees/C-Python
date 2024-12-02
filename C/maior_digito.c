#include <stdio.h>
#include <string.h>

int maior_digito(int numero, char numero_string[]);

int main()
{
    int numero = 0;
    char numero_string[15] = {'0'};
    printf("MAIOR DIGITO\n");

    printf("\nNumero Inteiro: ");
    scanf("%d", &numero);

    //Converte a variável do tipo Float para o tipo Char.
    sprintf(numero_string, "%d", numero);
    
    printf("\nMaior Numero: %d", maior_digito(numero, numero_string));

    return 0;
}

int maior_digito(int numero, char numero_string[])
{
    int maior_d = 0;
    for (int i = 0; i < strlen(numero_string); i++)
    {
        if (numero_string[i] >= '0' && numero_string[i] <= '9')
        {
            int digito = numero_string[i] - '0'; //Converte o char para int subtraindo o valor de '0' na tabela ASCII.
            if (digito > maior_d)
                maior_d = digito;
        }
    }
    return maior_d;
}