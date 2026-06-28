#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavras[5][51];
    char busca[51];
    char loop = 'y';

    int i = 0;
    int j;
    int bloqueada;

    while (loop == 'y')
    {
        bloqueada = 0;

        printf("\n=== BLOQUEADOR DE PALAVRAS===\n");

        for (i = 0; i < 5; i++)
        {

            if (i < 4)
            {
                printf("\nDigite a %dª palavra a ser bloqueada: ", i + 1);
                fgets(palavras[i], 51, stdin);
            }

            else
            {
                printf("\nDigite a %dª e última palavra a ser bloqueada: ", i + 1);
                fgets(palavras[i], 51, stdin);
            }

            palavras[i][strcspn(palavras[i], "\n")] = '\0';

            for (j = 0; palavras[i][j] != '\0'; j++)
            {
                palavras[i][j] = tolower((unsigned char)palavras[i][j]);
            }
        }

        printf("\n\n=== PALAVRAS BANIDAS DA EXISTÊNCIA ===\n");

        for (i = 0; i < 5; i++)
        {
            printf("\n%dª palavra: %s", i + 1, palavras[i]);
        }

        printf("\n\nDigite uma palavra pra buscar: ");
        fgets(busca, 51, stdin);

        busca[strcspn(busca, "\n")] = '\0';

        for (j = 0; busca[j] != '\0'; j++)
        {
            busca[j] = tolower((unsigned char)busca[j]);
        }

        for (i = 0; i < 5; i++)
        {
            if (strcmp(busca, palavras[i]) == 0)
            {
                bloqueada = 1;
                break;
            }
        }

        if (bloqueada == 1)
        {
            printf("\n\nALERTA: Palavra bloqueada.\n");
        }

        else
        {
            printf("\n\nPalavra liberada.\n");
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
    }
    printf("Programa encerrado.");
    return 0;
}