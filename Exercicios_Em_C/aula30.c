#include <stdio.h>

int main(){
    float vetor[5];
    int codigo;

    printf("Informe o código: ");
    scanf("%d", &codigo);
    
    if(codigo != 0){
        for(int i = 0; i < 5; i++){
            printf("infome um numero real: ");
            scanf("%f", &vetor[i]);
        }
        if(codigo == 1){
            for(int i = 0; i < 5; i++){
                printf("%.1f\n", vetor[i]);
            }
        }
        if(codigo == 2){
            for(int i = 4; i >= 0; i--){
                printf("%.1f\n", vetor[i]);
            }
        }
    }
}