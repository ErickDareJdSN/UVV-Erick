#include <stdio.h>

int main()
{

    int num;
    int i = 1;
    int resultado;

    printf("\n===TABUADA DO BALACOBACO===\n");
    printf("\n");
    printf("Digite um número inteiro qualquer pra calcular a tabuada dele de 1 a 10: ");
    scanf("%d", &num);

    printf("\n");
    printf("\n===RESULTADOS DA TABUADA DE %d===\n", num);

    while (i <= 10)
    {
        resultado = num * i;

        printf("%d x %d: %d\n", num, i, resultado);
        printf("\n");

        i++;
    }

    return 0;
}