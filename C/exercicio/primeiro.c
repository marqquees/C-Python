#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc == 2)
        printf("Hello, %s!\n", argv[1]);
    else if (argc == 3)
        printf("Hello, %s!\n", argv[2]);
    else
        printf("Default");
    return 0;
}
