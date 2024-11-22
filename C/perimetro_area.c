#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.1415;

void menu(void);
float area(float raio);
float perimetro(float raio);
void limpa_ecra(void);


int main()
{
    float raio = 0;
    int op;

    printf("PERIMETRO/AREA de CIRCUFERENCIA\n");
    menu();
    scanf("%d", &op);

    while (op != 1 && op != 2)
    {
        limpa_ecra();
        printf("\nDigite uma opcao valida (1 ou 2).\n");
        menu();
        scanf("%d", &op);
    }
    switch (op)
    {
        case 1:
            limpa_ecra();
            printf("Raio: ", raio);
            scanf("%f", &raio);
            printf("Perimetro: %.3f", perimetro(raio));
            break;
        case 2:
            limpa_ecra();
            printf("Raio: ", raio);
            scanf("%f", &raio);
            printf("Area: %.3f", area(raio));
            break;
    }
    return 0;
}

void menu(void)
{
    printf("\n1. Perimetro");
    printf("\n2. Area");
    printf("\nO que deseja calcular? ");
}

float area(float raio)
{
    return PI * pow(raio, 2);
}

float perimetro(float raio)
{
    return pow(PI, 2) * raio;
}

void limpa_ecra(void)
{
    #ifdef _WIN32 //diretiva de pré-processador.
        system("cls");
    #else
        system("clear");
    #endif
}