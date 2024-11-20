#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#define PI 3.1415
const float PI = 3.1415;

void menu(void);
void limpa_ecra(void);
float area(float raio);
float perimetro(float raio);

int main()
{
    float raio = 0;
    int op;

    printf("PERIMETRO/AREA de CIRCUFERENCIA\n");

    printf("\n1. Perimetro");
    printf("\n2. Area");
    printf("\nO que deseja calcular? ");
    scanf("%d", &op);

    while (op != 1 && op != 2)
    {
        limpa_ecra();
        printf("\nDigite uma opcao valida (1 ou 2).\n");
        menu();
        printf("\nO que deseja calcular? ");
        scanf("%d", &op);
    }
    
    switch (op)
    {
        case 1:
            limpa_ecra();
            printf("\nRaio: ", raio);
            scanf("%f", &raio);
            printf("\nPerimetro: %.3f", perimetro(raio));
            break;
        case 2:
            limpa_ecra();
            printf("\nRaio: ", raio);
            scanf("%f", &raio);
            printf("\nArea: %.3f", area(raio));
            break;
        //default:
            //break;
    }

    return 0;
}


void menu(void)
{
    printf("\n1. Perimetro");
    printf("\n2. Area");
}

void limpa_ecra(void)
{
    #ifdef _WIN32 //diretiva de pré-processador.
        system("cls");
    #else
        system("clear");
    #endif
}

float area(float raio)
{
    return PI * pow(raio, 2);
}

float perimetro(float raio)
{
    return pow(PI, 2) * raio;
}
