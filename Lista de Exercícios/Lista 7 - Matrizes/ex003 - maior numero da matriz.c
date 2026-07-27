/*

3) Crie um programa que leia uma matriz 5x5 e escreva a localização (linha
e a coluna) do maior valor. Para isso, considere que a matriz não terá
elementos repetidos.

*/
#include <stdio.h>

int main()
{
    int m[5][5];
    for (int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            scanf("%d", &m[l][c]);
        }
    }
    
//Imprimo todos os elementos: 

    for (int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            printf("%d ", m[l][c]);
        }
        printf("\n");
    }
    
    int maior;
    maior = m[0][0];
    
    for (int l=0; l<5; l++) {
        for (int c=0;c<5;c++){
            if(m[l][c]>maior){
                maior = m[l][c];
            }
        }
    }
    
    printf("o maior numero eh %i", maior);
    
    return 0;
    
}
