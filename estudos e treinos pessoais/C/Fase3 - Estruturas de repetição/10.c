#include <stdio.h>

int main()
{
    int opcao;
    float saldo = 1000.00;
    float valor;

    do
    {
        printf("\n=== CAIXA AUTOMÁTICO ===\n");
        printf("\n1 -> Consultar saldo.\n");
        printf("2 -> Depositar dinheiro.\n");
        printf("3 -> Sacar dinheiro.\n");
        printf("0 -> Sair.\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0)
        {
            printf("\nEncerrando atendimento...\n");
        }

        else if (opcao == 1)
        {
            printf("\nSaldo disponível: R$%.2f\n", saldo);
        }

        else if (opcao == 2)
        {
            printf("\nDigite o valor a ser depositado: ");
            scanf("%f", &valor);

            if (valor <= 0)
            {
                printf("\nValor de depósito inválido.\n");
            }
            else
            {
                saldo = saldo + valor;

                printf("\nOperação concluída!");
                printf("\nSeu saldo atualizado é: R$%.2f\n", saldo);
            }
        }

        else if (opcao == 3)
        {
            printf("\nDigite o valor a ser sacado: ");
            scanf("%f", &valor);

            if (valor <= 0)
            {
                printf("\nValor de saque inválido.\n");
            }
            else if (valor > saldo)
            {
                printf("\nSaldo insuficiente.\n");
            }
            else
            {
                saldo = saldo - valor;

                printf("\nOperação concluída!");
                printf("\nSeu saldo atualizado é: R$%.2f\n", saldo);
            }
        }

        else
        {
            printf("\nOpção inválida, tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}