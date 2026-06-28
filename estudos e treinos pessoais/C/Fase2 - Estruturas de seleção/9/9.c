#include <stdio.h>
#include <string.h>

int main()
{

    float consumo;
    float tarifa;
    float valor_total;
    int cod_tipo_cliente;
    char tipo_cliente[50];

    printf("\n===CONTA DE LUZ ONLINE===\n");
    printf("\n");
    printf("Digite seu consumo de energia desse mês em quilowatts/hora (kWh): ");
    scanf("%f", &consumo);

    if (consumo <= 0)
    {
        printf("Consumo inválido, digite um valor maior que zero.\n");
    }

    else
    {
        printf("\n");
        printf("\n===OPÇÕES DE TARIFA===\n");
        printf("\n");
        printf("Digite o código do seu cadastro de cliente.\n");
        printf("\n");
        printf("1 - Residencial\n");
        printf("Até 100 kWh: R$0,50 por kWh\n");
        printf("Acima de 100kWh: R$0,70 por kWh\n");
        printf("\n");
        printf("2 - Comercial\n");
        printf("Até 500 kWh: R$0,65 por kWh\n");
        printf("Acima de 500 kWh: R$0,85 por kWh\n");
        printf("\n");
        printf("3 - Industrial\n");
        printf("Até 1000 kWh: R$0,80 kWh\n");
        printf("Acima de 1000 kWh: R$1,00 por kWh\n");
        printf("\n");
        printf("Código de cliente: ");
        scanf("%d", &cod_tipo_cliente);
        if (cod_tipo_cliente != 1 && cod_tipo_cliente != 2 && cod_tipo_cliente != 3)
        {
            printf("Opção de cliente inválida, tente novamente.\n");
        }
        else
        {
            if (cod_tipo_cliente == 1 && consumo <= 100.00)
            {
                tarifa = 0.50;
                strcpy(tipo_cliente, "Residencial");
            }
            else if (cod_tipo_cliente == 1 && consumo > 100.00)
            {
                tarifa = 0.70;
                strcpy(tipo_cliente, "Residencial");
            }
            else if (cod_tipo_cliente == 2 && consumo <= 500.00)
            {
                tarifa = 0.65;
                strcpy(tipo_cliente, "Comercial");
            }
            else if (cod_tipo_cliente == 2 && consumo > 500.00)
            {
                tarifa = 0.85;
                strcpy(tipo_cliente, "Comercial");
            }
            else if (cod_tipo_cliente == 3 && consumo <= 1000.00)
            {
                tarifa = 0.80;
                strcpy(tipo_cliente, "Industrial");
            }
            else
            {
                tarifa = 1.00;
                strcpy(tipo_cliente, "Industrial");
            }

            valor_total = consumo * tarifa;

            printf("\n=== RESUMO DA CONTA ===\n\n");
            printf("Tipo de cliente: %s\n", tipo_cliente);
            printf("Consumo: %.2f kWh\n", consumo);
            printf("Tarifa aplicada: R$%.2f por kWh\n", tarifa);
            printf("Valor total: R$%.2f\n", valor_total);
        }
    }

    return 0;
}