/*
(4) Escreva um programa em C que simule um jogo onde o computador 
escolhe um número secreto entre 1 e 100 e o jogador deve adivinhar 
qual é esse número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //Precisamos da biblioteca pra gerar um numero aleatório.

int main()
{
    int c=1; //Variável para contar em quantas tentativas o usuario vai acertar
    int tentativa;
    int num_secreto;
    
    printf("=======|Bem vindo ao Jogo, ADIVINHOLANDIA|=========\n");
    
    srand(time(NULL)); //Gerador de valor aleatório.
    num_secreto = (rand() % 100);
    
    printf("=======|De o seu palpite entre 1 e 100: ");
    scanf("%i", &tentativa);
    
    while(tentativa != num_secreto){
        if(tentativa>num_secreto){
            printf("O numero secreto é menor do que %i\n", tentativa);
            printf("-----------------------------------------------\n");
        } else {
            printf("O numero secreto é maior do que %i\n", tentativa);
            printf("-----------------------------------------------\n");
        }
        c ++;
        printf("Você pode sair digitando '0'\n");
        printf("Tentativa %i: ",c);
        scanf("%i", &tentativa);
        //=========AREA DE EXIGENCIAS==========//
        if (tentativa == 0){
            break;
        } else {
            if((c == 3) && (num_secreto%2==0)){
                printf("|O Numero secreto é |PAR|\n");
            } else {
                if((c == 3) && (num_secreto%2!=0)){
                    printf("|O Numero secreto e |IMPAR|\n");
                } else {
                    if((c==5) && (num_secreto%3==0)){
                        printf("O numero secreto e multiplo de 3\n");
                    } else {
                        if((c==5) && (num_secreto%3!=0)){
                            printf("O numero secreto NAO e multiplo de 3\n");
                        } else {
                            if((c==7) && (num_secreto<=50)){
                                printf("O valor está entre 1 e 50!\n");
                            } else {
                                if((c==7) && (num_secreto>50)){
                                    printf("O valor está entre 51 e 100!\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }    
    if (tentativa == num_secreto){
        printf("=======|PARABENS, VOCE ENCONTROU O NUMERO SECRETO!!|%i| =) |=======\n", num_secreto);
        if (c==1){
            printf("===|DE PRIMEIRA?! Muito suspeito!\n");
        } else {
            printf("===|Quantidade de tentativas: %i|===\n", c);
        }
    }
    
    return 0;
}
