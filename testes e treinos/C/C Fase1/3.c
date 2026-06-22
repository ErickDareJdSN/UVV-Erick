int main() {
    float n1;
    float n2;
    float n3;
    float media;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &n1);

    printf("Digite o valor da segunda nota: ");
    scanf("%f", &n2);

    printf("Agora, digite o valor da terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("A média entre %.2f, %.2f e %.2f é: %.2f\n", n1, n2, n3, media);

    return 0;
}