#include <stdio.h>

int main(){
    int prim, seg, terc, qua, q1, q2, q3, q4;

    printf("Digite o primeiro número: ");
    scanf("%d", &prim);
    printf("Digite o segundo número: ");
    scanf("%d", &seg);
    printf("Digite o terceiro número: ");
    scanf("%d", &terc);
    printf("Digite o quarto número: ");
    scanf("%d", &qua);

    q1 = prim * prim;
    q2 = seg * seg;
    q3 = terc * terc;
    q4 = qua * qua;

    if(q3 > 1000){
        printf("%d", q3);
    }else{
        printf("O primeiro numero: %d. Seu quadrado: %d\n", prim, q1);
        printf("o segundo numero: %d. Seu quadrado: %d\n", seg, q2);
        printf("O terceiro número: %d. Seu quadrado: %d\n", terc, q3);
        printf("O quarto número: %d. Seu quadrado: %d\n", qua, q4);
    }
}