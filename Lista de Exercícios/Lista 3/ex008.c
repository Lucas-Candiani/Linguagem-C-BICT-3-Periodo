/**
8. Escreva um programa em C que pede para o usuário entrar em um número
correspondente a um dia da semana e que então apresente na tela o
nome do dia utilizando a estrutura switch.
**/
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Escolha um numero entre 1 e 7 correspondente a um dia da semana:");
    scanf("%i", &num);
    switch(num){
        case 1:
            printf("O numero 1 é referente ao Domingo =)");
            break;
        case 2:
            printf("O numero 2 é referente a Segunda-feira =)");
            break;
        case 3:
            printf("O numero 3 é referente a Terca-feira =)");
            break;
        case 4:
            printf("O numero 4 é referente a Quarta-feira =)");
            break;
        case 5:
            printf("O numero 5 é referente a Quinta-feira =)");
            break;
        case 6:
            printf("O numero 6 é referente a Sexta-feira =)");
            break;
        case 7:
            printf("O numero 6 é referente ao Sabado =)");
            break;
        default:
            printf("Voce inseriu um dia invalido");
            break;
        }
    return 0;
}