#include <stdio.h>
#include <string.h>

int main()
{
    int numero;
    char numero_string[15];
    int maior_numero = 0;
    printf("MAIOR ALGORISMO\n");

    printf("\nNumero Inteiro: ");
    scanf("%d", &numero);

    //Converte a variável do tipo Float para o tipo Char.
    sprintf(numero_string, "%d", numero);
   
    for (int i = 0; i < strlen(numero_string); i++)
    {
        if (numero_string[i] >= '0' && numero_string[i] <= '9')
        {
            int digito = numero_string[i] - '0';
            if (digito > maior_numero)
                maior_numero = digito;
        }
    }
    printf("\nMaior Numero: %d", maior_numero);

    return 0;
}
