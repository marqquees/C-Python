#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        puts("Ola!\n");
    else
    {
        for (int i = 1; i < argc; i++)
            printf("Ola %s\n", argv[i]);      
    }
    return 0; 
}