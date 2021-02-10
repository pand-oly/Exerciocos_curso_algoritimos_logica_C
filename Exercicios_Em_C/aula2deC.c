#include <stdio.h>
// std = standard (Padrão)
// io = input/output (Entrada/Saida)

int main(){
// Declaração de variáveis 
    int num1, num2, soma, multiplicacao;

// Entrada
    printf("Iforme o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    
     // Processamento
     soma = num1 + num2;
     multiplicacao = soma * num1;

     // Saida
     printf("O resultado da multiplicação é %d", multiplicacao);
}