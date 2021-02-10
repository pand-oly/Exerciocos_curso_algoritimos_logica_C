#include  <stdio.h>

int main(){
    float indice;

    printf("Informe  o indice de poluição: ");
    scanf("%f", &indice);

    if(indice >= 0.3 && indice <= 0.4){
        printf("Atenção: Industrias do 1° Grupo devem suspender  as atividades.");
    }else if (indice >= 0.4 && indice < 0.5){
        printf("Atenção: Industrias do 2° Grupo devem suspender as atividades.");
    }else if(indice >= 0.5){
        printf("Atenção: TODOS OS GRUPOS DEVEM SUSPEMDER IMEDIATAMENTE AS ATIVIDADES.");
    }
}