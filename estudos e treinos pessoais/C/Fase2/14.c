#include <stdio.h>

int main()
{

    float cel;

    printf("Digite uma temperatura em graus Celsius (0.0): ");
    scanf("%f", &cel);

    if (cel < 15)
    {
        printf("\n");
        printf("Está frio.\n");
    }

    else if (cel >= 15 && cel <= 25)
    {
        printf("\n");
        printf("Está agradável.\n");
    }

    else
    {
        printf("\n");
        printf("Está quente.\n");
    }

    return 0;
}