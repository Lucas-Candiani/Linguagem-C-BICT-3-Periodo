/*
2. Construa um programa que leia um número e imprima se ele é igual a 5,
a 200, a 400, se está no intervalo entre 500 e 1000, inclusive, ou se ele
está fora dos escopos anteriores.
*/
#include <stdio.h>
int main()
{
    float n;
    printf("Insira um número inteiro ");
    scanf("%f", &n);
    if(n==5){
        printf("Valor igual a 5");
    } else {
        if(n==200){
            printf("Valor igual a 200");
        } else {
            if (n==400){
                printf("Valor igual a 400");
            }else{
                printf("Esse valor não é igual a 5, nem a 200, nem a 400. =( ");
            }
        }    
    }
    
    if (n>500 && n<1000){
        printf("\nO valor esta entre 500 e 1000.");
    } else {
        printf("\nO valor não esta entre 500 e 1000");
    }
    return 0;
}