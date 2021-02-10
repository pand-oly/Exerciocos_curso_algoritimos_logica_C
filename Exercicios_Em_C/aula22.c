#include <stdio.h>
#include <string.h>

int main(){
    char nome[100], senha[100];

    printf("Digite nome de usuario: ");
    gets(nome);
    printf("Digite uma senha: ");
    gets(senha);

    while(!strcmp(nome, senha)){
        printf("Senha não pode ser igual o nome.\n");
        printf("Digite nome de usuario: ");
        gets(nome);
        printf("Digite uma senha: ");
        gets(senha);
    }
    
}