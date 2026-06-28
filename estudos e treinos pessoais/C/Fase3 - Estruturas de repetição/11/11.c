#include <stdio.h>

int main()
{
    float total_vendas = 0;
    float maior_venda = 0;
    float menor_venda = 0;
    float media_vendas;
    float valor_venda;

    int quantidade_vendas = 0;
    int opcao;

    do
    {
        printf("\n=== SISTEMA DE VENDAS ===\n");
        printf("\n1 -> Registrar venda.\n");
        printf("2 -> Ver resumo do dia.\n");
        printf("0 -> Encerrar sistema.\n");

        printf("\nSelecione uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0)
        {
            printf("\nEncerrando sistema...\n");
        }

        else if (opcao == 1)
        {
            printf("\nDigite o valor da venda a ser registrada: ");
            scanf("%f", &valor_venda);

            while (valor_venda <= 0)
            {
                printf("\nValor inválido, tente novamente: ");
                scanf("%f", &valor_venda);
            }

            printf("\nVenda registrada com sucesso!\n");

            total_vendas = total_vendas + valor_venda;
            quantidade_vendas++;

            if (quantidade_vendas == 1)
            {
                maior_venda = valor_venda;
                menor_venda = valor_venda;
            }
            else
            {
                if (valor_venda > maior_venda)
                {
                    maior_venda = valor_venda;
                }

                if (valor_venda < menor_venda)
                {
                    menor_venda = valor_venda;
                }
            }
        }

        else if (opcao == 2)
        {
            printf("\n=== RESUMO DO DIA ===\n");

            if (quantidade_vendas < 1)
            {
                printf("\nNenhuma venda registrada até o momento.\n");
            }

            else
            {
                media_vendas = total_vendas / quantidade_vendas;

                printf("\nQuantidade de vendas: %d\n", quantidade_vendas);
                printf("Total vendido: R$%.2f\n", total_vendas);
                printf("Maior venda: R$%.2f\n", maior_venda);
                printf("Menor venda: R$%.2f\n", menor_venda);
                printf("Média das vendas: R$%.2f\n", media_vendas);
            }
        }

        else
        {
            printf("\nOpção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}