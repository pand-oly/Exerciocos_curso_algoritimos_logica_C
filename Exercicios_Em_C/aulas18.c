#include <stdio.h>

int main(){
    int n, maior = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n != 0){
        if(n > maior){
            maior = n;
        }
        printf("Digite um numero: ");
        scanf("%d", &n);
    }
    printf("O maior número é %d", maior);
}