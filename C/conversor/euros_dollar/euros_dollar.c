#include <stdio.h>

void cambio_dollar(void);
void cambio_euro(void);

int main(void)
{
    int opcao = 0;

    puts("Conversor de Moedas\n");
    puts("1. Dollar");
    puts("2. Euro");
    puts("3. Sair");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        cambio_dollar();
        break;
    case 2:
        cambio_euro();
        break;
    case 3:
        exit(0);
        break;
    default:
        puts("Opcao invalida. Digite novamente.");
        break;
    }

    return 0;
}

void cambio_dollar(void)
{
    float dollar = 0.95, valor_a_cambiar = 0, resultado = 0;

    printf("Valor a cambiar: ");
    scanf("%f", &valor_a_cambiar);

    resultado = valor_a_cambiar * dollar;

    printf("\n%.2f cambiado para o Dollar: %.2f", valor_a_cambiar, resultado);
}

void cambio_euro(void)
{
    float euro = 1.05, valor_a_cambiar = 0, resultado = 0;

    printf("Valor a cambiar: ");
    scanf("%f", &valor_a_cambiar);

    resultado = valor_a_cambiar * euro;

    printf("\n%.2f cambiado para o Euro: %.2f", valor_a_cambiar, resultado);
}