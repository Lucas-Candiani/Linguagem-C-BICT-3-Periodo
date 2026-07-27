/*
   5) Crie um programa que leia uma matriz 3x3 e calcule a soma dos valores 
das colunas da matriz.

*/

/*Notas:
    Como não é necessário guardar o valor da soma da coluna, basta adicionar
uma variável acumuladora em cada coluna, e ao descer para a próxima coluna reinicia-la
com 0. 
*/    

#include <stdio.h>

int main()
{
  
    int mat[3][3];
    int soma_coluna=0;
    
//>>>>>>>>>>> Preenchendo a Matriz <<<<<<<<<<<<//
    for(int j=0; j<3; j++){
        printf("| Digite um valor para preencher a coluna |%i| \n", j+1);
        for(int i=0; i<3; i++){
            printf("casa %d: ", i+1);
            scanf("%d", &mat[j][i]);
        }
        printf("\n");
    }
    
//>>>>>>>>>>> Impressão <<<<<<<<<<<<//
    printf("| Matriz finalida: \n");
    for(int j=0; j<3; j++){
        for(int i=0; i<3; i++){
            printf("-> %d", mat[j][i]);
            soma_coluna += mat[j][i];
        }
        printf("| Soma da coluna %d: %d", j+1, soma_coluna);
        soma_coluna = 0; 
        printf("\n");
    }
    
    return 0;
}