#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("\n");

    printf("\n");
    printf("Agora digite outro número: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("\n");
        printf("O primeiro número é maior.\n");
    }

    else if (num1 == num2)
    {
        printf("\n");
        printf("Os dois números são iguais.\n");
    }

    else
    {
        printf("\n");
        printf("O segundo número é maior.\n");
    }

    return 0;
}