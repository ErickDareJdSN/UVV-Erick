#include <stdio.h>

int main() {
    int n1;
    int n2;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite mais um número: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("%d é maior que %d.\n", n1, n2);
    } else if (n1 == n2) {
        printf("Os números são iguais.\n");
    } else {
        printf("%d é menor que %d.\n", n1, n2);
    }

    return 0;
}
