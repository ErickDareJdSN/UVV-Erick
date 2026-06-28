#include <stdio.h>

int main() {
    float cel;
    float fah;

    printf("Digite uma temperatura em graus Celsius (C°): ");
    scanf("%f", &cel);

    fah = cel * 9 / 5 + 32;

    printf("Temperatura digitada em Celsius (C°): %.2f\n", cel);
    printf("Temperatura convertida para Fahrenheit (F°): %.2f\n", fah);

    return 0;
}
