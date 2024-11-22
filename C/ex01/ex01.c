#include <stdio.h>
#define MAX_L 2
#define MAX_C 2


void leitura(int matriz[][MAX_C]);
int media_diagonal(int matriz[][MAX_C]); 
void superior_media(int matriz[][MAX_C], int mdiagonal);


int main()
{
    int matriz[MAX_L][MAX_C];
    int mdiagonal = 0;

    leitura(matriz);
    mdiagonal = media_diagonal(matriz);
    superior_media(matriz, mdiagonal);

    return 0;
}

void leitura(int matriz[][MAX_C])
{
    printf("\nDigite %d valores inteiros.\n", MAX_L * MAX_C);
    for (int linha = 0; linha < MAX_L; linha++)
    {   
        for (int coluna = 0; coluna < MAX_C; coluna++)
        {
            printf("Elemento [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);           
        }
    }
}

int media_diagonal(int matriz[][MAX_C])
{
    int soma = 0;
    for (int linha = 0; linha < MAX_L; linha++)
    {   
        for (int coluna = 0; coluna < MAX_C; coluna++)
        {
            if (linha == coluna)
                soma += matriz[linha][coluna];
        }
    }
    return printf("\nMedia: %d", soma / MAX_L);
}

void superior_media(int matriz[][MAX_C], int m_diagonal)
{

    int vetor[MAX_L * MAX_C];
    int indice = 0;
    for (int linha = 0; linha < MAX_L; linha++)
    {   
        for (int coluna = 0; coluna < MAX_C; coluna++)
        {
            if (matriz[linha][coluna] > m_diagonal)
            {
                vetor[indice] = matriz[linha][coluna];   
                indice++;
            }    
        }
    }
    
    printf("\nVetor: ");
    for (int i = 0; i < indice; i++)
        printf("%d ", vetor[i]);
}
