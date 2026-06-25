#include <stdio.h>

int main()
{
    int i = 1;
    int soma = 0;

    while (1)
    {
        soma = soma + i;
        i++;

        if (i > 10)
        {

            break;
        }
    }

    printf("A soma de 1 a 10 é igual a: %d", soma);
    return 0;
}