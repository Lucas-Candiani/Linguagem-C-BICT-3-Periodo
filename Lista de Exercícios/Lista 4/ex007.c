/**
7. Escreva um programa que declare um inteiro, inicialize-o com 0, e
incremente-o de 1000 em 1000, imprimindo seu valor na tela, até que
seu valor seja 100000 (cem mil).
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c;
    for (c=0; c<=100000; c+=1000){
        printf("%i \n",c);
    }
}