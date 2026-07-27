/*
8)Faça uma função que receba 3 números inteiros como parâmetro, 
representando horas, minutos e segundos, e os converta em segundos.
*/
#include <stdio.h>

int for_seconds(int hour, int minutes, int seconds, int *solution){
    
    *solution = (hour*3600)+(minutes*60)+ seconds; 
    
}

int main()
{
    int hora, minutos, segundos; 
    int resposta; 
    printf("Insira um valor como hora (ex: 2): ");
    scanf("%d",&hora);
    printf("\n");
    printf("Insira um valor como minutos(ex: 10): ");
    scanf("%d",&minutos);
    printf("\n");    
    printf("Insira um valor como segundos (ex: 10): ");
    scanf("%d",&segundos);
    printf("\n");    
    
    for_seconds(hora, minutos, segundos, &resposta);
    
    printf(">>> Os valores inseridos representam %d segundos <<< ", resposta);
    return 0;
}
