#include <stdio.h>

int main()
{
    float salario;
    float valor_emprestimo;
    int numero_parcelas;
    float valor_parcela;
    float limite_parcela;

    printf("===SIMULADOR DE EMPRÉSTIMOS===\n");
    printf("\n");

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);

    if (salario <= 0)
    {
        printf("Erro: O valor do salário deve ser maior que zero.\n");
    }

    else
    {
        printf("\n");
        printf("Digite o valor do empréstimo desejado: ");
        scanf("%f", &valor_emprestimo);

        if (valor_emprestimo <= 0)
        {
            printf("Erro: O valor do empréstimo deve ser maior que zero.\n");
        }

        else
        {
            printf("\n");
            printf("Digite o número de parcelas: ");
            scanf("%d", &numero_parcelas);

            if (numero_parcelas <= 0)
            {
                printf("Erro: O número de parcelas deve ser maior que zero.\n");
            }

            else
            {
                valor_parcela = valor_emprestimo / numero_parcelas;
                limite_parcela = salario * 0.30;

                printf("\n===RESULTADO DA SIMULAÇÃO===\n");

                printf("\n");
                printf("Valor das parcelas: R$%.2f\n", valor_parcela);
                printf("Valor máximo permitido por parcela: R$%.2f\n", limite_parcela);

                if (valor_parcela <= limite_parcela){
                    printf("Status: Empréstimo aprovado.\n");
                }

                else{
                    printf("Status: Empréstimo negado.\n");
                }
            }
        }
    }

    return 0;
}