/*
5) Escreva um programa em C que simule um jogo de adivinhação baseado 
em tabuadas. Para isso, o programa deve seguir as seguintes regras: 
a) O programa escolhe um número entre 2 e 9 como “tabuada secreta”. 
● Esse número pode ser definido manualmente no código  
(ex.: int secreto = 7;). 
b) O jogador deve tentar adivinhar qual é a tabuada secreta. 
c) Para cada tentativa, o programa mostra uma pergunta da tabuada 
secreta na forma de multiplicação, por exemplo: 
Quanto é 7 x 3? 
O jogador digita sua resposta. 
d) O programa verifica: 
● Se o resultado está correto, avisa que o palpite do jogador é válido 
e permite que ele arrisque qual é a tabuada secreta (um número 
entre 2 e 9).
● Se o resultado está errado, avisa que está incorreto e pede nova 
tentativa. 
e) O jogador pode desistir digitando 0 a qualquer momento. 
f) O jogo termina quando: 
● O jogador adivinhar corretamente a tabuada secreta. 
● O jogador desistir. 
g) Ao final, o programa deve mostrar: 
● Se o jogador venceu ou desistiu. 
● O número total de tentativas (contando todas as respostas 
dadas). 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    
    int c=0; //Variável para contar em quantas tentativas o usuario vai acertar
    int tentativa; //Guarda a tentativa da tabuada
    int tab_secreta=5;
    int resposta; //Guarda a resposta sobre a equação apresentada ao usuario
    
    int i;//| Var para criar a tabuada
    
    printf("=======|Bem vindo ao Jogo, TABUANDO SECRETO|=========\n");
    printf("=======|De o seu palpite de 2 a 9 (ou digite 0 para desistir): ");
    scanf("%i", &tentativa);
    
    /*for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", tab_secreta, i, tab_secreta * i);
    } */
    if(tentativa==0){
        printf("\n=======|Voce DESISTIU! |=========");
        return 0;
    } else {
        i=3;
        c++;
        while(tentativa != tab_secreta){
            printf("Quanto é %i x %i? \n",tab_secreta, i);
            printf("(digite 0 para desistir)");
            scanf("%i", &resposta);
            c++;
            if(resposta ==0){
                break;
            } else {
                if(resposta == tab_secreta*i){
                    printf("Muito bem, voce pode fazer outro palpite de qual e a tabuada secreta: ");
                     scanf("%i", &tentativa);
                     i++;
                } else {
                    while(resposta != (tab_secreta*i)){
                        printf("Infelizmente está errado, tente novamente: \n");
                        printf("Quanto é %i x %i? \n",tab_secreta, i);
                        scanf("%i", &resposta);
                    }
                    i++;
                }
            }
        } 
    }
    
    if(tentativa == tab_secreta){
        printf("\n=======|Voce ACERTOU A TABUADA! =)|=========\n");
        printf("=======|Total de tentativas: %i|=========",c);
    } else {
        printf("\n=======|Voce DESISTIU! |=========");
    }

    return 0;
}

