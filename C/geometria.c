#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.1415;

void perimetro(void);
void area(void);

int main(void)
{
    int opcao = 0;

    puts("Geometria\n");

    puts("1. Perimetro");
    puts("2. Area");
    puts("3. Sair");
    printf("\nO que deseja calcular? ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        perimetro();
        break;
    case 2:
        area();
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

void perimetro(void)
{
    float raio = 0;

    printf("\nRaio: ");
    scanf("%f", &raio);
    printf("Perimetro: %.2f", pow(PI, 2) * raio);
}

void area(void)
{
    float lado_a = 0, lado_b = 0;

    printf("\nLado A: ");
    scanf("%f", &lado_a);
    printf("Lado B: ");
    scanf("%f", &lado_b);
    printf("Area: %.2f", lado_a * lado_b);
}