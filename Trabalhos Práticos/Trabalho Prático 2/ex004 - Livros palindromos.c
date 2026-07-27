/*
Desafio 4) Uma editora está desenvolvendo um aplicativo para revisar títulos de  
livros e identificar padrões interessantes de escrita.  
Implemente um programa em C que:  
1. Leia 10 títulos de livros (cada um com até 100 caracteres).  

2. Para cada título, determine se ele é um palíndromo — ou seja, se  
pode ser lido da mesma forma da esquerda para a direita e vice versa, 
desconsiderando espaços, acentos e diferenças entre  maiúsculas e 
minúsculas.

3. Ao final, o programa deve exibir:  
▪ Quantos títulos são palíndromos.  
▪ A lista dos títulos identificados como palíndromos.  

4. Caso nenhum seja palíndromo, mostre a mensagem: "Nenhum  
título palíndromo encontrado."  
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Vou transformar todas os titulos para minusculo
void limpar_titulo(char original[], char limpo[]) {
    int j = 0;
    // Se não for um espaço, joga na string limpa e converte para minúsculo
    for (int i = 0; original[i] != '\0'; i++) {
        if (original[i] != ' ') {
            limpo[j] = tolower(original[i]);
            j++;
        }
    }
    limpo[j] = '\0'; //Acaba de fechar a string
}

void inverteString(char original[], char invertida[]) {
    int comprimento = strlen(original);
    int j = 0;
    
    // Varre de trás para frente e joga na nova string
    for (int i = comprimento - 1; i >= 0; i--) {
        invertida[j] = original[i];
        j++;
    }
    invertida[j] = '\0';
}

int verifica_palindromos(char titulos[]){
    char titulo_limpo[100];
    char titulo_invertido[100];
    
    limpar_titulo(titulos, titulo_limpo);
    inverteString(titulo_limpo,titulo_invertido);
    
    if(strcmp(titulo_limpo, titulo_invertido) == 0){
        return 1;
    } else {
        return 0;
    }
}

int main()
{   
    char livros[10][100];
    
    char lista_palindromos[10][100];
    int qtd_palindromos=0;
    int i;
    printf("|Escreva o titulo do livro:\n");
    //Eu pensei em criar um vetor titulo, e só depois de verificar passa-lo para a matriz livros
    //Contudo, eu consigo trabalhar a matriz por partes, usando-a como o vetor:
    for(i=0; i<10 ;i++){
        
        printf("|<<<Titulo %i>>>|\n|: ", i+1);
        fgets(livros[i], sizeof(livros[i]), stdin); 
        livros[i][strcspn(livros[i], "\n")] = '\0'; // Remove o Enter no final, note que o i representa a linha da matriz...
        
        if (verifica_palindromos(livros[i])==1){
            strcpy(lista_palindromos[qtd_palindromos],livros[i]);// Copio o livro direto para a lista de palindromos.7
            qtd_palindromos ++;
        }
	}
    
    if(qtd_palindromos>0){
        printf("|Quantidade de títulos palindromos: %d\n", qtd_palindromos);
        for(i=0; i<qtd_palindromos; i++){
            printf("|%s| \n", lista_palindromos[i]);
        }
    } else {
        printf("\n|Nenhum título palíndromo encontrado.|\n");
    }
    
    return 0;
}