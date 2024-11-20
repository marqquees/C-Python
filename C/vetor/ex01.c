#include <stdio.h>

int vetor();


int main()
{
    int op;

    printf("PROGRAMAS\n");
    printf("\nEscolha o programa.");
    printf("\n1. Vetor");
    scanf("\n%d", &op);

    while (op < 1 && op > 4)
    {
        printf
    }
    
    switch (op)
    {
        case 1:
            vetor();
            break;
        
        default:
            break;
    }
    return 0;
}

int vetor()
{
    int vetor_inteiro[10];
    int tamanho_vetor_inteiro = sizeof(vetor_inteiro) / sizeof(vetor_inteiro[0]);

    printf("VETOR\n");

    printf("\nDigite dez valores inteiros.\n\n");
    for (int i = 0; i < tamanho_vetor_inteiro; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vetor_inteiro[i]);
    }

    printf("\nOs valores digitados foram: ");
    for (int i = 0; i < tamanho_vetor_inteiro; i++)
    {
        printf("%d ", vetor_inteiro[i]);
    }
    
}