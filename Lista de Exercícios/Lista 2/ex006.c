/*
6. FaC'a um programa em C que receba trC*s nC:meros obrigatoriamente em
ordem crescente e um quarto nC:mero que nC#o siga essa regra. Mostre,
em seguida, os quatro nC:meros em ordem decrescente. Suponha que o
usuC!rio digitarC! quatro nC:meros diferentes.
*/
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;
    printf("Informe o primeiro, o segundo e o terceiro numero respectivamente em ordem crescente: ");
    scanf("%i %i %i",&n1, &n2, &n3);
    printf("informe o quarto numero de forma aleatória");
    scanf("%i",&n4);
    if (n4 < n1) {
        printf("%i %i %i %i", n4, n1, n2, n3);
    }
    if ((n4 > n1) && (n4 < n2)) {
        printf("%i %i %i %i", n1, n4, n2, n3);
    }
    if ((n4 > n2) && (n4 < n3)) {
        printf("%i %i %i %i", n1, n2, n4, n3);
    }
    if(n4>n3){
        printf("%i %i %i %i", n1, n2, n4, n3);
    }
    
    return 0;
}