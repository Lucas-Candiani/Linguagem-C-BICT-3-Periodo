/*
   7) Faça um programa que leia duas matrizes 5x2 e crie uma terceira matriz 
também 5x2 com o valor da soma dos elementos de mesmo índice. Veja 
o exemplo abaixo: 
*/

/*Notas:
  
*/    

#include <stdio.h>

int main()
{
  
    int mat1[5][2];
    int mat2[5][2];
    int matRes[5][2];

//>>>>>>>>>>> Preenchendo a Matriz 1<<<<<<<<<<<<//
    printf(">>>>>MATRIZ 1<<<<<<\n");
    for(int j=0; j<5; j++){
        printf("| Digite um valor para preencher a coluna |%i| \n", j+1);
        for(int i=0; i<2; i++){
            printf("casa %d: ", i+1);
            scanf("%d", &mat1[j][i]);
        }
        printf("\n");
    }
    
//>>>>>>>>>>> Impressão <<<<<<<<<<<<//
    printf("| Primeira Matriz finalida: \n");
    for(int j=0; j<5; j++){
        for(int i=0; i<2; i++){
            printf("-> %d", mat1[j][i]);
        }
        printf("\n");
    }
    
//>>>>>>>>>>> Preenchendo a Matriz 2<<<<<<<<<<<<//
    printf(">>>>>MATRIZ 2<<<<<<\n");
    for(int j=0; j<5; j++){
        printf("| Digite um valor para preencher a coluna |%i| \n", j+1);
        for(int i=0; i<2; i++){
            printf("casa %d: ", i+1);
            scanf("%d", &mat2[j][i]);
        }
        printf("\n");
    }
    //>>>>>>>>>>> Impressão <<<<<<<<<<<<//
    printf("| Segunda Matriz finalida: \n");
    for(int j=0; j<5; j++){
        for(int i=0; i<2; i++){
            printf("-> %d", mat2[j][i]);
        }
        printf("\n");
    }

//>>>>>>>>>>> Somando ambas e guardando na terceira <<<<<<<<<<<<//
    printf("| Matriz com as somas: \n");
    for(int j=0; j<5; j++){
        for(int i=0; i<2; i++){
            matRes[j][i]=mat1[j][i]+mat2[j][i];
            printf("-> %d", matRes[j][i]);
        }
        printf("\n");
    }

    return 0;
}