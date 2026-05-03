/*
2. Faça um programa em C que leia dois valores numéricos inteiros e efetue a
adição;
caso o resultado seja maior que 10, apresente-o.
*/
#include <stdio.h>
int main()
{
     int v1, v2, soma;
     printf("Insira 2 valores inteiros:\n ");
     scanf("%i %i", &v1, &v2);
     soma = v1 + v2;
     
     if (soma > 10) {
        printf("A soma dos dois valores inteiros é %i",soma);
     }
     return 0;
}