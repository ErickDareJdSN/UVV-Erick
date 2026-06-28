#include <stdio.h>

int main() {
    float kg;
    float h;
    float imc;

    printf("Digite o seu peso em kg: ");
    scanf("%f", &kg);

    printf("Agora digite sua altura: ");
    scanf("%f", &h);

    imc = kg / (h * h);

    printf("Seu IMC é: %.2f\n", imc);

    return 0;
}
