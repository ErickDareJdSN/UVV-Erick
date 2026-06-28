#include <stdio.h>

int main()
{
    int num[5]; // Vetor responsável por armazenar as 5 idades digitadas
    int i;
    int pos_num;
    int max_num;
    int min_num;
    int sum_num;
    int avg_num;
    int maiores;
    int menores;

    int loop = 1; // Controla se o programa será executado novamente ou encerrado

    while (loop == 1) // Mantém o programa rodando enquanto o usuário escolher repetir
    {
        sum_num = 0;
        avg_num = 0;
        maiores = 0;
        menores = 0;
        pos_num = 0;
        max_num = 0; // Reset das variáveis antes de uma nova execução do sistema
        min_num = 0;

        printf("\n=== CADASTRO DE IDADES ===\n");

        for (i = 0; i < 5; i++) // Preenche o vetor com as idades digitadas pelo usuário
        {
            pos_num = i + 1; // Ajusta a posição exibida, já que o vetor começa em 0

            if (i < 4)
            {
                printf("\nDigite a %dª idade: ", pos_num);
            }

            else
            {
                printf("\nDigite a última idade: ");
            }

            scanf("%d", &num[i]);

            while (num[i] < 0 || num[i] > 120) // Valida se a idade está dentro de um intervalo possível
            {
                printf("A idade deve ser entre 0 e 120, tente novamente: \n");
                scanf("%d", &num[i]);
            }

            sum_num = sum_num + num[i]; // Acumula a soma das idades para calcular a média depois

            if (i == 0) // Usa a primeira idade como referência inicial para maior e menor valor
            {
                max_num = num[i];
                min_num = num[i];
            }

            else
            {
                if (num[i] > max_num) // Atualiza a maior idade caso a idade atual seja maior que a anterior
                {
                    max_num = num[i];
                }

                if (num[i] < min_num) // Atualiza a menor idade caso a idade atual seja menor que a anterior
                {
                    min_num = num[i];
                }
            }

            if (num[i] >= 18) // Classifica a idade atual como maior ou menor de idade
            {
                maiores++;
            }

            else
            {
                menores++;
            }
        }

        printf("\n=== IDADES DIGITADAS===\n\n");

        for (i = 0; i < 5; i++) // Exibe todas as idades armazenadas no vetor
        {
            pos_num = i + 1;

            printf("%dª idade: %d\n", pos_num, num[i]);
        }

        printf("\n=== RESULTADOS ===\n\n");

        avg_num = sum_num / 5; // Calcula a média das idades digitadas

        printf("Maior idade: %d\n", max_num);
        printf("Menor idade: %d\n", min_num);
        printf("Soma das idades: %d\n", sum_num);
        printf("Média das idades: %.d\n", avg_num);
        printf("Maiores de idade: %d\n", maiores);
        printf("Menores de idade: %d\n", menores);

        printf("\nDeseja usar o programa novamente?\n\n");
        printf("1 -> Sim.\n");
        printf("2 -> Não.\n");
        printf("\n> ");
        scanf("%d", &loop);

        while (loop != 1 && loop != 2) // Valida a opção de repetição do programa
        {
            printf("\nOpção inválida, digite '1' para Sim ou '2' para não\n");
            scanf("%d", &loop);
        }

        if (loop == 2) // Encerra o programa caso o usuário escolha não repetir
        {
            printf("Encerrando...");
            break;
        }
    }
    return 0;
}
