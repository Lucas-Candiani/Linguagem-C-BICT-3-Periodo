/*
3) Faça um programa que receba uma palavra e a imprima de
trás-para-frente.
*/
#include <stdio.h>
#include <string.h>

void inverteString(char texto[], int comprimento){
    int i,j;
    char temp;
    
    i = 0;
    j = strlen(texto)-2;
    
    while(i < j){
        temp = texto[i];
        texto[i]=texto[j];
        texto[j]=temp;
        i++;
        j--;
    }
}

int main()
{

    char palavra[100];
    printf("|Digite uma palavra: ");
    fgets(palavra,sizeof(palavra),stdin);
    
    inverteString(palavra, strlen(palavra));
    printf("A palavra invertida é: %s", palavra);
    
    return 0;
}
