#include <stdio.h>
#include <stdbool.h>

void limpa_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main(void)
{
    int menu;
    int qtd_votos_1 = 0;
    int qtd_votos_2 = 0;
    int qtd_null = 0;
    int i;
    int total_votos = 0;

    bool flag = false;

    double perc_voto_1;
    double perc_voto_2;
    double perc_voto_null;

    printf("=== ELEIÇÕES DE SÍNDICO ===\n\n");
    printf("Digite um número de acordo com as opções de voto (qualquer outro número pra encerrar).");
    printf("\n\n1 - José da Silva");
    printf("\n2 - Carlos Emanoel");
    printf("\n0 - Nulo");

    for (i = 0; i < 50 && !flag; i++)
    {
        while (1)
        {
            printf("\n\nResposta do voto %d: ", i + 1);
            if (scanf("%d", &menu) == 1)
            {
                limpa_buffer();
                break;
            }

            printf("\nErro: Digite uma opção válida ");
            limpa_buffer();
        }

        switch (menu)
        {
        case 1:

            qtd_votos_1++;
            total_votos++;
            printf("\nVoto para José da Silva registrado.");
            break;

        case 2:

            qtd_votos_2++;
            total_votos++;
            printf("\nVoto para Carlos Emanoel registrado.");
            break;

        case 0:

            qtd_null++;
            total_votos++;
            printf("\nVoto nulo registrado.");
            break;

        default:
            printf("\nVotação encerrada.");
            flag = true;
            break;
        }
    }
    printf("\n\n=== RESULTADOS ===\n\n");

    if (total_votos == 0)
    {
        printf("0 votos computados, nenhum síndico eleito!");
    }

    else
    {
        perc_voto_1 = (qtd_votos_1 * 100.0) / total_votos;
        perc_voto_2 = (qtd_votos_2 * 100.0) / total_votos;
        perc_voto_null = (qtd_null * 100.0) / total_votos;

        printf("Total de votos para José da Silva: %d", qtd_votos_1);
        printf("\n%.2lf%% dos votos", perc_voto_1);

        printf("Total de votos para Carlos Emanoel: %d", qtd_votos_2);
        printf("\n%.2lf%% dos votos", perc_voto_2);

        printf("Total de votos nulos: %d", qtd_null);
        printf("\n%.2lf%% dos votos", perc_voto_null);
        printf("\n\nELEIÇÕES ENCERRADAS.");

        if (qtd_votos_1 == qtd_votos_2)
        {
            printf("\n\nCANDIDATOS EMPATADOS, UMA NOVA VOTAÇÃO SERÁ REALIZADA NA PRÓXIMA SEMANA.");
        }

        else if (qtd_votos_1 > qtd_votos_2)
        {
            printf("\n\nNOVO SÍNDICO: JOSÉ DA SILVA.");
        }

        else
        {
            printf("\n\nNOVO SÍNDICO: CARLOS EMANOEL.");
        }
    }
    return 0;
}