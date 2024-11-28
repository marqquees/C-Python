#include <stdio.h>
const float PI = 3.1415;

int main()
{
    float area, raio;
    printf("\nPI = %f\n", PI);

    printf("Raio: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    printf("Area: %.3f\n", area);

    return 0;
}
