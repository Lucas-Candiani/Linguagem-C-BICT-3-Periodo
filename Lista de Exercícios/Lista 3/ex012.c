/**
12.Escreva um programa em C que ajude um usuário a dizer "Olá" em
diferentes idiomas. O programa deve oferecer um menu de idiomas para
o usuário escolher e então imprimir a saudação correspondente.
Instruções:
● Exiba um menu com opções numéricas para diferentes idiomas
(por exemplo, 1 para Inglês, 2 para Espanhol, 3 para Alemão, 4
para Francês, 5 para Italiano, 6 para Português e 7 para Russo).
● Leia a escolha do usuário como um número inteiro.
● Use o comando switch para selecionar a saudação baseada na
escolha do usuário.
● Imprima a saudação no idioma escolhido.
● Se o usuário digitar uma opção que não está no menu, mostre
uma mensagem de erro.
**/
#include <stdio.h>
#include <math.h>
int main()
{
    int opcao;
    printf("Opções -----\n 1 - Português \n 2 - Frances \n 3 - Russo \n 4- Alemão \n");
    scanf("%i", &opcao);
    
    switch (opcao){
        case 1:
            printf("Olá");
            break;
        case 2:
            printf("Hé");
            break;
        case 3:
            printf("Привет");
            break;
        case 4:
            printf("Hallo");
            break;
    }
    return 0;
}