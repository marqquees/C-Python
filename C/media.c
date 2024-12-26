#include <stdio.h>

float media(float n1, float n2);

int main(void)
{
    float nota1 = 0, nota2 = 0, resultado = 0;

    puts("Media\n");

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    if (media(nota1, nota2) >= 10)
        puts("\nAPROVADO");
    else
        puts("\nREPROVADO");
    return 0;
}

float media(float n1, float n2)
{
    return (n1 + n2) / 2;
}
