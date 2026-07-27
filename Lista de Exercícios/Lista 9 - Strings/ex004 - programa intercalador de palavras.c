/*
4) Faça um programa que receba duas frases e gere uma terceira que 
represente a combinação das palavras das duas frases recebidas. 
Por exemplo: 
Frase 1: Hoje está um belo dia 
Frase 2: Talvez chova amanhã 
Saída: Hoje talvez está chova um amanhã belo dia
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char frase1[500];
    char frase2[500];
    
    char mat1[10][25]; //mat 1 cabe 10 palavras com 25 letras cada
    char mat2[10][25]; //mat 2 cabe 10 palavras com 25 letras cada
    int qtd1 =0, qtd2 =0; //Quantas palavras vão ter em cada string
    int i=0;
    printf("Digite uma frase: ");
    fgets(frase1, sizeof(frase1), stdin); 
    frase1[strcspn(frase1, "\n")] = '\0'; // Remove o Enter no final
    
    printf("Digite outra frase: ");
    fgets(frase2, sizeof(frase2), stdin); 
    frase2[strcspn(frase2, "\n")] = '\0'; // Remove o Enter no final
    
    
/* 
 Agora, eu preciso guardar essa primeira palavra em algum lugar,
pois, ao chamar novamente o strtok, ele vai guardar somente a próxima palavra 
e descartar essa primeira 
*/
    
//Guarda palavra por palavra na matriz 1:
    char *pedaco = strtok(frase1, " "); // strtok acha a palavra da string
    while (pedaco != NULL && qtd1<10){
        strcpy(mat1[qtd1], pedaco);
        qtd1++;
        pedaco = strtok(NULL, " "); // Vai buscar a próxima palavra da string
    }
      
//Guarda palavra por palavra na matriz 2:
    pedaco = strtok(frase2, " "); // strtok acha a palavra da string
    while (pedaco != NULL && qtd2<10){
        strcpy(mat2[qtd2], pedaco);
        qtd2++;
        pedaco = strtok(NULL, " "); // Vai buscar a próxima palavra da string
    }

//Agora é preciso exibir alternadamente as duas matrizes:

    while(i <qtd1 || i < qtd2){
        if(i < qtd1){
            printf("%s ", mat1[i]);
        }
        if(i < qtd2){
            printf("%s ", mat2[i]);
        }
        i++;
    }
    printf("\n"); 

    return 0;
}