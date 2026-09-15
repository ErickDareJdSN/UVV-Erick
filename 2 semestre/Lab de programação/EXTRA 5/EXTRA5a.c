#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double av1, av2, pf, mp, mf;
int tf;

int main()
{
    printf("===CALCULADORA DE NOTAS===\n\n");
    printf("Digite a nota da sua AV1: ");

    while (scanf("%lf", &av1) != 1 || av1 < 0 || av1 > 10)
    {
        printf("\n\nNota inválida, tente novamente.\n");
        printf("Digite a nota da sua AV1: ");

        while (getchar() != '\n')
            ;
    }

    printf("\n\nAgora digite a nota da sua AV2: ");

    while (scanf("%lf", &av2) != 1 || av2 < 0 || av2 > 10)
    {
        printf("\n\nNota inválida, tente novamente.\n");
        printf("Digite a nota da sua AV2: ");

        while (getchar() != '\n')
            ;
    }

    printf("\n\nDigite seu número de faltas na disciplina: ");

    while (scanf("%d", &tf) != 1 || tf < 0)
    {
        printf("\n\nNúmero de faltas inválido, tente novamente.\n");
        printf("Digite seu número de faltas na disciplina: ");

        while (getchar() != '\n')
            ;
    }

    if (tf >= 20)
    {
        printf("\n\n===RESULTADO===\n\n");

        printf("Status: REPROVADO POR FALTA.");
    }

    else
    {
        mp = (av1 + av2) / 2;
        mp = round(mp * 10) / 10;

        printf("\n\n===RESULTADO===\n\n");
        printf("Nota da AV1: %.2lf", av1);
        printf("\nNota da AV2: %.2lf", av2);
        printf("\nQuantidade de faltas: %d", tf);
        printf("\nMédia: %.2lf", mp);

        if (mp >= 3 && mp < 7)
        {

            printf("\n\nStatus: EM RECUPERAÇÃO.\n\n");
            printf("Digite a nota da sua prova final: ");

            while (scanf("%lf", &pf) != 1 || pf < 0 || pf > 10)
            {
                printf("\n\nNota inválida, tente novamente.\n");
                printf("Digite a nota da sua prova final: ");

                while (getchar() != '\n')
                    ;
            }

            pf = round(pf * 10) / 10;
            mf = (mp + pf) / 2;

            printf("\n\n===RESULTADO FINAL===\n\n");
            printf("Nota da prova final: %.2lf", pf);
            printf("\nMédia final: %.2lf", mf);

            if (mf >= 5)
            {
                printf("\n\nStatus: APROVADO.");
            }

            else
            {
                printf("\n\nStatus: REPROVADO.");
            }
        }

        else if (mp >= 7)
        {
            printf("\n\nStatus: APROVADO.");
        }

        else
        {
            printf("\n\nStatus: REPROVADO.");
        }
    }

    return 0;
}