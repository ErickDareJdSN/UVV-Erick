#include <stdio.h>

int main(){
    float base;
    float h;
    float area;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &h);

    area = base * h;

    printf("A área do retângulo de base %.2f e altura %.2f é: %f\n", base, h, area );

    return 0;
}