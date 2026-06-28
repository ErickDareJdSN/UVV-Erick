#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char usuario[51];
    char senha[51];
    char loop = 'y';

    while (loop == 'y')
    {
        int tentativa_usuario = 3;
        int tentativa_senha = 3;
        int tentativa_usuario_senha = 3;
        int login_ok = 0;

        printf("\n=== SISTEMA DE LOGIN ===\n\n");

        while (tentativa_usuario + tentativa_senha + tentativa_usuario_senha > 4 && login_ok == 0)
        {
            printf("Digite seu usuário: ");
            fgets(usuario, 51, stdin);
            usuario[strcspn(usuario, "\n")] = '\0';

            for (int i = 0; usuario[i] != '\0'; i++)
            {
                usuario[i] = tolower((unsigned char)usuario[i]);
            }

            printf("Digite sua senha: ");
            fgets(senha, 51, stdin);
            senha[strcspn(senha, "\n")] = '\0';

            int usuario_correto = strcmp(usuario, "admin") == 0;
            int senha_correta = strcmp(senha, "cafe123") == 0;

            if (usuario_correto && senha_correta)
            {
                printf("\nLogin efetuado com sucesso.\n");
                login_ok = 1;
            }
            else if (!usuario_correto && !senha_correta)
            {
                tentativa_usuario_senha--;

                printf("\nUsuário e senha incorretos.\n");
            }
            else if (!usuario_correto)
            {
                tentativa_usuario--;

                printf("\nUsuário incorreto.\n");
            }
            else
            {
                tentativa_senha--;

                printf("\nSenha incorreta.\n");
            }

            if (login_ok == 0)
            {
                int total_tentativas = tentativa_usuario + tentativa_senha + tentativa_usuario_senha;

                if (total_tentativas > 4)
                {
                    printf("Tente novamente.\n");
                }
                else
                {
                    printf("\nMuitas tentativas de login. Sistema bloqueado.\n");
                }
            }
        }

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