/*
    6) Crie um programa que calcule a soma dos valores da diagonal principal 
de uma matriz inteira 5x5. Veja a diagonal principal da matriz destacada 
no exemplo abaixo: 
*/

/*Notas:
    Para somar a diagonal basta que a coluna j seja somada a linha 1, 2 ,3 ,4 ,5 respectivamente.
Para isso eu criei uma variável "next" que é incrementada de 1 em 1 para fazer essa mudança da linha.
*/    

#include <stdio.h>

int main()
{
  
    int mat[5][5];
    int next=0; 
    int soma_diagonal=0;

//>>>>>>>>>>> Preenchendo a Matriz <<<<<<<<<<<<//
    for(int j=0; j<5; j++){
        printf("| Digite um valor para preencher a coluna |%i| \n", j+1);
        for(int i=0; i<5; i++){
            printf("casa %d: ", i+1);
            scanf("%d", &mat[j][i]);
        }
        printf("\n");
    }
    
//>>>>>>>>>>> Impressão <<<<<<<<<<<<//
    printf("| Matriz finalida: \n");
    for(int j=0; j<5; j++){
        for(int i=0; i<5; i++){
            printf("-> %d", mat[j][i]);
        }
        soma_diagonal += mat[j][next];
        next++;
        printf("\n");
    }
    
    printf("|A soma diagonal da matriz é : %d", soma_diagonal);
    return 0;
}