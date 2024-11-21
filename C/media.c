#include <stdio.h>

float media(float n1, float n2);

int main()
{
    printf("MEDIA\n");
    
    float number1, number2, resultado;

    printf("\nNota 1: ");
    scanf("%f", &number1);
    printf("Nota 2: ");
    scanf("%f", &number2);

    resultado = media(number1, number2);

    if (resultado >= 10)
        printf("\nAPROVADO");
    else
        printf("\nREPROVADO");
    return 0;
}

float media(float n1, float n2) 
{
    return (n1 + n2) / 2;
}
