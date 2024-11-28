#include <stdio.h>

#define MAX_L 5
#define MAX_C 3

int main()
{
    float altura, largura, area;
    float matriz[MAX_L][MAX_C] = {0};
    int numero_retangulo;
    printf("RETANGULO\n");

    printf("\nQuantos retangulos prentende inserir? (Max: 5) ");
    scanf("%d", &numero_retangulo);

    if (numero_retangulo > MAX_L)
    {
        printf("Numero de retangulos excede o maximo permitido (%d).\n", MAX_L);
        return 1;
    }
    
    for (int linha = 0; linha < numero_retangulo; linha++)
    {
        printf("\nRetangulo %d", linha + 1);
        printf("\nAltura: ");
        scanf("%f", &altura);
        matriz[linha][0] = altura;
        printf("Largura: ");
        scanf("%f", &largura);
        matriz[linha][1] = largura;
        area = altura * largura;
        printf("Area: %.2f\n", area);
        matriz[linha][2] = area;
    }
        
    printf("\nAltura | Largura | Area\n");
    for (int linha = 0; linha < numero_retangulo; linha++)
        printf("%.1f | %.1f | %.1f\n", matriz[linha][0], matriz[linha][1], matriz[linha][2]);
    return 0;
}
