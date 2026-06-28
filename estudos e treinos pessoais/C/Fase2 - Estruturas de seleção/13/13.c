#include <stdio.h>

int main()
{

    int senha_correta;
    int tentativa_senha;

    senha_correta = 1234;

    printf("Adivinhe a senha secreta: ");
    scanf("%d", &tentativa_senha);

    if (tentativa_senha == senha_correta)
    {
        printf("\n");
        printf("Você acertou! :)\n");
    }

    else
    {
        printf("\n");
        printf("Você errou. ):\n");
    }

    return 0;
}