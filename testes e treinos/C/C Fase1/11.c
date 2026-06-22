#include <stdio.h>

int main(){
    float preco;
    float desconto;
    float decresimo;
    float valorfinal;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite agora o valor do desconto: ");
    scanf("%f", &desconto);

    decresimo = preco * desconto / 100;
    valorfinal = preco - decresimo;

    printf("O desconto foi de %.2f reais.\n", decresimo);
    printf("O preço final do produto é de %.2f reais.\n", valorfinal);

    return 0;

}