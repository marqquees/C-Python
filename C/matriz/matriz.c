#include <stdio.h>
#define MAX_L 2
#define MAX_C 2

void leitura(int matriz[][MAX_C]);
float media_diagonal(int matriz[][MAX_C]); 
void superior_media(int matriz[][MAX_C], float mdiagonal);
int ocorrencia(int matriz[][MAX_C], int matriz_ocorr[][2]);


int main()
{
    int matriz[MAX_L][MAX_C];
    int matriz_ocorr[MAX_L * MAX_C][2];
    int mdiagonal = 0;

    leitura(matriz);
    mdiagonal = media_diagonal(matriz);
    superior_media(matriz, mdiagonal);
    ocorrencia(matriz, matriz_ocorr);

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

float media_diagonal(int matriz[][MAX_C])
{
    float soma = 0, media = 0;
    for (int linha = 0; linha < MAX_L; linha++)
        soma += matriz[linha][linha];

    media = soma / MAX_L;
    printf("\nMedia: %.1f", media);
    return media;
}

void superior_media(int matriz[][MAX_C], float m_diagonal)
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
        printf("%d | ", vetor[i]);
}

int ocorrencia(int matriz[][MAX_C], int matriz_ocorr[][2])
{

}