#include <stdio.h>

int main(){
    float p, m, p_e;
    char e[8] = "excesso";

    printf("Diga quanto de peixes temos hoje: ");
    scanf("%f", &p);

    if (p > 50){
        p_e = (p - 50);
        m = p_e * 4;
        printf("O poso se excedeu em %.2f. A multa é de %.2fR$", p_e, m);
    }else{
        e[0] = 0;
        m = 0;
        printf("Excesso = %d\n", e[0]);
        printf("Multas = %f", m);
    }
}
