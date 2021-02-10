#include <stdio.h>

int main(){
    int contador_total = 0 , contardor_sit_1 = 0, contardor_sit_2 = 0, contardor_sit_3 = 0, 
           contardor_sit_4 = 0, identificacao, defeito;
    
    printf("Informe a identificação: ");
    scanf("%d", &identificacao);

    while (identificacao != 0){
        printf("1 - Necessita de esfera.\n");
        printf("2 - Necessita de limpeza.\n");
        printf("3 - Necessita detroca de cabo ou conector.\n");
        printf("4 - Quebrado ou defeituoso.\n");
        printf("Informe o tipo de defeito ");
        scanf("%d", &defeito);
 
        if(defeito == 1){
            contardor_sit_1 = contardor_sit_1 + 1;
        }
        if(defeito == 2){
            contardor_sit_2 = contardor_sit_2 + 1;
        }
        if(defeito == 3){
            contardor_sit_3 = contardor_sit_3 + 1;
        }
        if(defeito == 3){
            contardor_sit_4 = contardor_sit_4 + 1;
        }
        contador_total = contador_total + 1;

        printf("Informe a identificação: ");
        scanf("%d", &identificacao);
    }
    float p1, p2, p3, p4;
    p1 = ((float) contardor_sit_1 / (float) contador_total * 100.0);
    p2 = ((float) contardor_sit_2 / (float) contador_total * 100.0);
    p3 = ((float) contardor_sit_3 / (float) contador_total * 100.0);
    p4 = ((float) contardor_sit_4 / (float) contador_total * 100.0);
    
    printf("Quantidade de Mouses %d\n\n", contador_total);
    printf("Situação \t\t\tQuatidade \tpercentual\n");
    printf("1-Necessita de esfera \t\t\t%d \t%.2f%%\n", contardor_sit_1, p1);
    printf("2-Necessita de limpeza \t\t\t%d \t%.2f%%\n", contardor_sit_2, p2);
    printf("3-Necessita troca de cabo ou conctor \t%d \t%.2f%%\n", contardor_sit_3, p3);
    printf("4-quebrado ou inutilizado \t\t%d \t%.2f%%\n", contardor_sit_4, p4);
}