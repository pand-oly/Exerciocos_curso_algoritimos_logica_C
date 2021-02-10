#include <stdio.h>

int main(){
    int vetor[10], i;
    char maior_50 = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe o valor par o vetor %d/10: ", (i+1));
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 10; i++){
        if(vetor[i] > 50){
            printf("O número %d está na posição %d\n", vetor[i], i);
            maior_50 = 1;
        }
    }
    if(maior_50 < 1){
        printf("Não existe nenhum número maior que 50.");
    }
}