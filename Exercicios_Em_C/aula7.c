#include <stdio.h>

int main(){
    float altura, peso_ideal;

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;

    printf("Seu peso ideal é %.2f", peso_ideal);
}

