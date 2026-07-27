/*
    9) Faça uma função chamada DesenhaLinha. Ela deve desenhar uma linha 
na tela usando vários símbolos de igual (Ex: ========). A função recebe 
por parâmetro quantos sinais de igual serão mostrados. 
*/
#include <stdio.h>


void DesenhaLinha(char vet[], int Qtlinhas){
    
    for(int i=0; i<Qtlinhas; i++){
        
        vet[i] = '=';
        
    }
    
}

int main()
{
    
    char linha[50]; //Onde guardo o resultado
    
    DesenhaLinha(linha,50);
    
    printf("%s", linha);

    return 0;
}