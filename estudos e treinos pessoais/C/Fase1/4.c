#include <stdio.h>

int main(){
    float cel;
    float fah;
   

    printf("Digite uma temperatura em graus celsius (C°): ");
    scanf("%f", &cel);
    
    fah = cel * 9 / 5 + 32;

    printf("Temperatura digitada em celsius (C°): %.2f\n", cel);
    printf("Temperatura convertida para fahrenheit (F°): %.2f\n", fah);

    return 0;
}