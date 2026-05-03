/*
5. Escreva um programa em C que recebe três números e mostre o menor.
*/
#include <stdio.h>
int main()
{
    float n1, n2, n3;
    
    printf("Insira 3 valores:\n ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    if ((n1<n2) && (n1<n3)) {
        printf("O valor: %2.f é o menor",n1);
    }
    if ((n2<n1) && (n2<n3)) {
        printf("O valor: %2.f é o menor",n2);
    } else {
        printf("O valor: %2.f é o menor",n3);
    }
    
    return 0;
}