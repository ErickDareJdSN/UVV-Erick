#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char codinome[4][51];
    int i;
    int j;
    int maior_i;
    int maior_tamanho;
    int tamanho_atual;
    char loop = 'y';

    while (loop == 'y')
    {
        printf("\n=== CENTRAL DE CODINOMES ===\n\n");

        for (i = 0; i < 4; i++)
        {
            printf("Digite o codinome do agente %d: ", i + 1);
            fgets(codinome[i], 51, stdin);

            codinome[i][strcspn(codinome[i], "\n")] = '\0';

            for (j = 0; codinome[i][j] != '\0'; j++)
            {
                codinome[i][j] = tolower((unsigned char)codinome[i][j]);
            }
        }

        maior_i = 0;
        maior_tamanho = strlen(codinome[0]);

        for (i = 1; i < 4; i++)
        {
            tamanho_atual = strlen(codinome[i]);

            if (tamanho_atual > maior_tamanho)
            {
                maior_tamanho = tamanho_atual;
                maior_i = i;
            }
        }

        printf("\n=== CODINOMES CADASTRADOS ===\n\n");

        for (i = 0; i < 4; i++)
        {
            printf("Agente %d: %s\n", i + 1, codinome[i]);
        }

        printf("\nMaior codinome: %s\n", codinome[maior_i]);
        printf("Tamanho: %d caracteres\n", maior_tamanho);

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

    printf("\nPrograma encerrado.\n");

    return 0;
}