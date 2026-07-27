/*
10) Escreva uma função que gera um triângulo de altura e lados n e base  
2*n-1. Por exemplo, a saída para n = 6 seria: 

Notas: 
 Eu comecei tentando fazer uma matriz que armazenaria toda a pirâmide, mas além
 do trabalho de construir isso eu não tive conhecimento o suficiente para deixa-la
 simples. Printar os espaços e os asteriscos realmente é o melhor caminho.

*/

#include <stdio.h>

void triangulo(int n){

    for(int j=0; j<n; j++){
        //Coloca os espaços
        for(int space=0; space<((n-1)-j); space++){
            printf(" ");
        }
        //Coloca os *;
        for(int bloco=0; bloco<(2*j+1); bloco++){
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int tamanho;

    printf("Insira o tamanho |n| do triangulo: ");
    scanf("%d", &tamanho);
    
    triangulo(tamanho);

    return 0;
}
