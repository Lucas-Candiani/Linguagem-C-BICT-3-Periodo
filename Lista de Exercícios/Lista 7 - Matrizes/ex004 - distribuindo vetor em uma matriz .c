/*
   4) Crie um programa que leia um vetor vet contendo 18 elementos. A 
seguir, o programa deverá distribuir esses elementos em uma matriz 3x6 
e, no final, mostrar a matriz gerada. 
*/

/*Notas:
    Inicialmente meu pensamento foi criar 3 FOR aninhados, visando guardar
na matriz as casas respectivas do vetor, como mat[j][i]= vet[v]... o problema
disso, é que o for do vetor precisaria andar 18 vezes para parar, o que guardaria o mesmo
valor em absolutamente todas as casas da matriz até chegar no 51.
    Assim, eu percebi que era preciso incrementar tanto a posição da linha quanto a casa do vetor 
juntos, por o vetor possuir a mesma quantidade bruta de valores que a matriz não é 
necessário limita-lo em 18. Eu posso simplesmente incrementa-lo até 18 e deixar que a coluna
destribua-os.
ex:
    vet[6]={1,2,3,4,5,6} mat[2,3];
    0: { 1 = 1   1: { 1 = 4
       { 2 = 2      { 2 = 5
       { 3 = 3      { 3 = 6
*/    

#include <stdio.h>

int main()
{
    int vet[18]= {3,6,9,12,15,18,21,24,27,30,33,36,39,41,43,46,49,51};
    int mat[3][6];
    int multiplicador;
    int v=0; 
    

 
    printf("|Vetor: ");
    for(v=0; v<18; v++){
        printf("%d, ", vet[v]);
    }
    v=0;
    printf("\n");
//>>>>>>>>>>> Destribuindo o vetor <<<<<<<<<<<<//   
    for(int j=0; j<3; j++){
        for(int i=0; i<6; i++){
            mat[j][i]= vet[v];
            v++;
        }
    }
    
    printf("| Matriz Finalizada: \n");
    for(int j=0; j<3; j++){
        for(int i=0; i<6; i++){
            printf(", %d ", mat[j][i]);
        }
        printf("\n");
    }    
    
    return 0;
}