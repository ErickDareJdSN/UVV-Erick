#include <stdio.h>

int main()
{
    float nota;
    float soma = 0;
    float media;
    int quantidade = 0;

    printf("\n=== MÉDIA DE NOTAS ===\n");

    do
    {
        printf("\nDigite uma nota válida, de 0 a 10 (ou -1 pra encerrar): ");
        scanf("%f", &nota);

        if (nota == -1)
        {
            // Encerra o loop
        }

        else if (nota < 0 || nota > 10)
        {
            printf("\nNota inválida, tente novamente.\n");
        }

        else
        {
            soma = soma + nota;
            quantidade++;
        }

    } while (nota != -1);

    printf("\n=== RESULTADOS ===\n");

    if (quantidade == 0)
    {
        printf("\nNenhuma nota válida foi registrada.\n");
    }
    else
    {
        media = soma / quantidade;

        printf("\nQuantidade de notas válidas digitadas: %d", quantidade);
        printf("\nMédia das notas da turma: %.2f\n", media);
    }

    return 0;
}