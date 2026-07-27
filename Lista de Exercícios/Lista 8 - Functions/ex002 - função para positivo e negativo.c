/*
2. Faça um programa contendo uma função que retorne 1 se o número
digitado for positivo ou 0 se for negativo.
*/

#include <stdio.h>


int sinal(int n);

int main()
{
    
    int x;
    
    printf("Digite um numero inteiro: ");
    scanf("%i", &x);
    
    int resposta;
    resposta = sinal(x);
    
    if(resposta==1){
        printf("O numero é positivo");
    } else {
        printf("O numero é negativo");
    }
    printf("\n");
    
    return 0;
}


int sinal(int n){
    if (n>0){
        return 1;
    } else {
        return 0;
    }
}