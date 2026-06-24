#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    int tipo_sessao;
    int estudante;
    int combo;

    float valor_desconto;
    float valor_ingresso;
    float valor_ingresso_final;
    float valor_combo;
    float valor_final;

    char nome_sessao[50];
    char nome_combo[50];

    printf("\n=== CINEMA VIRTUAL ===\n\n");

    printf("Para começar, informe sua idade: ");
    scanf("%d", &idade);

    if (idade <= 0)
    {
        printf("Você deve ter pelo menos 1 ano pra ir ao cinema.\n");
    }
    else
    {
        printf("\n=== SESSÕES DISPONÍVEIS ===\n\n");
        printf("Qual o tipo de sessão do filme?\n\n");
        printf("1 -> Sessão comum: R$30,00\n");
        printf("2 -> Sessão 3D: R$45,00\n");
        printf("3 -> Sessão VIP: R$60,00\n\n");
        printf("Tipo da sessão: ");
        scanf("%d", &tipo_sessao);

        if (tipo_sessao != 1 && tipo_sessao != 2 && tipo_sessao != 3)
        {
            printf("\nTipo de sessão inválida.\n");
        }
        else
        {
            if (tipo_sessao == 1)
            {
                valor_ingresso = 30.0;
                strcpy(nome_sessao, "Sessão comum");
            }
            else if (tipo_sessao == 2)
            {
                valor_ingresso = 45.0;
                strcpy(nome_sessao, "Sessão 3D");
            }
            else
            {
                valor_ingresso = 60.0;
                strcpy(nome_sessao, "Sessão VIP");
            }

            printf("\nTipo de sessão escolhida: %s\n", nome_sessao);

            printf("\n=== COMBOS DE PIPOCA ===\n\n");
            printf("Selecione o combo da sua escolha.\n\n");
            printf("0 -> Sem combo: R$0,00\n");
            printf("1 -> Pipoca + Refri: R$20,00\n");
            printf("2 -> Combo grande: R$35,00\n\n");
            printf("Escolha de combo: ");
            scanf("%d", &combo);

            if (combo != 0 && combo != 1 && combo != 2)
            {
                printf("Opção de combo inválida, tente novamente.\n");
            }
            else
            {
                if (combo == 0)
                {
                    valor_combo = 0.0;
                    strcpy(nome_combo, "Sem combo");
                }
                else if (combo == 1)
                {
                    valor_combo = 20.0;
                    strcpy(nome_combo, "Pipoca + refri");
                }
                else
                {
                    valor_combo = 35.0;
                    strcpy(nome_combo, "Combo grande");
                }

                printf("\nCombo escolhido: %s\n", nome_combo);

                printf("\nVocê é estudante?\n\n");
                printf("1 -> Sim\n");
                printf("2 -> Não\n\n");
                printf("Resposta: ");
                scanf("%d", &estudante);

                if (estudante != 1 && estudante != 2)
                {
                    printf("Opção inválida, tente novamente.\n");
                }
                else
                {
                    if (idade < 12 || idade >= 60 || estudante == 1)
                    {
                        valor_desconto = valor_ingresso / 2;
                    }
                    else
                    {
                        valor_desconto = 0.0;
                    }

                    valor_ingresso_final = valor_ingresso - valor_desconto;
                    valor_final = valor_ingresso_final + valor_combo;

                    printf("\n=== RESUMO DA COMPRA ===\n\n");
                    printf("Tipo de sessão: %s\n", nome_sessao);
                    printf("Valor original do ingresso: R$%.2f\n", valor_ingresso);
                    printf("Desconto aplicado no ingresso: R$%.2f\n", valor_desconto);
                    printf("Combo: %s\n", nome_combo);
                    printf("Valor do combo: R$%.2f\n", valor_combo);
                    printf("Total a pagar: R$%.2f\n", valor_final);
                }
            }
        }
    }

    return 0;
}