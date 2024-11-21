#include <stdio.h>
#include <stdlib.h>

void limpa_ecra()
{
    #ifdef _WIN32 ////diretiva de pré-processador.
        system("cls");
    #else
        system("clear");
    #endif
}
void imprime(int vetor_inteiro[], int tamanho_vetor_inteiro);
void vetor();
int maior_numero(int numero[], int tamanho_vetor_numero);
int menor_numero(int numero[], int tamanho_vetor_numero);
void diferenca();

int main()
{
    int op = 0;

    printf("PROGRAMAS\n");
    printf("\nEscolha o programa.\n");
    printf("\n1. Vetor\n");
    printf("2. Diferenca\n");
    scanf("\n%d", &op);

    while (op < 1 || op > 2)
    {
        printf("\nDigite um numero entre (1 e 2).\n");
        scanf("\n%d", &op);
    }
    switch (op)
    {
        case 1:
            limpa_ecra();
            vetor();
            break;
        case 2:
            limpa_ecra();
            diferenca();
            break;
    }
    return 0;
}

void imprime(int vetor_inteiro[], int tamanho_vetor_inteiro)
{
    printf("\nValores digitados: ");
    for (int i = 0; i < tamanho_vetor_inteiro; i++)
        printf("%d ", vetor_inteiro[i]);
}

void vetor()
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
    imprime(vetor_inteiro, tamanho_vetor_inteiro);
}

int maior_numero(int numero[], int tamanho_vetor_numero)
{
    int maior_numero = numero[0];
    for (int i = 1; i < tamanho_vetor_numero; i++)
    {
        if (numero[i] > maior_numero)
            maior_numero = numero[i];
    }
    return maior_numero;
}

int menor_numero(int numero[], int tamanho_vetor_numero)
{
    int menor_numero = numero[0];
    for (int i = 1; i < tamanho_vetor_numero; i++)
    {
        if (numero[i] < menor_numero)
            menor_numero = numero[i];
    }
    return menor_numero;
}

void diferenca()
{
    int numero[10], mai_numero, men_numero, diferenca;
    int tamanho_vetor_numero = sizeof(numero) / sizeof(numero[0]);

    printf("\nDIFERENCA\n");

    printf("\nDigite dez valores inteiros.\n\n");
    for (int i = 0; i < tamanho_vetor_numero; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &numero[i]);
    }
    
    mai_numero = maior_numero(numero, tamanho_vetor_numero);
    men_numero = menor_numero(numero, tamanho_vetor_numero);
    diferenca = mai_numero - men_numero;

    printf("\nMaior numero: %d", mai_numero);
    printf("\nMenor numero: %d", men_numero);
    printf("\nDiferenca: %d", diferenca);
}