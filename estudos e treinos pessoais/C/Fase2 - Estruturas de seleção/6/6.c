#include <stdio.h>

int main()
{
    float valor_compra;
    float desconto;
    float valor_desconto;
    float valor_final;
    int cod_tipo_cliente;

    printf("=== MERCADINHO ===\n\n");

    printf("Digite o valor de sua compra: ");
    scanf("%f", &valor_compra);

    if (valor_compra <= 0)
    {
        printf("\nValor inválido: O valor da compra deve ser maior que zero.\n");
    }
    else
    {
        printf("\nDigite seu código de cliente para ganhar descontos:\n");
        printf("1 - Cliente comum\n");
        printf("2 - Cliente VIP\n");
        printf("3 - Funcionário\n");
        printf("Código: ");
        scanf("%d", &cod_tipo_cliente);

        if (cod_tipo_cliente != 1 && cod_tipo_cliente != 2 && cod_tipo_cliente != 3)
        {
            printf("\nTipo de cliente inválido, tente novamente.\n");
        }
        else
        {
            if (cod_tipo_cliente == 1)
            {
                desconto = 0.0;

                printf("\nTipo de cliente selecionado: Cliente comum.\n");
                printf("Desconto aplicado: 0%%\n");
            }
            else if (cod_tipo_cliente == 2)
            {
                desconto = 0.10;

                printf("\nTipo de cliente selecionado: Cliente VIP.\n");
                printf("Desconto aplicado: 10%%\n");
            }
            else
            {
                desconto = 0.20;

                printf("\nTipo de cliente selecionado: Funcionário.\n");
                printf("Desconto aplicado: 20%%\n");
            }

            valor_desconto = valor_compra * desconto;
            valor_final = valor_compra - valor_desconto;

            printf("\n=== RESUMO DA COMPRA ===\n");
            printf("Valor original: R$%.2f\n", valor_compra);
            printf("Valor do desconto: R$%.2f\n", valor_desconto);
            printf("Valor final da compra: R$%.2f\n", valor_final);
        }
    }

    return 0;
}