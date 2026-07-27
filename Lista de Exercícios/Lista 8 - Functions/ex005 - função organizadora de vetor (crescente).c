/*
5)Faça uma função que receba como parâmetro um vetor A com cinco 
números reais e retorne esses números ordenados de forma crescente.

Notas:

*/
#include <stdio.h>

void crescente(int vetor[], int tamanho){
    
    int maior = vetor[0]; 
    int help; 
    for(int j=0; j<tamanho; j++){
        for(int i=0; i<tamanho; i++){
            if (vetor[i]>vetor[i+1]){
                help = vetor[i+1];
                vetor[i+1]=vetor[i];
                vetor[i]= help;
            }
        }
    }
}

int main()
{
    int vet[5]={3,2,4,5,1};
    printf("\n Vetor Inserido: \n");
    for(int i=0; i<5; i++){
        printf("|%d|", vet[i]);
    }
    
    printf("\n Vetor em ordem crescente: \n");
    for(int i=0; i<5; i++){
        crescente(vet,5);
        printf("|%d|", vet[i]);
    }
    
    return 0;
}
