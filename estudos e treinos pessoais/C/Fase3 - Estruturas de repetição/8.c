#include <stdio.h>

int main()
{
    int num;
    int soma = 0;

    printf("\n=== SOMA DE NÚMEROS ===\n");
    printf("\n");
    printf("Digite um número a ser somado (ou 0 para encerrar): \n");
    scanf("%d", &num);
    printf("\n");

    do
    {
        if (num != 0)
        {
            soma = soma + num;

            printf("\nDigite mais um número (ou 0 para encerrar): \n");
            scanf("%d", &num);
            printf("\n");
        }

    } while (num != 0);

    printf("\n=== RESULTADO ===\n");
    printf("\n");
    printf("Soma dos números digitados: %d", soma);
    printf("\n");
    printf("\nEncerrando...");

    return 0;
}