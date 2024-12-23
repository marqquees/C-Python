#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>


#include "assinatura.h"

void menu(void)
{
    int opcao = 0;

    do
    {
        puts("1. Adicionar Casa");
        puts("2. Consultor");
        puts("\n0. Sair");

        puts("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                adicionar_casa();
                break;
            case 2:
                consultor();
                break;
            case 0:
                sair();
                break;
            default:
                puts("\nOpcao invalida! Digite novamente.");
                break;
        }
    } while (opcao != 0);
}

void adicionar_casa(void)
{
    puts("Funcao adicionar casa chamada!\n");
}

void consultor(void)
{
    
}

void sair(void)
{
    exit(EXIT_SUCCESS);
}
