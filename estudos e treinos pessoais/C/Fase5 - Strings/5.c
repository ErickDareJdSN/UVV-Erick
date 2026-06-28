#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char agentes[3][51];
    char busca[51];
    char loop = 'y';
    int i;
    int j;
    int encontrado;

    printf("\n=== SISTEMA DE BUSCA DE 3 AGENTES ===\n\n");

    while (loop == 'y')
    {
        encontrado = 0;

        for (i = 0; i < 3; i++)
        {
            printf("Digite o nome do agente %d: ", i + 1);
            fgets(agentes[i], 51, stdin);

            agentes[i][strcspn(agentes[i], "\n")] = '\0';

            for (j = 0; agentes[i][j] != '\0'; j++)
            {
                agentes[i][j] = tolower((unsigned char)agentes[i][j]);
            }
        }

        printf("\nDigite o nome do agente que você deseja buscar: ");
        fgets(busca, 51, stdin);

        busca[strcspn(busca, "\n")] = '\0';

        for (j = 0; busca[j] != '\0'; j++)
        {
            busca[j] = tolower((unsigned char)busca[j]);
        }

        for (i = 0; i < 3; i++)
        {
            if (strcmp(busca, agentes[i]) == 0)
            {
                encontrado = 1;
                break;
            }
        }

        if (encontrado == 1)
        {
            printf("\nAgente encontrado no sistema.\n\n");
        }
        else
        {
            printf("\nAgente não cadastrado.\n\n");
        }

        printf("Deseja reiniciar o programa? (Y/N): ");
        scanf(" %c", &loop);

        loop = tolower((unsigned char)loop);

        while (loop != 'y' && loop != 'n')
        {
            printf("Opção inválida, digite Y ou N: ");
            scanf(" %c", &loop);

            loop = tolower((unsigned char)loop);
        }

        getchar();
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}