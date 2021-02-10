#include <stdio.h>

int main(){
    int maior = -999, menor = 999, soma = 0 , valor;
    float media;

    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &valor);

        if(valor > 0){
            if(valor > maior){
            maior = valor;
            }
            if(valor < menor){
                menor = valor;
            }
            soma = soma + valor;
        }else{
            i--;
        }
    }
    media = soma / 10;
    printf("O maior número foi: %d\n", maior);
    printf("O menor número foi: %d\n", menor);
    printf("A media foi: %.2f", media);
}