/*
2) Faça um programa que a partir de um nome digitado pelo usuário,
calcule e retorne quantas letras tem esse nome.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int tamanho;
    char nome[100];
    printf("|Digite seu nome: ");
    fgets(nome,sizeof(nome),stdin);
    
    tamanho=strlen(nome)-1;
    printf("Olá: %s seu nome tem %d letras",nome,tamanho );
    
    return 0;
}
