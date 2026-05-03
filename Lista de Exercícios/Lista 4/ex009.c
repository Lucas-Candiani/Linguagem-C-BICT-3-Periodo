/**
9. Faça um programa que calcule e mostre a soma dos 50 primeiros números
pares
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c, soma=0;
    for (c=0; c<=50; c+=1){
        soma += c;
    }
    printf("A soma dos numeros é igual a:%i \n",soma);
}