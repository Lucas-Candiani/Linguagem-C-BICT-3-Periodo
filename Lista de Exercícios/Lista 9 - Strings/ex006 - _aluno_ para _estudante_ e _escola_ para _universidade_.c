/*

6) Faça um programa que receba uma frase e troque a palavra ALUNO 
por ESTUDANTE e a palavra ESCOLA por UNIVERSIDADE. 
Exemplo: EU SOU ALUNO DA ESCOLA 
Saída: EU SOU ESTUDANTE DA UNIVERSIDADE

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void converterParaMaiuscula(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]); // Converte cada caractere
        i++;
    }
}

int main(){

    char frase[200];
    char mat[10][20];
    int qtd=0; 
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Remove o Enter no final
    
    converterParaMaiuscula(frase); 
    
    char *pedaco = strtok(frase, " "); // strtok acha a palavra da string
    
   while (pedaco != NULL && qtd < 15){
        
        if (strcmp(pedaco, "ALUNO") == 0) { //STRINGS NÃO PODEM SER COMPARADAS DIRETAMENTE
            strcpy(mat[qtd], "ESTUDANTE"); // Se strcmp devolver 0, significa que as palavras são IGUAIS
        } 
        else if (strcmp(pedaco, "ESCOLA") == 0) {
            strcpy(mat[qtd], "UNIVERSIDADE");
        } 
        else {
            strcpy(mat[qtd], pedaco); // Se não for nenhuma das duas, copia a palavra original normal
        }
        
        qtd++;
        pedaco = strtok(NULL, " "); //Vai buscaar a próxima
    }
    
    printf(\n);
    for(int j=0; j<qtd; j++){
        printf("%s ", mat[j]);
    }
    
    
    
    return 0;
}