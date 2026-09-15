#include <stdio.h>
#include <math.h>

void limpar_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main(void)
{
    double salario1, salario2, soma, preco, valorrestante, percentual, tempo_restante;
    int opcao, loop = 0, loop2;

    while (loop == 0)
    {
        printf("Digite o valor do adiantamento do seu salário: ");
        while (scanf("%lf", &salario1) != 1 || salario1 <= 0)
        {
            printf("\n\nErro, digite um valor numérico maior do que zero: ");
            limpar_buffer();
        }

        printf("\n\nDigite o valor do restante do salário: ");
        while (scanf("%lf", &salario2) != 1 || salario2 <= 0)
        {
            printf("\n\nErro, digite um valor numérico maior do que zero: ");
            limpar_buffer();
        }

        soma = salario1 + salario2;

        do
        {
            printf("\n\nDigite 1 ou 2 para calcular o restante do dinheiro necessário para um computador ou celular novo (ou qualquer outro número para sair.): ");
            if (scanf("%d", &opcao) != 1)
            {
                limpar_buffer();
                opcao = 0;
            }

            switch (opcao)
            {
            case 1:
                preco = 10000.0;
                valorrestante = preco - soma;
                percentual = (soma / preco) * 100.0;

                if (soma >= preco)
                {
                    printf("Você já juntou %.2lf e o computador custa %.2lf. Já deu para comprar (%.0lf%% do valor)!\n\n",
                           soma, preco, percentual);
                }
                else
                {
                    tempo_restante = ceil(valorrestante / soma);
                    printf("\n\nVocê precisa de %.2lf pro computador e ja juntou %.2lf, estando em %.0lf%% do valor total!\n",
                           valorrestante, soma, percentual);
                    printf("Você precisa trabalhar por mais %.0lf meses pra comprar o computador.\n\n", tempo_restante);
                }

                printf("O que deseja fazer agora?\n\n");
                printf("1 -> Calcular o valor restante de outro produto.\n\n");
                printf("2 -> Escolher outro salário ou rei5niciar o programa.\n\n");
                printf("Escolha: ");

                while (scanf("%d", &loop2) != 1 || (loop2 != 1 && loop2 != 2))
                {
                    printf("Opção inválida, tente novamente: ");
                    limpar_buffer();
                }

                if (loop2 == 2)
                {
                    opcao = 0;
                }
                break;

            case 2:
                preco = 7000.0;
                valorrestante = preco - soma;
                percentual = (soma / preco) * 100.0;

                if (soma >= preco)
                {
                    printf("Você já juntou %.2lf e o celular custa %.2lf. Já deu para comprar (%.0lf%% do valor)!\n\n",
                           soma, preco, percentual);
                }
                else
                {
                    tempo_restante = ceil(valorrestante / soma);
                    printf("\n\nVocê precisa de %.2lf pro celular e ja juntou %.2lf, estando em %.0lf%% do valor total!\n",
                           valorrestante, soma, percentual);
                    printf("Você precisa trabalhar por mais %.0lf meses pra comprar o celular.\n\n", tempo_restante);
                }

                printf("O que deseja fazer agora?\n\n");
                printf("1 -> Calcular o valor restante de outro produto.\n\n");
                printf("2 -> Escolher outro salário ou reiniciar o programa.\n\n");
                printf("Escolha: ");

                while (scanf("%d", &loop2) != 1 || (loop2 != 1 && loop2 != 2))
                {
                    printf("Opção inválida, tente novamente: ");
                    limpar_buffer();
                }

                if (loop2 == 2)
                {
                    opcao = 0;
                }
                break;

            default:

                opcao = 0;
                break;
            }
        } while (opcao == 1 || opcao == 2);

        printf("Digite 0 para inserir outro salário (ou qualquer outro número pra encerrar o programa.): ");
        if (scanf("%d", &loop) != 1)
        {
            limpar_buffer();
            loop = 1;
        }

        if (loop != 0)
        {
            printf("Programa encerrado.\n");
            break;
        }
    }

    return 0;
}