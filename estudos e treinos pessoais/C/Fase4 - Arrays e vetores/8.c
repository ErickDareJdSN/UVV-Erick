#include <stdio.h>
#include <string.h>

int main()
{
    char nome[5][51]; // Matriz de caracteres para armazenar 5 nomes com até 50 caracteres cada
    int idade[5];     // Vetor paralelo que guarda a idade de cada jogador
    int score[5];     // Vetor paralelo que guarda a pontuação de cada jogador

    int i;
    int sum_score;
    int sum_idades;
    int super_500;
    int sub_500;

    float avg_score;
    float avg_idade;

    int max_score;
    int min_score;
    int max_idade;
    int min_idade;

    int i_max_score;
    int i_min_score;
    int i_max_idade;
    int i_min_idade;

    int loop = 1; // Controla a repetição do sistema inteiro

    while (loop == 1) // Mantém o sistema rodando enquanto o usuário quiser cadastrar novamente
    {
        // Reset das variáveis a cada nova execução, evitando que valores antigos interfiram no relatório
        sum_score = 0;
        sum_idades = 0;
        super_500 = 0;
        sub_500 = 0;

        max_score = 0;
        min_score = 0;
        max_idade = 0;
        min_idade = 0;

        i_max_score = 0;
        i_min_score = 0;
        i_max_idade = 0;
        i_min_idade = 0;

        printf("\n=== SISTEMA DE JOGADORES ===\n\n");

        for (i = 0; i < 5; i++) // Preenche os vetores paralelos com os dados dos jogadores
        {
            printf("Digite o nome do %dº jogador: ", i + 1);
            fgets(nome[i], 51, stdin);              // Lê o nome completo, permitindo espaços
            nome[i][strcspn(nome[i], "\n")] = '\0'; // Remove o '\n' deixado pelo fgets

            while (strlen(nome[i]) == 0) // Valida se o usuário deixou o nome vazio
            {
                printf("O nome não pode ser vazio, tente novamente: ");
                fgets(nome[i], 51, stdin);
                nome[i][strcspn(nome[i], "\n")] = '\0';
            }

            printf("Digite a idade do %dº jogador: ", i + 1);
            scanf("%d", &idade[i]);

            while (idade[i] < 10 || idade[i] > 100) // Garante que a idade esteja dentro do intervalo permitido
            {
                printf("Idade inválida, digite um valor entre 10 e 100: ");
                scanf("%d", &idade[i]);
            }

            printf("Digite a pontuação do %dº jogador: ", i + 1);
            scanf("%d", &score[i]);

            while (score[i] < 0 || score[i] > 1000) // Valida se a pontuação está entre 0 e 1000
            {
                printf("A pontuação deve ser entre 0 e 1000, tente novamente: ");
                scanf("%d", &score[i]);
            }

            getchar(); // Limpa o '\n' deixado pelo scanf antes da próxima leitura com fgets

            printf("Jogador Nº%d cadastrado com sucesso!\n\n", i + 1);
        }

        for (i = 0; i < 5; i++) // Faz os cálculos principais usando os dados cadastrados
        {
            sum_score = sum_score + score[i];   // Acumula a pontuação total para calcular a média
            sum_idades = sum_idades + idade[i]; // Acumula as idades para calcular a média

            if (i == 0) // Usa o primeiro jogador como referência inicial para maior/menor idade e pontuação
            {
                max_idade = idade[i];
                min_idade = idade[i];

                max_score = score[i];
                min_score = score[i];

                i_max_idade = i;
                i_min_idade = i;

                i_max_score = i;
                i_min_score = i;
            }
            else
            {
                if (idade[i] > max_idade) // Atualiza o jogador mais velho
                {
                    max_idade = idade[i];
                    i_max_idade = i; // Guarda o índice para mostrar o nome dele no relatório
                }

                if (idade[i] < min_idade) // Atualiza o jogador mais novo
                {
                    min_idade = idade[i];
                    i_min_idade = i;
                }

                if (score[i] > max_score) // Atualiza o jogador com maior pontuação
                {
                    max_score = score[i];
                    i_max_score = i;
                }

                if (score[i] < min_score) // Atualiza o jogador com menor pontuação
                {
                    min_score = score[i];
                    i_min_score = i;
                }
            }

            if (score[i] >= 500) // Separa os jogadores em dois grupos: 500 pontos ou mais / abaixo de 500
            {
                super_500++;
            }
            else
            {
                sub_500++;
            }
        }

        printf("\n=== JOGADORES CADASTRADOS ===\n\n");

        for (i = 0; i < 5; i++) // Exibe os dados armazenados nos vetores paralelos
        {
            printf("%dº jogador:\n", i + 1);
            printf("Nome: %s\n", nome[i]);
            printf("Idade: %d\n", idade[i]);
            printf("Pontuação: %d\n\n", score[i]);
        }

        avg_score = sum_score / 5.0;  // Calcula a média das pontuações com resultado decimal
        avg_idade = sum_idades / 5.0; // Calcula a média das idades com resultado decimal

        printf("\n=== RELATÓRIO FINAL ===\n\n");

        printf("Maior pontuação: %s, com %d pontos.\n", nome[i_max_score], max_score);
        printf("Menor pontuação: %s, com %d pontos.\n\n", nome[i_min_score], min_score);
        printf("Média das pontuações: %.2f pontos.\n", avg_score);
        printf("Jogadores com 500 pontos ou mais: %d\n", super_500);
        printf("Jogadores com menos de 500 pontos: %d\n\n", sub_500);
        printf("Idade média dos jogadores: %.2f\n", avg_idade);
        printf("Jogador mais velho: %s, com %d anos.\n", nome[i_max_idade], idade[i_max_idade]);
        printf("Jogador mais novo: %s, com %d anos.\n\n", nome[i_min_idade], idade[i_min_idade]);

        printf("\nDeseja usar o programa novamente?\n\n");
        printf("1 -> Sim.\n");
        printf("2 -> Não.\n");
        printf("\n> ");
        scanf("%d", &loop);

        while (loop != 1 && loop != 2) // Valida a escolha do usuário antes de repetir ou encerrar
        {
            printf("\nOpção inválida, digite '1' para Sim ou '2' para Não: ");
            scanf("%d", &loop);
        }

        getchar(); // Limpa o '\n' deixado pela leitura da opção antes de uma possível nova execução

        if (loop == 2) // Encerra o sistema se o usuário escolher a opção 2
        {
            printf("Encerrando...");
            break;
        }
    }

    return 0;
}