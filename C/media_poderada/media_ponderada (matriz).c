/*
    Calcule a média de 5 alunos, sabendo que cada aluno é composto de 3 notas.
    Calcule a média ponderada, sabendo que as duas primeiras notas contam 40% cada da nota final e da terceira conta 20%. 
    O programa deve escrever a média para o ecrã.
*/

#include <stdio.h>

const float peso[3] = {0.4, 0.4, 0.2};

void media_ponderada(int tamanho_vetor_nome_aluno, float numero_nota, char nome_aluno[][10], float nota_aluno[][3]);

int main(void)
{
    puts("Media Ponderada dos Alunos\n");

    char nome_aluno[5][10] = {'0'};
    float nota_aluno[5][3] = {0};
    int tamanho_vetor_nome_aluno = sizeof(nome_aluno) / sizeof(nome_aluno[0]);
    int numero_nota = sizeof(nota_aluno[0]) / sizeof(nota_aluno[0][0]);

    // Lê o nome dos cinco estudantes.
    printf("Digite o nome de cinco alunos.\n");
    for (int i = 0; i < tamanho_vetor_nome_aluno; i++)
    {
        printf("Alunos %d: ", i + 1);
        scanf("%s", nome_aluno[i]);
    }

    // Lê as notas de cada estudante.
    for (int linha = 0; linha < tamanho_vetor_nome_aluno; linha++)
    {
        printf("\nDigite as notas do aluno %s\n", nome_aluno[linha]);
        for (int coluna = 0; coluna < numero_nota; coluna++)
        {
            printf("Digite a nota %d: ", coluna + 1);
            scanf("%f", &nota_aluno[linha][coluna]);
        }
        printf("\n");
    }

    media_ponderada(tamanho_vetor_nome_aluno, numero_nota, nome_aluno, nota_aluno);
    return 0;
}

void media_ponderada(int tamanho_vetor_nome_aluno, float numero_nota, char nome_aluno[][10], float nota_aluno[][3])
{
    for (int linha = 0; linha < tamanho_vetor_nome_aluno; linha++)
    {
        float media_ponderada = 0;
        for (int coluna = 0; coluna < numero_nota; coluna++)
            media_ponderada += nota_aluno[linha][coluna] * peso[coluna];
        printf("\nA média ponderada do aluno %s e %.2f", nome_aluno[linha], media_ponderada);
    }
}