/*
1. Faça um programa que receba um número e indique se ele está entre 20
e 90 ou não (20 e 90 não estão na faixa de valores).

*/
#include <stdio.h>
int main()
{
    float n;
    printf("Insira um número ");
    scanf("%f", &n);
    if (n>20 && n<90){
        printf("Esta entre o 20 e o 90.");
    } else {
        printf ("Não está entre o 20 e o 90");
    }
    return 0;
}
