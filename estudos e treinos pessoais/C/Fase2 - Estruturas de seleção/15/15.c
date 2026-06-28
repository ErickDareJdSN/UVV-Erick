#include <stdio.h>

int main()
{

    float nota;

    printf("Digite uma nota (Ex.: 7.8): ");
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 10)
    {
        printf("\n");
        printf("Nota válida");
    }

    else
    {
        printf("\n");
        printf("Nota inválida.");
    }

    return 0;
}