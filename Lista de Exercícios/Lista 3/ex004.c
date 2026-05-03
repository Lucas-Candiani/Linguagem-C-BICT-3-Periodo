/**
4. Faça um programa que leia dois números e efetue a adição. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a
ele mais 8; caso o valor somado seja menor ou igual a 20, este deverá
ser apresentado subtraindo-se 5.
**/
#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, res;
    int caso;
    printf("Insira dois numeros: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    if ((n1 + n2) > 20){
        res = n1 + n2 + 8;
        caso = 1;
    } else {
        res = n1 + n2 -5;
    } 
    if (caso == 1){
        printf("%.2f + %.2f + 8 = %.2f",n1 ,n2 ,res);
    } else {
        printf("%.2f + %.2f - 5 = %.2f",n1 ,n2 ,res);
    }
    
    return 0;
}