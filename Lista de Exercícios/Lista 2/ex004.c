/*
4. Escreva um programa em C que receba dois números e mostre o maior.
*/
#include <stdio.h>
int main()
{
    float v1, v2;
    
    printf("Insira 2 valores:\n ");
    scanf("%f %f", &v1, &v2);
    
    if (v1 > v2) {
        printf("O valor: %2.f é o maior",v1);
    } else {
        printf("O valor: %2.f é o maior",v2);
    }
    
     return 0;
}