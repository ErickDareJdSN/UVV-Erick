#include <stdio.h>
#include <string.h>
#include <ctype.h> // conversão pra lower

int main()
{
    char nome[51];
    int tamanho;
    char loop = 'y';

    while (loop == 'y') // loop do programa principal
    {
        printf("Digite seu nome: ");
        fgets(nome, 51, stdin);

        nome[strcspn(nome, "\n")] = '\0'; // tira a quebra de linha no final do fgets, pra ficar bonito

        tamanho = strlen(nome);

        printf("\nSeu nome é %s.\n", nome);
        printf("Ele possui %d caracteres.\n", tamanho);

        printf("\nDeseja digitar outro nome? Y/N: ");
        scanf(" %c", &loop);

        loop = tolower(loop); // converte a entrada de &loop pra minúsculos

        while (loop != 'y' && loop != 'n')
        {
            printf("Opção inválida, digite Y ou N: ");
            scanf(" %c", &loop);

            loop = tolower(loop);
        }

        getchar(); // limpa o Enter antes do próximo fgets
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}