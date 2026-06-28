#include <stdio.h>

int main() {
    float salario;
    float bonus_percent;
    float bonus;
    float salariofinal;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    printf("Agora digite o percentual de bônus desejado: ");
    scanf("%f", &bonus_percent);

    bonus = (salario / 100) * bonus_percent;
    salariofinal = salario + bonus;

    printf("Seu salário final é de %.2f reais.\n", salariofinal);
    printf("%.2f reais base, mais %.2f reais de bônus.\n", salario, bonus);

    return 0;
}
