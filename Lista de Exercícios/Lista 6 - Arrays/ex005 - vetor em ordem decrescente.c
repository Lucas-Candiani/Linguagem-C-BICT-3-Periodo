/*
5) Faça um programa que preencha um vetor com dez números inteiros,
calcule e mostre o vetor resultante de uma ordenação decrescente.
*/
#include <stdio.h>

int main()
{
    int i;
    int j;
    int vetor[10];
    int help; //Variável auxiliadora 


//========| Coletando os dados |============//

    for(i=0; i<10; i++){
        printf("Preencha o vetor na posição %i: ", i+1);
        scanf("%i", &vetor[i]); 
        printf("\n");
    }
    
    for(i=0; i<4; i++){
        printf("Valor guardado: %i <-\n", vetor[i]);
    }
    
//========| Organizando o vetor |============//
    
    for(j=0; j<9; j++){ //Vai até 8 pois verifica de 2 em 2, na ultima ele verificaria se todos estão corretos
        for(i=0; i<9; i++){
            if(vetor[i]<vetor[i+1]){
                help = vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=help; 
            }
        }
    }
    
    printf("Vetor organizado de forma decrescente: \n");
    for(i=0; i<9; i++){
        printf("-> %i",vetor[i]);
    } 

    return 0;
}
 
