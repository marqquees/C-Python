#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2);

int main(void)
{
    float x1 = 0, y1 = 0;
    float x2 = 0, y2 = 0;

    puts("Distancia Euclidiana\n");

    puts("Ponto 1");
    printf("X1: ");
    scanf("%f", &x1);
    printf("Y1: ");
    scanf("%f", &y1);
    
    puts("Ponto 2");
    printf("\nX2: ");
    scanf("%f", &x2);
    printf("Y2: ");
    scanf("%f", &y2);
    
    printf("\nDistancia: %.2f", distancia(x1, y1, x2, y2));

    return 0;
}

float distancia(float x1, float y1, float x2, float y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); 
}
