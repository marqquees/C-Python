#include <stdio.h>
#define MAX_L 2
#define MAX_C 2

void leitura(int matriz[][MAX_C]);
float media_diagonal(int matriz[][MAX_C]); 
void superior_media(int matriz[][MAX_C], float mdiagonal);
void ocorrencia(int matriz[][MAX_C], int matriz_ocorr[][2]);


int main()
{
    int matriz[MAX_L][MAX_C] = {0};
    int matriz_ocorr[MAX_L * MAX_C][2] = {0};
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

void ocorrencia(int matriz[][MAX_C], int matriz_ocorr[][2])
{
    int indice = 0;

    //Conta a(s) ocorrencia(s) dos elemento(s) da matriz.
    for (int linha = 0; linha < MAX_L; linha++)
    {
        for (int coluna = 0; coluna < MAX_C; coluna++)
        {
            int encontrado = 0;
            for (int i = 0; i < indice; i++)
            {
                // Verifica se o valor já foi contado
                if (matriz[linha][coluna] == elemento[i])
                {
                    encontrado = 1;
                    contador[i]++;
                    break;
                }
            }
            // Se o valor ainda não foi contado, adiciona à matriz_ocorr
            if (!encontrado) {
                matriz_ocorr[indice][0] = matriz[linha][coluna]; // Armazena o valor
                matriz_ocorr[indice][1] = 1; // Inicializa a contagem como 1
                indice++; // Incrementa o contador de elementos únicos
            }
        }
    }
    
    // Percorre todos os elementos da matriz
    for (i = 0; i < MAX_L; i++) {
        for (j = 0; j < MAX_C; j++) {
            int encontrado = 0;

            // Verifica se o valor já foi contado
            for (int k = 0; k < num_elementos; k++) {
                if (matriz_ocorr[k][0] == matriz[i][j]) {
                    matriz_ocorr[k][1]++; // Incrementa a contagem do valor
                    encontrado = 1;
                    break;
                }
            }

            // Se o valor ainda não foi contado, adiciona à matriz_ocorr
            if (!encontrado) {
                matriz_ocorr[num_elementos][0] = matriz[i][j]; // Armazena o valor
                matriz_ocorr[num_elementos][1] = 1; // Inicializa a contagem como 1
                num_elementos++; // Incrementa o contador de elementos únicos
            }
        }
    }



    printf("\n\nElemento(s) | Ocorrencia(s)");
    for (int i = 0; i < indice; i++)
        printf("\n%8d | %11d", matriz_ocorr[i][0], matriz_ocorr[i][1]);
}