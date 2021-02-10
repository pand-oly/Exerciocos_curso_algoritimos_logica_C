#include <stdio.h>

int main(){
    int metros, centimetros;

    printf("Infome a quantidade de metros: ");
    scanf("%d", &metros);

    centimetros = metros * 100;

    printf("%d metros são %d cemtimetros.", metros, centimetros);
}