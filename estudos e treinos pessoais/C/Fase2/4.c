#include <stdio.h>

int main() {
    float kg;
    float h;
    float imc;

    printf("Digite seu peso em quilogramas (Kg): ");
    scanf("%f", &kg);

    printf("Agora digite sua altura em metros: ");
    scanf("%f", &h);

    if (kg <= 0 && h <= 0) {
        printf("Dados inválidos.\n");
    } else if (kg <= 0) {
        printf("Peso inválido.\n");
    } else if (h <= 0) {
        printf("Altura inválida.\n");
    } else {
        imc = kg / (h * h);

        printf("O valor do seu IMC é: %.2f\n", imc);

        if (imc < 18.5) {
            printf("Classificação: Abaixo do peso.\n");
        } else if (imc >= 18.5 && imc < 25.0) {
            printf("Classificação: Peso normal.\n");
        } else if (imc >= 25.0 && imc < 30.0) {
            printf("Classificação: Sobrepeso.\n");
        } else {
            printf("Classificação: Obesidade.\n");
        }
    }

    return 0;
}