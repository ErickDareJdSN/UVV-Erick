#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int senha, d1, d2, d3, d4;
bool distintos = false, multiplo17 = false, impar = false;

int main()
{
    printf("===CRIPTOGRAFIA DE SENHA===\n\n");
    printf("Digite uma senha de 4 digitos com numeros distintos: ");
    scanf("%d", &senha);

    d1 = senha / 1000;
    d2 = (senha / 100) % 10;
    d3 = (senha / 10) % 10;
    d4 = senha % 10;

    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
    {
        distintos = true;
    }

    if (senha % 2 == 1)
    {
        impar = true;
    }

    if (senha % 17 == 0)
    {
        multiplo17 = true;
    }

    if (distintos != true)
    {
        printf("\n\nSenha inválida, os números não são distintos entre si.");
    }

    else
    {
        printf("\n\n===RESULTADOS===\n\n");
        printf("Senha digitada: %d", senha);

        if (impar == true && multiplo17 == true)
        {
            printf("\n\nSENHA DE CRIPTOGRAFIA FORTE.");
        }

        else if (impar == true && multiplo17 == false)
        {
            printf("\n\nSENHA DE CRIPTOGRAFIA FRACA: A senha nao e multipla de 17.");
        }

        else if (impar == false && multiplo17 == true)
        {
            printf("\n\nSENHA DE CRIPTOGRAFIA FRACA: A senha não é impar.");
        }

        else
        {
            printf("\n\nSENHA DE CRIPTOGRAFIA FRACA: A senha não é impar e nem multipla de 17.");
        }
    }

    return 0;
}