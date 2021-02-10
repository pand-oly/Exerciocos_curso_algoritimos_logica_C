#include <stdio.h>

int main(){
    int numero;
    
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if(numero >= 0){
        if(numero % 2 == 0){
            printf("O número %d é par e positivo.", numero);
        }else{
            printf("O número %d é inpar e positivo.", numero);
        }
    }else{
        if(numero % 2 == 0){
            printf("O número %d é par e negativo.", numero);
        }else{
            printf("O número %d é inpar e nagativo.", numero);
        }
    }
}