#include <stdio.h>

int main(){
    int usuario_correto;
    int senha_correta;
    int tentativa_usuario;
    int tentativa_senha;

    usuario_correto = 12345;
    senha_correta = 54321;

    printf("Digite seu número de usuário: ");
    scanf("%d", &tentativa_usuario);

    printf("Agora digite sua senha: ");
    scanf("%d", &tentativa_senha);
    
    if (tentativa_usuario != usuario_correto && tentativa_senha != senha_correta){
        printf("Usuário e senha inválidos.\n");
    }

    else if (tentativa_usuario != usuario_correto){
        printf("Usuário inválido.\n");
    }

    else if (tentativa_senha != senha_correta){
        printf("Senha inválida.\n");
    }

    else{
        printf("Login realizado com sucesso.\n");
    }

    return 0;
}