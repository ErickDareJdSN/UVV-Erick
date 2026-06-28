#include <stdio.h>
#include <string.h>

int main()
{
    char senha[51];
    int tentativas = 3;

    while (tentativas > 0)
    {
        printf("Tente adivinhar a senha secreta: ");
        scanf("%s", senha);

        if (strcmp(senha, "cafe123") == 0)
        {
            printf("\nAcesso permitido.\n");
            break;
        }
        else
        {
            tentativas--;

            if (tentativas > 0)
            {
                printf("\n\nSenha incorreta, você tem mais %d tentativa(s).\n", tentativas);
                printf("DICA: Bebida + 123\n\n");
            }
            else
            {
                printf("\nAcesso bloqueado.\n");
            }
        }
    }

    return 0;
}