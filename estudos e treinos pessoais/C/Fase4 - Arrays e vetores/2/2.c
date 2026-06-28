#include <stdio.h>

int main()
{
    int num[5];
    int i;
    int num_restantes = 5;  // Variáveis
    int num_sum = 0;
    float num_avg;
    int num_pos;

    printf("\n=== SOMA E MÉDIA DE 5 NÚMEROS ===\n");

    for (i = 0; i < 5; i++) // Preenchemento dos vetores
    {
        num_pos = i + 1; // Corrige a posição dos números nos prints, dessa forma o primeiro
                         // número fica na posição "1º", e não "0º"

        printf("Digite o valor do %dº número (faltam %d): ", num_pos, num_restantes);
        scanf("%d", &num[i]);

        num_restantes--;
    }

    printf("\n=== RESULTADOS ===\n\n");

    for (i = 0; i < 5; i++) // Checa quantos prints vão ser feitos na saída do programa
    {
        num_pos = i + 1;    // Mesma coisa do primeiro for

        printf("%dº número digitado: %d\n", num_pos, num[i]);

        num_sum = num_sum + num[i];
    }

    num_avg = num_sum / 5.0;

    printf("\nMédia dos 5 números: %.2f\n", num_avg);
    printf("Soma dos 5 números: %d\n", num_sum);

    return 0;
}