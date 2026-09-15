#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int n, i, pos;
int qtdPares, qtdImpares, qtdTotal;
int pares[5000], impares[5000], total[5000];

char loop = 'y';

int main()
{
    while (1)
    {
        printf("=== PROGRAMA: SUGESTÃO CRIPTOGRÁFICA ===\n\n");
        printf("Digite um número entre 3 e 9 (incluindo 3 e 9) para gerar possíveis senhas fortes: ");

        while (scanf("%d", &n) != 1 || n < 3 || n > 9)
        {
            printf("Erro: Digite um número válido entre 3 e 9, tente novamente.");
        }

        qtdPares = 1;
        qtdImpares = 1;
        qtdTotal = 1;

        for (int i = 1000; i <= 9999; i++)
        {
            if (i % n == 0)
            {
                total[qtdTotal] = i;
                qtdTotal++;

                if (i % 2 == 0)
                {
                    pares[qtdPares] = i;
                    qtdPares++;
                }

                else
                {
                    impares[qtdImpares] = i;
                    qtdImpares++;
                }
            }
        }
        printf("=== RESULTADOS ===\n\n");
        printf("Senhas múltiplas de %d pares encontradas: %d\n", n, qtdImpares);
        printf("Senhas múltiplas de %d e ímpares encontradas: %d\n\n", n, qtdPares);
        printf("Total de senhas múltiplas de %d encontradas: %d\n\n", n, qtdTotal);

        printf("Deseja buscar alguma senha específica? (Y para sim, N para sair do programa)\n\n");
        printf("Resposta: ");

        while (scanf("%c", &loop) != 1)
        {
            printf("Resposta inválida, digite Y para sim ou N para sair do programa.");
            loop = tolower((unsigned char)loop);
        }

        getchar();

        if (loop == 'n')
        {
            printf("Programa encerrado.");
            break;
        }

        while (loop == 'y')
        {
            printf("Digite o número de senha você deseja pesquisar (Total de senhas pesquisávies: %d): ", qtdTotal);

            while (scanf("%d", &pos) != 1 || pos < 1 || pos > qtdTotal)
            {
                printf("Entrada inválida, digite uma posição entre 1 e %d.", qtdTotal);
            }

            printf("Senha de número %d: %d\n\n", pos, total[pos]);

            printf("Deseja buscar alguma outra senha? (Y para sim, N para sair do programa)\n\n");
            printf("Resposta: ");

            while (scanf("%c", &loop) != 1)
            {
                printf("Resposta inválida, digite Y para sim ou N para sair do programa.");
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
}