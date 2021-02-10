#include <stdio.h>

int main(){
    int horas_trabalhadas;
    float valor_hora, salario;

    printf("Informe o valor da hora: ");
    scanf("%f", &valor_hora);
    printf("Quantas horas vocâ trabalhou? ");
    scanf("%d", &horas_trabalhadas);
    
    salario = valor_hora * horas_trabalhadas;

    printf("Seu pagamento é de %.2f", salario);
}