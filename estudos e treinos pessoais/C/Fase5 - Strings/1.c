#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    char nome[51];

    printf("Digite seu nome: ");
    fgets(nome, 51, stdin);

    nome[strcspn(nome, "\n")] = '\0'; // tira a quebra de linha no final do fgets, pra ficar bonito

    printf("\nAgora digite sua idade: ");
    scanf("%d", &idade);

    while (idade < 0 || idade > 100) // validação de idade
    {
        printf("\nInválido, digite uma idade entre 0 e 100 anos: ");
        scanf("%d", &idade);
    }

    printf("\n=== CADASTRO FEITO ===\n\n");
    printf("Olá, %s!\n", nome);
    printf("Você tem %d anos", idade);

    return 0;
}