/*
Escreva um pequeno programa que peça a nota de três testes de um aluno, calcule a média ponderada, 
sabendo que as duas primeiras notas contam 40% cada da nota final e da terceira conta 20%. O
programa deve escrever a média para o ecrã.
*/

#include <stdio.h>
const float peso[3] = {0.4, 0.4, 0.2};

float media_ponderada(int tamanho_vetor, float nota_aluno[]);
int main()
{
    printf("WEIGHTED AVERAGE\n\n");

    float nota_aluno[3];
    char numero_ordinal[3][10] = {"first","second","third"};

    int tamanho_vetor = sizeof(nota_aluno) / sizeof(nota_aluno[0]);
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Enter a %s number: ",numero_ordinal[i]);
        scanf("%f",&nota_aluno[i]);
    }

    //cálculo da média ponderada.
    printf("\nThe weighted average is %.1f", media_ponderada(tamanho_vetor, nota_aluno));

    return 0;
}

float media_ponderada(int tamanho_vetor, float nota_aluno[])
{
    float media_ponderada = 0;
    for (int  i = 0; i < tamanho_vetor; i++)
    {
        media_ponderada += nota_aluno[i] * peso[i];
    }
    return media_ponderada;
}