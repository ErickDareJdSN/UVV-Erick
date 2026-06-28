#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char suspeitos[5][51];
    char busca[51];
    char loop = 'y';

    int i;
    int j;
    int encontrado;
    int posicao_encontrada;

    while (loop == 'y')
    {
        encontrado = 0;
        posicao_encontrada = -1;

        printf("\n=== BUSCA DE SUSPEITOS ===");

        for (i = 0; i < 5; i++)
        {
            printf("\n\nDigite o nome do %dº suspeito: ", i + 1);
            fgets(suspeitos[i], 51, stdin);

            suspeitos[i][strcspn(suspeitos[i], "\n")] = '\0';

            for (j = 0; suspeitos[i][j] != '\0'; j++)
            {
                suspeitos[i][j] = tolower((unsigned char)suspeitos[i][j]);
            }
        }

        printf("\n\n=== SUSPEITOS CADASTRADOS ===\n\n");

        for (i = 0; i < 5; i++)
        {
            printf("Suspeito número %d: %s\n", i + 1, suspeitos[i]);
        }

        printf("\nDigite o nome do suspeito pra buscar no sistema: ");
        fgets(busca, 51, stdin);

        busca[strcspn(busca, "\n")] = '\0';

        for (j = 0; busca[j] != '\0'; j++)
        {
            busca[j] = tolower((unsigned char)busca[j]);
        }

        for (i = 0; i < 5; i++)
        {
            if (strcmp(busca, suspeitos[i]) == 0)
            {
                encontrado = 1;
                posicao_encontrada = i + 1;
                break;
            }
        }

        if (encontrado == 1)
        {
            printf("\n\nSuspeito encontrado na posição %d da lista.\n", posicao_encontrada);
        }

        else
        {
            printf("\n\nSuspeito não encontrado.\n");
        }
        printf("\nDeseja reiniciar o programa? (Y/N): ");
        scanf(" %c", &loop);

        loop = tolower((unsigned char)loop);

        while (loop != 'y' && loop != 'n')
        {
            printf("Opção inválida, digite Y ou N: ");
            scanf(" %c", &loop);

            loop = tolower((unsigned char)loop);
        }

        getchar();

        if (loop == 'n')
        {
            printf("Programa encerrado.");
            break;
        }
    }

    return 0;
}