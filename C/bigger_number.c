#include <stdio.h>
#include <string.h>

int big_number(float number, char digit[], int bigger_number);

int main()
{
    float number;
    int bigger_number = 0;
    char digit[10];
    printf("BIGGER NUMBER\n");

    printf("\nEnter the number: ");
    scanf("%f", &number);

    sprintf(digit, "%f", number);

    printf("\nThe bigger number is: %d\n", big_number(number, digit, bigger_number));

    return 0;
}

int big_number(float number, char digit[], int bigger_number)
{
    for (int i = 0; i < strlen(digit); i++)
    {
        if (digit[i] >= '0' && digit[i] <= '9')
        {
            int current_digit = digit[i] - '0'; // Convert char to int.
            if (current_digit > bigger_number)
                bigger_number = current_digit;
        }
    }
    return bigger_number;
}