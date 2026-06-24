#include <stdio.h>

int main()
{

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\n");
        printf("O número é par.\n");
    }

    else
    {
        printf("\n");
        printf("O número é ímpar.\n");
    }

    return 0;
}