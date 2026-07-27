/*
6) Faça um programa que preencha 2 vetores, X e Y, com dez números
inteiros cada. Calcule e mostre os seguintes vetores resultantes:
a) A união de X com Y (todos os elementos de X e de Y sem
repetições).
b) A diferença entre X e Y (todos os elementos de X que não existam
em Y, sem repetições).
c) A soma entre X e Y (soma de cada elemento de X com o elemento
de mesma posição em Y).
d) O produto entre X e Y (multiplicação de cada elemento de X com o
elemento de mesma posição em Y).
e) A intersecção entre X e Y (apenas os elementos que aparecem
nos dois vetores, sem repetições).
*/
#include <stdio.h>

int main()
{
    int vet1[10]= {1,3,5,7,9,11,13,15,17,20};
    int vet2[10]= {2,4,6,8,10,12,14,16,18,20};

//========| União sem repetição |============//

    printf("| União: ");
    for(int i=0; i<10; i++){
        if(vet1[i] != vet2[i]){
            printf("-> %d ", vet1[i]);
            printf("-> %d ", vet2[i]);
        } else {
            printf("-> %d ",vet1[i]);
        }
    }
    printf("\n");
//========| Diferença sem repetições |============//

    printf("| Diferença: ");
    for(int i=0; i<10; i++){
        if(vet1[i] != vet2[i]){
            printf("-> %d ", vet1[i]);
            printf("-> %d ", vet2[i]);
        }
    }
    printf("\n");
    
//========| Soma de Vetores |============//

    printf("| Soma: ");
    for(int i=0; i<10; i++){
        printf("-> %d ", vet1[i]+vet2[i]);
        
    }
    printf("\n");
    
    
//========| Multiplicação |============//

    printf("| Multiplicação: ");
    for(int i=0; i<10; i++){
        printf("-> %d ", vet1[i]*vet2[i]);
        
    }
    printf("\n");
    
//========| intersecção |============//

    printf("| intersecção: ");
    for(int i=0; i<10; i++){
        if(vet1[i]==vet2[i]){
            printf("-> %d ", vet1[i]);
        }
    }
    printf("\n");

    return 0;
}
 
