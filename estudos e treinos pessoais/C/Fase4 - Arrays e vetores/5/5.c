#include <stdio.h>

int main()
{
    int num[5];       // Vetor responsável por armazenar os 5 números digitados pelo usuário
    int pos_num;      // Variável usada para mostrar as posições começando em 1, e não em 0
    int busca;        // Número que será pesquisado dentro do vetor
    int contador = 0; // Conta quantas vezes o número pesquisado apareceu
    int i;

    printf("\n=== BUSCA NO VETOR ===\n\n");

    for (i = 0; i < 5; i++) // Preenche o vetor com os números digitados pelo usuário
    {
        pos_num = i + 1; // Ajusta a posição exibida no printf, deixando mais natural para o usuário

        if (i < 4) // Altera a mensagem apenas quando ainda não chegou na última posição do vetor
        {
            printf("Digite o %dº número: ", pos_num);
        }
        else
        {
            printf("Digite o último número: ");
        }

        scanf("%d", &num[i]);

        while (num[i] < 0 || num[i] > 100) // Valida se o número digitado está dentro do intervalo permitido
        {
            printf("O número digitado deve ser entre 0 e 100, tente novamente: ");
            scanf("%d", &num[i]);
        }
    }

    printf("\nDigite um número pra buscar: ");
    scanf("%d", &busca); // Lê o número que será comparado com cada posição do vetor

    printf("\n=== RESULTADOS DA BUSCA ===\n\n");
    printf("Número pesquisado: %d\n\n", busca);

    for (i = 0; i < 5; i++) // Percorre o vetor inteiro procurando o número informado pelo usuário
    {
        if (num[i] == busca) // Compara o valor buscado com o valor armazenado na posição atual do vetor
        {
            contador++; // Incrementa o contador sempre que o número é encontrado
            printf("Número encontrado na posição %d.\n", i + 1);
        }
    }

    if (contador == 0) // Se o contador continuar zerado, significa que nenhuma ocorrência foi encontrada
    {
        printf("Nenhum número foi encontrado.\n");
    }
    else
    {
        printf("\nO número apareceu %d vez(es).\n", contador);
    }

    return 0;
}
