#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int linha, coluna;

    int len = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    for (linha = 0; linha < len; linha++)
    {
        for (coluna = 0; coluna < len; coluna++)
            printf("%d", matriz[linha][coluna]);
        printf("\n");
    }  
    return 0;
}
