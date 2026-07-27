/*
   8) Durante os Jogos Olímpicos de Verão, uma cidade está recebendo 5 
delegações, cada uma composta por 10 atletas. Crie um programa que 
possa armazenar as alturas dos 10 atletas para cada uma das 5 
delegações que participarão dos jogos. O programa deve imprimir a 
maior altura de cada delegação.
*/

/*Notas:
    Eu preciso que a variável de maior altura (maior_h) verifique a cada nova delegação
qual é a maior altura, então, eu começo supondo que a maior altura é a primeira, uso uma
condicional para checar a cada novo cadastro se a nova altura inserida é maior que a maior
e imprimo ela, antes de descer para a proxima coluna eu reinicio a variável com o valor do 
primeiro jogador da nova coluna "j" 

*/

#include <stdio.h>

int main()
{
    float mat[5][10];
    float maior_h = 0.0;
//>>>>>>>>>>> Preenchendo as delegações <<<<<<<<<<<<//
    printf("|Preencha a altura dos jogadores em metros (ex: 1.70) |\n");
    for(int j=0; j<5; j++){
        printf("|Altura dos jogadores da delegação|%d| \n", j+1);
        for(int i=0; i<10; i++){
            printf("Altura %d: ", i+1);
            scanf("%f", &mat[j][i]);
        }
        printf("\n");
    }
//>>>>>>>>>>> Impressão <<<<<<<<<<<<//
    printf("| Delegações Finalizadas: \n");
    for(int j=0; j<5; j++){
        printf("Delegação %d \n", j+1);
        for(int i=0; i<10; i++){
            printf(",%.2f ", mat[j][i]);
            if(maior_h<mat[j][i]){
                maior_h = mat[j][i];
            }
        }
        printf("Maior altura: %.2f ", maior_h);
        maior_h= 0;
        printf("\n");
    }

	return 0;
}