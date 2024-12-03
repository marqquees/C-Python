/*
    Escrevam um programa que leia a altura e largura de um retângulo, 
    verifique se é um quadrado (ou seja, Largura = Altura) e imprima (“É um quadrado.") no caso de ser e não imprima nada no caso de não ser. 
    
    Alterem o programa para imprimir ("É um retângulo") no caso dos lados não serem iguais. 
    
    Alterem outra vez o programa para no caso dos lados não serem iguais e
    verificar se a largura é maior que a altura ou se a altura é maior do que a largura e emitir essa informação ao utilizador. 
    
    Alterem de novo o programa desta vez para alterar dois retângulos e executar o código desenvolvido para cada um deles, 
    no final devemos ainda imprimir qual deles tem uma área maior. 
    
    Por fim, alterem o programa para que o utilizador indique quantos retângulos pretende introduzir (até 5),
    leiam todos esses retângulos e guardem o lado e a altura e a área numa matriz [5][3], antes de executarem o código para cada um deles. 
*/

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
