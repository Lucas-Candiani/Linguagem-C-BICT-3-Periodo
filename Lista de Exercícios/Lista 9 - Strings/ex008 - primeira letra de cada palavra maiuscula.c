/*
8) Faça um programa que receba uma frase com letras minúsculas e
converta a primeira letra de cada palavra da frase para maiúscula.
Exemplo:
Entrada: fazer exercícios faz bem.
Saída: Fazer Exercícios Faz Bem.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void deixarMaiusculo(char texto[], int comprimento){

    for(int i =0; i<comprimento; i++){
        texto[i]= toupper(texto[i]);
        break;
    }
}


int main()
{
    char frase[200];
    int qtd =0; 
    
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Remove o Enter no final
    
    for(int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            qtd++;
        }
    }
    qtd++;
    
    
    char *pedaco = strtok(frase, " "); // strtok acha a palavra da string
    
    for(int i=0; i<qtd; i++){
        deixarMaiusculo(pedaco, strlen(pedaco));
        printf("%s ", pedaco);
        pedaco = strtok(NULL, " "); //Vai buscaar a próxima
    }
    
}
