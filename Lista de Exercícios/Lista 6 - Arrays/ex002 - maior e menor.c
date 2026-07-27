/*
2) Faça um programa que receba do usuário um vetor com 10 posições.
Em seguida, deverá ser impresso o maior e o menor elemento do vetor.
*/
#include <stdio.h>

int main()
{
    int vetor[10]; 
    
    // Preencho o vetor: 
    for(int i=0; i<10; i++){
        printf("Digite: ");
        scanf("%i", &vetor[i]);
    }
    
    int maior=vetor[0];
    int menor=vetor[0];
    
    for(int i=0; i<10; i++){
        printf("vetor na posi %i\n", vetor[i]);
        if(vetor[i]>= maior){
            maior = vetor[i];
        } else {
            if(vetor[i]<menor){
                menor = vetor[i];
            }
        }
    }
    
    printf("Menor: %i e Maior: %i", menor, maior);
    return 0;
}
