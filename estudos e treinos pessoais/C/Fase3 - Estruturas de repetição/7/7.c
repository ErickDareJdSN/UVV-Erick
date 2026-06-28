#include <stdio.h>

int main()
{
    int menu;

    do
    {
        printf("\n=== MENU ===\n\n");
        printf("1 -> Dizer olá.\n");
        printf("2 -> Mostrar uma frase motivacional.\n");
        printf("0 -> Sair.\n\n");

        printf("Escolha uma opção: ");
        scanf("%d", &menu);

        printf("\n");

        if (menu == 1)
        {
            printf("Olá!\n");
        }
        else if (menu == 2)
        {
            printf("Você consegue!\n");
        }
        else if (menu == 0)
        {
            printf("Menu encerrado, tchau!\n");
        }
        else
        {
            printf("Opção de menu inválida.\n");
        }

    } while (menu != 0);

    return 0;
}