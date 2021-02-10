#include <stdio.h>

int main(){
    int numero, i;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    while (numero > 10){
        printf("O numero deve ser menor que 10:\n");
        printf("Digite o numero: ");
        scanf("%d", &numero);
    }
    for (i = 0; i <= 10; i++){
        printf("%d X %d = %d\n", numero, i, (numero * i));
    }
}