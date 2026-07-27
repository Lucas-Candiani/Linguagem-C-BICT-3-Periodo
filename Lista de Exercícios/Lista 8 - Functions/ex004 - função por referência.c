/*
    4) Faça uma função que receba um único valor representando segundos. 
Essa sub-rotina deverá convertê-lo para horas, minutos e segundos. 
Todas as variáveis devem ser passadas como parâmetro, não havendo 
variáveis globais.

*/

/* Notas: 
    O segredo deste exercício é aprender a manipular as variáveis por referência. Onde ao utiliza-las
passamos para a função diretamente o endereço na memória.
*/

#include <stdio.h>

void converter(int hora_total, int *h, int *m, int *s){
    
    int resto;
    
    *h = hora_total/3600;
    resto = (hora_total)%3600;
    *m = resto/60;
    *s = resto % 60;
    
}

void main()
{
    
    int time, hours, minutes, seconds; 
    printf("insira um valor em segundos: ");
    scanf("%d",&time);
    
    converter(time, &hours, &minutes, &seconds);
    printf("| O valor de %d pode ser destribuido em %d horas, %d minutos, %d segundos", time, hours, minutes, seconds);
}
