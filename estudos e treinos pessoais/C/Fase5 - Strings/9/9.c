#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char usuario[51];
    char senha[51];
    char nomes[5][51];
    char codinomes[5][51];
    char busca[51];

    int tentativas = 3;
    int login_ok = 0;

    int idades[5];
    int riscos[5];
    int missoes[5];

    int qtd_agentes = 0;
    int opcao = 0;
    int escolha = 0;
    int encontrado = 0;
    int posicao_encontrada = -1;

    int i;
    int j;

    int total_missoes = 0;
    int soma_idades = 0;
    int qtd_baixo = 0;
    int qtd_medio = 0;
    int qtd_alto = 0;

    int maior_missoes = 0;
    int i_maior_missoes = 0;
    int menor_idade = 0;
    int maior_idade = 0;
    int i_menor_idade = 0;
    int i_maior_idade = 0;

    int maior_tamanho = 0;
    int menor_tamanho = 0;
    int maior_i = 0;
    int menor_i = 0;
    int tamanho_atual = 0;

    float media_idade = 0;

    while (tentativas > 0 && login_ok == 0)
    {
        printf("Digite seu usuario: ");
        fgets(usuario, 51, stdin);
        usuario[strcspn(usuario, "\n")] = '\0';

        for (j = 0; usuario[j] != '\0'; j++)
        {
            usuario[j] = tolower((unsigned char)usuario[j]);
        }

        printf("\nDigite sua senha: ");
        fgets(senha, 51, stdin);
        senha[strcspn(senha, "\n")] = '\0';

        if (strcmp(usuario, "admin") == 0 && strcmp(senha, "cafe123") == 0)
        {
            login_ok = 1;
            printf("\nLogin realizado com sucesso.\n");
        }
        else
        {
            tentativas--;

            if (tentativas > 0)
            {
                printf("\nCredenciais invalidas. Voce ainda tem %d tentativa(s).\n\n", tentativas);
            }
            else
            {
                printf("\nAcesso bloqueado.\n");
            }
        }
    }

    if (login_ok == 1)
    {
        while (opcao != 5)
        {
            printf("\n\n=== SISTEMA S.I.G.M.A. ===\n\n");
            printf("1. Cadastrar agentes\n");
            printf("2. Listar agentes\n");
            printf("3. Buscar agente por codinome\n");
            printf("4. Relatorio geral\n");
            printf("5. Encerrar sistema\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &opcao);
            getchar();

            if (opcao == 1)
            {
                while (1)
                {
                    if (qtd_agentes >= 5)
                    {
                        printf("\nLimite de agentes atingido.\n");
                        break;
                    }

                    printf("\n\n// Cadastro de agentes //\n\n");

                    printf("Digite o nome real do agente: ");
                    fgets(nomes[qtd_agentes], 51, stdin);
                    nomes[qtd_agentes][strcspn(nomes[qtd_agentes], "\n")] = '\0';

                    printf("\nDigite o codinome do agente: ");
                    fgets(codinomes[qtd_agentes], 51, stdin);
                    codinomes[qtd_agentes][strcspn(codinomes[qtd_agentes], "\n")] = '\0';

                    for (j = 0; codinomes[qtd_agentes][j] != '\0'; j++)
                    {
                        codinomes[qtd_agentes][j] = tolower((unsigned char)codinomes[qtd_agentes][j]);
                    }

                    printf("\nDigite a idade do agente: ");
                    scanf("%d", &idades[qtd_agentes]);

                    while (idades[qtd_agentes] < 18 || idades[qtd_agentes] > 80)
                    {
                        printf("\n\nIdade invalida, o agente deve ter entre 18 e 80 anos.\n");
                        printf("Digite a idade do agente: ");
                        scanf("%d", &idades[qtd_agentes]);
                    }

                    printf("\nDigite o nivel de risco do agente.\n\n");
                    printf("1 -> Baixo.\n");
                    printf("2 -> Medio.\n");
                    printf("3 -> Alto.\n");
                    printf("\nEscolha: ");
                    scanf("%d", &riscos[qtd_agentes]);

                    while (riscos[qtd_agentes] < 1 || riscos[qtd_agentes] > 3)
                    {
                        printf("\n\nNivel de risco invalido, tente novamente.\n");
                        printf("Escolha: ");
                        scanf("%d", &riscos[qtd_agentes]);
                    }

                    printf("\nDigite o numero de missoes concluidas do agente: ");
                    scanf("%d", &missoes[qtd_agentes]);

                    while (missoes[qtd_agentes] < 0)
                    {
                        printf("\n\nNumero de missoes invalido, tente novamente.\n");
                        printf("Numero de missoes concluidas do agente: ");
                        scanf("%d", &missoes[qtd_agentes]);
                    }

                    qtd_agentes++;
                    printf("\n\nAgente cadastrado com sucesso.\n");

                    if (qtd_agentes >= 5)
                    {
                        printf("\nTodos os 5 agentes foram cadastrados.\n");
                        getchar();
                        break;
                    }

                    printf("\nEscolha uma opcao:\n\n");
                    printf("1 -> Cadastrar outro agente.\n");
                    printf("2 -> Voltar ao menu principal.\n\n");
                    printf("Escolha: ");
                    scanf("%d", &escolha);

                    while (escolha != 1 && escolha != 2)
                    {
                        printf("\nOpcao invalida, tente novamente.\n");
                        printf("Escolha uma opcao: ");
                        scanf("%d", &escolha);
                    }

                    getchar();

                    if (escolha == 2)
                    {
                        break;
                    }
                }
            }
            else if (opcao == 2)
            {
                if (qtd_agentes == 0)
                {
                    printf("\n\nNenhum agente cadastrado no sistema.\n");
                }
                else
                {
                    printf("\n\n=== AGENTES CADASTRADOS ===\n\n");

                    for (i = 0; i < qtd_agentes; i++)
                    {
                        printf("AGENTE %d\n", i + 1);
                        printf("Nome real: %s\n", nomes[i]);
                        printf("Codinome: %s\n", codinomes[i]);
                        printf("Idade: %d\n", idades[i]);

                        if (riscos[i] == 1)
                        {
                            printf("Risco: Baixo\n");
                        }
                        else if (riscos[i] == 2)
                        {
                            printf("Risco: Medio\n");
                        }
                        else
                        {
                            printf("Risco: Alto\n");
                        }

                        printf("Missoes concluidas: %d\n\n", missoes[i]);
                    }
                }
            }
            else if (opcao == 3)
            {
                if (qtd_agentes == 0)
                {
                    printf("\n\nNenhum agente cadastrado.\n");
                }
                else
                {
                    while (1)
                    {
                        encontrado = 0;
                        posicao_encontrada = -1;

                        printf("\n\nDigite um codinome para encontrar: ");
                        fgets(busca, 51, stdin);
                        busca[strcspn(busca, "\n")] = '\0';

                        for (j = 0; busca[j] != '\0'; j++)
                        {
                            busca[j] = tolower((unsigned char)busca[j]);
                        }

                        for (i = 0; i < qtd_agentes; i++)
                        {
                            if (strcmp(busca, codinomes[i]) == 0)
                            {
                                encontrado = 1;
                                posicao_encontrada = i;
                                break;
                            }
                        }

                        if (encontrado == 0)
                        {
                            printf("\n\nNenhum agente encontrado.\n");
                        }
                        else
                        {
                            printf("\n\n// AGENTE ENCONTRADO //\n\n");
                            printf("AGENTE %d\n", posicao_encontrada + 1);
                            printf("Nome real: %s\n", nomes[posicao_encontrada]);
                            printf("Codinome: %s\n", codinomes[posicao_encontrada]);
                            printf("Idade: %d\n", idades[posicao_encontrada]);

                            if (riscos[posicao_encontrada] == 1)
                            {
                                printf("Risco: Baixo\n");
                            }
                            else if (riscos[posicao_encontrada] == 2)
                            {
                                printf("Risco: Medio\n");
                            }
                            else
                            {
                                printf("Risco: Alto\n");
                            }

                            printf("Missoes concluidas: %d\n", missoes[posicao_encontrada]);
                        }

                        printf("\nEscolha uma opcao:\n\n");
                        printf("1 -> Procurar outro codinome.\n");
                        printf("2 -> Voltar ao menu principal.\n\n");
                        printf("Escolha: ");
                        scanf("%d", &escolha);

                        while (escolha != 1 && escolha != 2)
                        {
                            printf("\nOpcao invalida, tente novamente.\n");
                            printf("Escolha uma opcao: ");
                            scanf("%d", &escolha);
                        }

                        getchar();

                        if (escolha == 2)
                        {
                            break;
                        }
                    }
                }
            }
            else if (opcao == 4)
            {
                if (qtd_agentes == 0)
                {
                    printf("\n\nNenhum agente cadastrado ainda.\n");
                }
                else
                {
                    total_missoes = 0;
                    soma_idades = 0;
                    qtd_baixo = 0;
                    qtd_medio = 0;
                    qtd_alto = 0;

                    maior_missoes = missoes[0];
                    i_maior_missoes = 0;

                    menor_idade = idades[0];
                    maior_idade = idades[0];
                    i_menor_idade = 0;
                    i_maior_idade = 0;

                    maior_tamanho = strlen(codinomes[0]);
                    menor_tamanho = strlen(codinomes[0]);
                    maior_i = 0;
                    menor_i = 0;

                    for (i = 0; i < qtd_agentes; i++)
                    {
                        total_missoes += missoes[i];
                        soma_idades += idades[i];

                        if (missoes[i] > maior_missoes)
                        {
                            maior_missoes = missoes[i];
                            i_maior_missoes = i;
                        }

                        if (idades[i] < menor_idade)
                        {
                            menor_idade = idades[i];
                            i_menor_idade = i;
                        }

                        if (idades[i] > maior_idade)
                        {
                            maior_idade = idades[i];
                            i_maior_idade = i;
                        }

                        if (riscos[i] == 1)
                        {
                            qtd_baixo++;
                        }
                        else if (riscos[i] == 2)
                        {
                            qtd_medio++;
                        }
                        else if (riscos[i] == 3)
                        {
                            qtd_alto++;
                        }

                        tamanho_atual = strlen(codinomes[i]);

                        if (tamanho_atual > maior_tamanho)
                        {
                            maior_tamanho = tamanho_atual;
                            maior_i = i;
                        }

                        if (tamanho_atual < menor_tamanho)
                        {
                            menor_tamanho = tamanho_atual;
                            menor_i = i;
                        }
                    }

                    media_idade = (float)soma_idades / qtd_agentes;

                    printf("\n\n=== RELATORIO GERAL ===\n");
                    printf("\nTotal de missoes concluidas pela equipe: %d", total_missoes);
                    printf("\nMedia de idade dos agentes: %.2f\n", media_idade);

                    printf("\nAgente com mais missoes: %s", codinomes[i_maior_missoes]);
                    printf("\nQuantidade de missoes: %d\n", maior_missoes);

                    printf("\nAgente mais novo: %s", codinomes[i_menor_idade]);
                    printf("\nIdade: %d\n", menor_idade);

                    printf("\nAgente mais velho: %s", codinomes[i_maior_idade]);
                    printf("\nIdade: %d\n", maior_idade);

                    printf("\nQuantidade de agentes de risco baixo: %d", qtd_baixo);
                    printf("\nQuantidade de agentes de risco medio: %d", qtd_medio);
                    printf("\nQuantidade de agentes de risco alto: %d\n", qtd_alto);

                    printf("\nMaior codinome: %s", codinomes[maior_i]);
                    printf("\nTamanho: %d caracteres\n", maior_tamanho);

                    printf("\nMenor codinome: %s", codinomes[menor_i]);
                    printf("\nTamanho: %d caracteres\n", menor_tamanho);
                }
            }
            else if (opcao == 5)
            {
                printf("\n\nSistema encerrado.\n");
            }
            else
            {
                printf("\n\nOpcao invalida. Tente novamente.\n");
            }
        }
    }

    return 0;
}