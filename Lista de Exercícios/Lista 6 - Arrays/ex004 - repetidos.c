/* 
==================== Váriaveis compostas ==================

4) Faça um programa que leia um vetor de 10 posições e verifique se
existem valores iguais e os escreva na tela.

*/
#include <stdio.h>

void main()
{
    
    int vetor[10];
    
    for(int i=0; i < 10; i++){
        printf("Digite um número para o vetor: "); 
        scanf("%i", &vetor[i]);
    }
    
// printo os valores do vetor. Só para saber se está tudo correndo bem

    for(int i=0; i < 10; i++){
        printf(" %i ", vetor[i]); 
    }
// =================================

    for(int i=0; i<10; i++){
        
        for (int j=0; j<10; j++){
            if (vetor[i] == vetor[j] && i != j){  //O indice j vai percorrer todo o vetor, inclusive o próprio valor j. Por isso exclui-se o valor quando igual a i
                printf("\nrepetido: %d ", vetor[i]);
            }
        }
    }
}