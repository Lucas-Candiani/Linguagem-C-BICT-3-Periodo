/**
8. Faça um programa que leia um número inteiro N e depois imprima os N
primeiros números naturais ímpares.
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c, N;
    printf("informe um valor inteiro: ");
    scanf("%i", &N);
    for (c=0; c<=N; c+=1){
        if(c%2 !=0){
            printf("%i \n",c);
        }
    }
    return 0; 
}