#include <stdio.h>

int main() {
    float m;
    float cm;

    printf("Digite uma distância em metros: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("%.2f metros em centímetros é: %.2f cm\n", m, cm);

    return 0;
}
