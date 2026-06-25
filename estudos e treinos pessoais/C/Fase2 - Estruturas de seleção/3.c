#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float media_final;
    char classificacao[50];

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Agora, digite sua segunda nota: ");
    scanf("%f", &nota2);

    if (nota1 < 0.0 || nota1 > 10.0 || nota2 < 0.0 || nota2 > 10.0)
    {
        printf("Notas inválidas, tente novamente.\n");
    }

    else
    {
        media_final = (nota1 + nota2) / 2;

        if (media_final >= 7.0)
        {
            classificacao[50] = "Aluno aprovado.\n";
        }

        else if (5.0 < media_final < 7.0)
        {
            classificacao[50] = "Aluno de recuperação.\n";
        }

        else
        {
            classificacao[50] = "Aluno reprovado.\n";
        }

        printf("Média final do aluno: %.2f\n", media_final);
        printf("%c\n", classificacao);
        
    }

    return 0;
    
}