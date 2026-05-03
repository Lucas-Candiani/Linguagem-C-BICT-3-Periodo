/**
4. Faça um algoritmo que gera e escreve os números ímpares entre 100 e
200. Utilize a função resto para verificar se o número é ímpar. Resolva
utilizando estruturas de repetição
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=100, num=0, impares=0 ;
    
    while(c<200){
        if(num%2 != 0){
            impares ++;
            printf("%i\n", c);
        }
        num ++;
        c++ ;
    }
    return 0;
}