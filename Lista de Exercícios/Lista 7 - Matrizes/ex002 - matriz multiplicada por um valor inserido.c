/*
    2) Faça um programa que preencha uma matriz 4 x 4 com valores inteiros. 
Após, solicite um valor ao usuário e multiplique cada elemento da matriz 
por esse valor. Mostre a nova matriz. 
*/
#include <stdio.h>

int main()
{
    
    int mat[4][4];
    int multiplicador;

/*Notas

*/    
    
//>>>>>>>>>>> Preenchendo a Matriz <<<<<<<<<<<<//
    for(int j=0; j<4; j++){
        printf("| Digite um valor para preencher a coluna |%i| \n", j+1);
        for(int i=0; i<4; i++){
            printf("casa %d: ", i+1);
            scanf("%d", &mat[j][i]);
        }
        printf("\n");
    }
    
//>>>>>>>>>>> Impressão <<<<<<<<<<<<//
    printf("| Matriz finalida: \n");
    for(int j=0; j<4; j++){
        for(int i=0; i<4; i++){
            printf("-> %d", mat[j][i]);
        }
        printf("\n");
    }
    
//>>>>>>>>>>> Coleta do multiplicador <<<<<<<<<<<<//    
    printf("| Insira um valor que multiplicará cada elemento da matriz: ");
    scanf("%d", &multiplicador);
    printf("\n");

//>>>>>>>>>>> Multiplicação dos elementos <<<<<<<<<<<<//  
    
    printf("| Nova Matriz: \n");
    for(int j=0; j<4; j++){
        for(int i=0; i<4; i++){
            mat[j][i] *= multiplicador; 
            printf("-> %d", mat[j][i]);
        }
        printf("\n");
    }
    

    return 0;
}