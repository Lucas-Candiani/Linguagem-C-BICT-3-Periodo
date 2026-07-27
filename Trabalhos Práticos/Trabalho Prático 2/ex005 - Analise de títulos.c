/*
Desafio 5) Uma empresa de tecnologia deseja implementar uma ferramenta  
simples de análise de mensagens enviadas pelos clientes.  
Crie um programa em C que:  
1. Leia uma frase completa digitada pelo usuário (até 200  
caracteres).  
2. Calcule e exiba:  
▪ O número total de palavras na frase (palavras são  separadas 
por espaço);  
▪ A quantidade de vogais e consoantes presentes;  
▪ A palavra mais longa da frase e seu comprimento.  
3. Mostre os resultados de forma formatada.  
Regras adicionais:  
• Ignore a pontuação na contagem de palavras.  
• Considere apenas letras do alfabeto (ignore números e  
símbolos).
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void filtradoraAcentosESimbolos(char original[], char tratada[],char vogais[], char consoantes[]){
    int j = 0;
    for (int i = 0; original[i] != '\0'; i++) {
        unsigned char c = original[i]; //Trata o caracter 
        // Manual dos acentos mais comuns da tabela ASCII, preferi usar essa do que pegar bibliotecas mais avançadas
        if (c == 160 || c == 131 || c == 132 || c == 133 || c == 134){
            c = 'a';// á, â, ã...
        }else if (c == 130 || c == 136 || c == 137){ 
            c = 'e'; // é, ê...                  
        }else if (c == 161){ 
            c = 'i'; // í...                                           
        }else if (c == 162 || c == 147 || c == 148){ 
            c = 'o'; // ó, ô, õ...                   
        }else if (c == 163 || c == 129){ 
            c = 'u'; // ú, ü...                              
        }else if (c == 135){ 
            c = 'c'; // ç...                                           
        }
        // Esse filtro serve para permitir somente letras que estão dentros do alfabeto, (ignora simbolos ou numeros);
        if (strchr(vogais, c) != NULL || strchr(consoantes, c) != NULL || c == ' ') {
            tratada[j] = c;
            j++;
        }
    }
    tratada[j] = '\0';
}

void string_minuscula(char *str) {
    for (int j = 0; str[j] != '\0'; j++) {
        str[j] = tolower((unsigned char)str[j]);
    }  
}

int main() {
    char frase_original[200];
    char frase_limpa[200];
    
    char palavra_maior[50] = ""; //inicializo vazia
    int letras_palavra_maior = 0;

    int qtd_consoantes = 0;
    int qtd_vogais = 0;
    
    char consoantes[] = "bcdfghjklmnpqrstvwxyz";
    char vogais[] = "aeiou";

    printf("|Digite uma frase: ");
    fgets(frase_original, sizeof(frase_original), stdin);
    frase_original[strcspn(frase_original, "\n")] = '\0'; 
    
    string_minuscula(frase_original); 
    filtradoraAcentosESimbolos(frase_original, frase_limpa, vogais, consoantes);
    
    char *pedaco = strtok(frase_limpa, " "); // Pega a primeira palavra da frase
    
    while (pedaco != NULL) {
        int vogais_da_palavra = 0;
        int consoantes_da_palavra = 0;
        int tam_palavra = strlen(pedaco);

        // Varre cada letra da palavra atual para contar vogais e consoantes
        for (int i = 0; i < tam_palavra; i++) {
            // strchr serve para procurar um único caractere dentro de uma string
            if (strchr(vogais, pedaco[i]) != NULL) {
                vogais_da_palavra++;
                qtd_vogais++;
            } else if (strchr(consoantes, pedaco[i]) != NULL) {
                consoantes_da_palavra++;
                qtd_consoantes++; 
            }
        }
        // Testo se o total de letras coletados agora é maior que as letras da palavra maior..
        int total_letras_atual = vogais_da_palavra + consoantes_da_palavra;
        if (total_letras_atual > letras_palavra_maior) {
            letras_palavra_maior = total_letras_atual;
            strcpy(palavra_maior, pedaco); // Se for, eu guardo a palavra no lugar da anterior
        }
        
        pedaco = strtok(NULL, " ");
    }
    
    printf("\n================ RESULTADO ================\n");
    printf("Palavra maior: \"%s\" com %i letras \n", palavra_maior, letras_palavra_maior);
    printf("Total de Consoantes na frase = %i \n", qtd_consoantes);
    printf("Total de Vogais na frase = %i \n", qtd_vogais);
    printf("===========================================\n");

    return 0;
}