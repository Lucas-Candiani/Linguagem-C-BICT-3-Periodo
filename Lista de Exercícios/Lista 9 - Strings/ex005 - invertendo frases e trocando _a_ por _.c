/*

5) Faça um programa que receba duas frases distintas e imprima de 
maneira invertida, trocando as letras A por *. 
Por exemplo: 
Entrada: 
Frase 1: Hoje esta de sol 
Frase 2: Hoje nao chovera 
Saída: 
Frase 1: los ed *tse ejoH 
Frase 2: *revohc o*n ejoH 

*/
#include <stdio.h>
#include <string.h>

void inverteString(char texto[], int comprimento){
    int i,j;
    char temp;
    
    i = 0;
    j = strlen(texto)-1;
    
    while(i < j){
        temp = texto[i];
        texto[i]=texto[j];
        texto[j]=temp;
        i++;
        j--;
    }
}

void trocaAporAsterisco(char texto[], int comprimento){

    for(int i =0; i<comprimento; i++){
        if(texto[i]== 'a' || texto[i]== 'A'){
            texto[i]= '*';
        }
    }
    
}


int main(){
    
    char frase1[200];
    char frase2[200];
    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0'; // Remove o Enter no final
    
    printf("\n");
    
    printf("Digite a primeira frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0'; // Remove o Enter no final
    
    inverteString(frase1, strlen(frase1));
    inverteString(frase2, strlen(frase2));

    trocaAporAsterisco(frase1, strlen(frase1));
    trocaAporAsterisco(frase2, strlen(frase2));
    
    printf("%s \n %s", frase1, frase2); 
    
    
    return 0;
}