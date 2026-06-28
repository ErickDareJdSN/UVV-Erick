#include <stdio.h>

int main()
{
    int num[6];          // Vetor responsável por armazenar os 6 números digitados
    int pares = 0;       // Conta quantos números pares foram encontrados
    int impares = 0;     // Conta quantos números ímpares foram encontrados
    int sum_pares = 0;   // Acumula a soma dos números pares
    int sum_impares = 0; // Acumula a soma dos números ímpares
    int pos_num;
    int i;

    printf("\n=== PARES E ÍMPARES ===\n\n");

    for (i = 0; i < 6; i++) // Preenche o vetor com os valores digitados pelo usuário
    {
        pos_num = i + 1; // Corrige a posição exibida no printf, pois o vetor começa na posição 0

        printf("Digite o %dº número: \n", pos_num);
        scanf("%d", &num[i]);

        while (num[i] <= 0 || num[i] > 100) // Garante que o número esteja entre 1 e 100
        {
            printf("Valor inválido, digite um número entre 1 e 100: \n");
            scanf("%d", &num[i]);
        }
    }

    for (i = 0; i < 6; i++) // Percorre o vetor para separar os números em pares e ímpares
    {
        if (num[i] % 2 == 0) // O resto da divisão por 2 igual a 0 indica que o número é par
        {
            pares++;
            sum_pares = sum_pares + num[i]; // Soma o valor atual ao total de pares
        }

        else
        {
            impares++;
            sum_impares = sum_impares + num[i]; // Soma o valor atual ao total de ímpares
        }
    }

    printf("\n=== NÚMEROS DIGITADOS ===\n\n");

    for (i = 0; i < 6; i++) // Exibe todos os valores armazenados no vetor
    {
        pos_num = i + 1;

        printf("%dº número: %d\n", pos_num, num[i]);
    }

    printf("\n=== RESULTADOS ===\n\n");
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de ímpares: %d\n\n", impares);
    printf("Soma dos pares: %d", sum_pares);
    printf("Soma dos ímpares: %d", sum_impares);

    return 0;
}
