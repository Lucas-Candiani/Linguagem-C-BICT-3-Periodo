/*
7. Faça um programa em C que receba um número inteiro e verifique se é
par ou ímpar.
*/
#include <stdio.h>
int main()
{
    int numero, resto;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    
    resto = numero % 2;
    
    if (resto == 0){
        printf("O numero %i é par!", numero);
    }
    
    if (resto != 0){
        printf("O numero %i é impar!", numero);
    }
    return 0;
}