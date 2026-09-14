#include <stdio.h>

void limpa_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main(void)
{
    int x;
    int i;
    int soma = 0;
    int multiplos = 0;
    double media;

    printf("Digite um numero inteiro positivo (x >= 1)\n");
    printf("para calcular a media dos multiplos de 6 no intervalo [6, 6x]: ");

    while (scanf("%d", &x) != 1 || x < 1) {
        printf("Erro. Digite um numero inteiro maior ou igual a 1: ");
        limpa_buffer();
    }
    limpa_buffer();

    for (i = 6; i <= 6 * x; i++) {
        if (i % 6 == 0) {
            soma += i;
            multiplos++;
        }
    }

    printf("\nResultados:\n");
    printf("Quantidade de multiplos encontrados: %d\n", multiplos);

    if (multiplos == 0) {
        printf("Nenhum multiplo encontrado.\n");
    } else {
        media = (double)soma / multiplos;
        printf("Media dos multiplos encontrados: %.2lf\n", media);
    }

    return 0;
}
#include <stdio.h>

void limpa_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main(void)
{
    int x;
    int i;
    int soma = 0;
    int multiplos = 0;
    double media;

    printf("Digite um numero inteiro positivo (x >= 1)\n");
    printf("para calcular a media dos multiplos de 6 no intervalo [6, 6x]: ");

    while (scanf("%d", &x) != 1 || x < 1) {
        printf("Erro. Digite um numero inteiro maior ou igual a 1: ");
        limpa_buffer();
    }
    limpa_buffer();

    for (i = 6; i <= 6 * x; i++) {
        if (i % 6 == 0) {
            soma += i;
            multiplos++;
        }
    }

    printf("\nResultados:\n");
    printf("Quantidade de multiplos encontrados: %d\n", multiplos);

    if (multiplos == 0) {
        printf("Nenhum multiplo encontrado.\n");
    } else {
        media = (double)soma / multiplos;
        printf("Media dos multiplos encontrados: %.2lf\n", media);
    }

    return 0;
}
