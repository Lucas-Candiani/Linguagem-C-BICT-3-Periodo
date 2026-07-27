/*

7) Faça um programa para criptografar uma frase dada pelo usuário. A 
criptografia consiste em substituir cada letra pela letra duas posições 
na frente no alfabeto. Exemplo: substituir A por C, B por D, C por E, 
assim sucessivamente, de forma circular (Y por A, Z por B). 

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

void criptografar(char *palavra, int tamanho) {
    
    converterParaMaiuscula(palavra);
    int posi = -1; // -1 para se não achar o caractere
    char alfabeto[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (int i = 0; i < tamanho; i++) {
        if (palavra[i] == ' ') {
            continue;
        }
        
        for (int j = 0; j < 26; j++) {
            if (palavra[i] == alfabeto[j]) {
                posi = j;
                break; 
            }
        }
        
        if (posi != -1) {
            int novo_indice = (posi + 2) % 26;
            
            palavra[i] = alfabeto[novo_indice]; // Substitui a letra direto na palavra usando a nova letra
        }
    }
} 
    

int main()
{
    char frase[200];
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Remove o Enter no final

    
    criptografar(frase, strlen(frase));
    printf("\n");
    printf("%s",frase);


    return 0;
}