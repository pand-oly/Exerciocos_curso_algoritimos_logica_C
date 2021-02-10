#include <stdio.h>

int main(){
    int numero, i = 0, p =0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("Este número é par.");
    }else{
        printf("Este número é inpar.");
    }
}