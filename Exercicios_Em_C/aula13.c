#include <stdio.h>

int main(){
    int c, horas_extra = 0;
    float n, e = 0, salrio, valor_hora = 10.00;

    printf("código: ");
    scanf("%d", &c);
    printf("Iforme as horas trabalhadas: ");
    scanf("%f", &n);

    if(n > 50){
        horas_extra = n - 50;
        e = horas_extra * 20.00;
        salrio = (50 * valor_hora) + e;
        printf("Horas excedentes %d.\nGanhos extras %.2f", horas_extra, e);
        printf("Pagamento de %.2f", salrio);
    }else{
        salrio = n * valor_hora;
        printf("Suas horas extras foram: %d.", horas_extra);
        printf("Seu pagamento é de %.2f", salrio);
    }
}