#include <stdio.h>

int main() {
    float minutos;
    float horas;

    printf("Digite a quantidade de minutos: ");
    scanf("%f", &minutos);

    horas = minutos / 60.0;

    printf("%.2f minutos equivalem a %.2f horas.\n", minutos, horas);

    return 0;
}
