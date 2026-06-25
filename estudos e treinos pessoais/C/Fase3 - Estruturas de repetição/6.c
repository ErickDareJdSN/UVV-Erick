#include <stdio.h>

int main()
{
    float nota;

    printf("Digite uma nota válida entre 0 e 10: \n");
    scanf("%f", &nota);
    printf("\n");

    while (nota < 0 || nota > 10)
    {
        printf("\n");
        printf("Nota inválida, tente novamente: \n");
        scanf("%f", &nota);
    }

    printf("Nota válida, você tirou %.2f!\n", nota);

    return 0;
}