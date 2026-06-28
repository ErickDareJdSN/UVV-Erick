#include <stdio.h>

int main()
{
    int num[5];
    int i;
    int num_max; // Variáveis
    int num_min;
    int num_qtd = 5;
    int num_pos;

    printf("\n=== MAIOR E MENOR DE 5 NÚMEROS===\n\n");

    for (i = 0; i < 5; i++) // Preenche os vetores
    {
        num_pos = i + 1; // Corrige a posição dos números nos prints, dessa forma o primeiro
                         // número fica na posição "1º", e não "0º"

        printf("Digite o %dº número (restam %d): ", num_pos, num_qtd);
        scanf("%d", &num[i]);

        num_qtd--;

        num_max = num[0]; // Atribui o valor do primeiro vetor
        num_min = num[0]; // nas variáveis de maior e menor número

        if (num[i] > num_max)
        {
            num_max = num[i];
        }                     // Esse bloco de if's checa se o valor do vetor digitado é maior/menor
                              // do que o vetor anterior, se a condição for verdadeira, o valor
        if (num[i] < num_min) // das váriaveis "num_max" e "num_min" é atualizado de acordo com o caso.
        {
            num_min = num[i];
        }
    }
    printf("\n=== RESULTADOS ===\n\n");

    for (i = 0; i < 5; i++) // Checa quantos prints vão ser feitos na saída do programa
    {
        num_pos = i + 1; // Mesma coisa do primeiro for

        printf("%dº número digitado: %d\n", num_pos, num[i]);
    }

    printf("\nMaior número digitado: %d\n", num_max);
    printf("Menor número digitado: %d", num_min);

    return 0;
}