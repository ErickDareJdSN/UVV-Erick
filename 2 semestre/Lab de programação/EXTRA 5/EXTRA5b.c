#include <stdio.h>
#include <stdlib.h>

float n1, n2, n3, maior, menor, avg;

int main()
{
    printf("Digite três números quaisquer e distintos.");
    printf("\n\nDigite o primeiro número: ");

    while (scanf("%f", &n1) != 1)
    {
        printf("\nErro, digite um número válido: ");

        while (getchar() != '\n')
            ;
    }

    maior = n1;

    printf("\n\nDigite o segundo número: ");

    while (scanf("%f", &n2) != 1 || n2 == n1)
    {
        printf("\nErro, digite um número válido e diferente de %.2f: ", n1);

        while (getchar() != '\n')
            ;
    }

    if (n2 > maior)
    {
        maior = n2;
        menor = n1;
    }

    else
    {
        menor = n2;
    }

    printf("\n\nDigite o terceiro e último número: ");

    while (scanf("%f", &n3) != 1 || n3 == n2 || n3 == n1)
    {
        printf("Número inválido, digite um número válido e diferente de %.2f e %.2f: ", n1, n2);

        while (getchar() != '\n')
            ;
    }

    if (n3 > maior)
    {
        maior = n3;
    }

    else if (n3 < menor)
    {
        menor = n3;
    }

    avg = (maior + menor) / 2;

    printf("\n\n===RESULTADO===\n\n");
    printf("Maior número digitado: %.2f", maior);
    printf("\nMenor número digitado: %.2f", menor);
    printf("\n\nMédia entre o maior e o menor número: %.2f", avg);

    return 0;
}