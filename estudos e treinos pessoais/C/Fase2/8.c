#include <stdio.h>

int main()
{
    float valor_compra;
    float frete;
    float taxa_desconto;
    float valor_desconto;
    float valor_com_desconto;
    float valor_final;

    int cod_regiao;
    int cod_forma_pagamento;

    printf("\n=== SISTEMA DE PAGAMENTO BEM BOLADO ===\n\n");

    printf("Digite o valor da sua compra: ");
    scanf("%f", &valor_compra);

    if (valor_compra <= 0)
    {
        printf("Erro, o valor da compra deve ser maior que zero.\n");
    }
    else
    {
        printf("\n=== TAXAS DE FRETE ===\n\n");
        printf("Digite o código da sua região pra calcular o frete.\n\n");
        printf("1 - Sudeste: R$15,00\n");
        printf("2 - Sul: R$20,00\n");
        printf("3 - Nordeste: R$25,00\n");
        printf("4 - Norte: R$30,00\n");
        printf("5 - Centro-Oeste: R$22,00\n\n");
        printf("Código da região: ");
        scanf("%d", &cod_regiao);

        if (cod_regiao != 1 && cod_regiao != 2 && cod_regiao != 3 && cod_regiao != 4 && cod_regiao != 5)
        {
            printf("\nErro, código de região inválido.\n");
        }
        else
        {
            if (cod_regiao == 1)
            {
                frete = 15.0;
                printf("\nRegião de entrega: Sudeste\n");
            }
            else if (cod_regiao == 2)
            {
                frete = 20.0;
                printf("\nRegião de entrega: Sul\n");
            }
            else if (cod_regiao == 3)
            {
                frete = 25.0;
                printf("\nRegião de entrega: Nordeste\n");
            }
            else if (cod_regiao == 4)
            {
                frete = 30.0;
                printf("\nRegião de entrega: Norte\n");
            }
            else
            {
                frete = 22.0;
                printf("\nRegião de entrega: Centro-Oeste\n");
            }

            printf("\n=== FORMAS DE PAGAMENTO ===\n\n");
            printf("Selecione o código da opção de pagamento desejada.\n\n");
            printf("1 - Pix: 10%% de desconto no valor da compra.\n");
            printf("2 - Cartão de crédito: Sem desconto.\n");
            printf("3 - Boleto bancário: 5%% de desconto no valor da compra.\n\n");
            printf("Código da forma de pagamento: ");
            scanf("%d", &cod_forma_pagamento);

            if (cod_forma_pagamento != 1 && cod_forma_pagamento != 2 && cod_forma_pagamento != 3)
            {
                printf("\nErro, forma de pagamento inválida.\n");
            }
            else
            {
                if (cod_forma_pagamento == 1)
                {
                    taxa_desconto = 0.10;
                    printf("\nForma de pagamento selecionada: Pix\n");
                }
                else if (cod_forma_pagamento == 2)
                {
                    taxa_desconto = 0.0;
                    printf("\nForma de pagamento selecionada: Cartão de crédito\n");
                }
                else
                {
                    taxa_desconto = 0.05;
                    printf("\nForma de pagamento selecionada: Boleto\n");
                }

                valor_desconto = valor_compra * taxa_desconto;
                valor_com_desconto = valor_compra - valor_desconto;
                valor_final = valor_com_desconto + frete;

                printf("\n=== RESUMO DO PEDIDO ===\n\n");
                printf("Valor da compra: R$%.2f\n", valor_compra);
                printf("Desconto aplicado: R$%.2f\n", valor_desconto);
                printf("Frete: R$%.2f\n", frete);
                printf("Valor final: R$%.2f\n", valor_final);
            }
        }
    }

    return 0;
}