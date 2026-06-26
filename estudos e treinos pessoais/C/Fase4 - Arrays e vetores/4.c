#include <stdio.h>

int main()
{
    int qtd_num = 5;
    int pos_num;
    int aprovados = 0;
    int em_recuperacao = 0; // Variáveis int
    int reprovados = 0;
    int i;

    float num[5];
    float sum_num = 0;
    float avg_num;
    float max_num; // Variávies float
    float min_num;

    printf("\n=== SISTEMA DE CÁLCULO DE NOTAS===\n\n");

    for (i = 0; i < 5; i++) // Preenche os vetores
    {
        pos_num = i + 1; // Corrige a posição dos números nos prints, dessa forma o primeiro
                         // número fica na posição "1º", e não "0º"

        printf("Digite a %dº nota (restam %d): ", pos_num, qtd_num);
        scanf("%f", &num[i]);

        while (num[i] < 0 || num[i] > 10) // Verifica a validade da nota
        {
            printf("Nota inválida, digite uma nota entre 0 e 10: ");
            scanf("%f", &num[i]);
        }

        sum_num = sum_num + num[i]; // Calcula a soma das notas

        if (i == 0)
        {
            max_num = num[i];
            min_num = num[i];
        }
        else
        {
            if (num[i] > max_num) // Esse bloco de if's checa se o valor do vetor digitado é maior/menor
                                  // do que o vetor anterior, se a condição for verdadeira, o valor
                                  // das váriaveis "num_max" e "num_min" é atualizado de acordo com o caso.
            {
                max_num = num[i];
            }

            if (num[i] < min_num)
            {
                min_num = num[i];
            }
        }

        if (num[i] >= 7)
        {
            aprovados++; // Esse bloco de if's checa se o vetor digitado satisfaz a condição de
                         // aprovado / em recuperação / reprovado, e depois realiza um incremento em
                         // sua respectiva variável de acordo com o caso
        }
        else if (num[i] >= 3)
        {
            em_recuperacao++;
        }
        else
        {
            reprovados++;
        }

        qtd_num--; // Decremento de i
    }

    avg_num = sum_num / 5; // Realiza a média da soma dos vetores

    printf("\n=== RESULTADOS ===\n\n");
    printf("Média da turma: %.2f\n", avg_num);
    printf("Maior nota: %.2f\n", max_num);
    printf("Menor nota: %.2f\n\n", min_num);
    printf("Alunos aprovados: %d\n", aprovados);
    printf("Alunos em recuperação: %d\n", em_recuperacao);
    printf("Alunos reprovados: %d\n", reprovados);

    return 0;
}