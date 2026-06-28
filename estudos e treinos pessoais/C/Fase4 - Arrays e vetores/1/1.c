#include <stdio.h>

int main()
{
    int numeros[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros digitados:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}