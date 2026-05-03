/**
5. Faça um programa que calcule a média de quanto que você que
consumiu com energia elétrica no ano. Resolva utilizando estruturas de
repetição.
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=1;
    float conta=0, total =0 , media;
    while(c<=12){
        printf("Informe o valor da energia eletrica do mês %i: ",c);
        scanf("%f",&conta);
        total += conta;
        c++ ;
    }
    media = total/12;
    printf("A media de gasto com energia desse ano foi de %.2f", media);
    return 0;
}