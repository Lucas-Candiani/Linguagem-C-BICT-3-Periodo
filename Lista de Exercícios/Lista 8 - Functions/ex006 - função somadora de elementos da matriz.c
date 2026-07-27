/*
6. Faça uma função que receba como parâmetro uma matriz A(5,5) e 
retorne a soma de seus elementos. 

Notas:
    Para chamar a função: somar_mat(A,5); 
    
    Para declarar: int somar_matriz(int tabela[][5], int linhas){}
*/
#include <stdio.h>

int soma_matriz(int matriz[][5], int linhas){
    
    int res=0;
    
    for(int j=0; j<5; j++){
        for(int i=0; i<linhas; i++){
            
            res+=matriz[j][i]; 
            
        }
    }
    
    return res;
}

int main()
{   
    int resposta; 
    int A[5][5]={
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
    };
    
    
    for(int j=0; j<5; j++){
        for(int i=0; i<5; i++){
            printf("|%d|", A[j][i]);
        }
        printf("\n");
    }

//Só declara o nome da matriz e as linhas que ela vai ter
    resposta = soma_matriz(A,5);
    
    printf("A soma da matriz é: %d", resposta);
    return 0;
}
