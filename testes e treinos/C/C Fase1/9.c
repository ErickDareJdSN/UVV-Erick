#include <stdio.h>

int main(){
    float m;
    float cm;

    printf("Digite uma distância em metros: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("%f metros em centímetros é: %fcm\n", m, cm);

    return 0;
}