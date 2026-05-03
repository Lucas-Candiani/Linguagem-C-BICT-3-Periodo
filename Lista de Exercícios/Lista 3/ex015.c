/**
15. Escreva um programa que indique o número de dias existentes em um
mês.
**/
#include <stdio.h>
#include <math.h>

int main()
{
    int mes;
    int caso;
    printf("Escolha um numero de um mes do ano [de 1 a 12] ");
    scanf("%i", &mes);
    if(mes == 2){
        caso = 1;
    } else {
        if(mes == 1 || mes == 3 || mes == 5 || mes ==7 || mes == 8 || mes == 10 || mes ==12){
            caso = 2;
        } else {
            if(mes>=4 || mes <=11){ /*Acredito que vá funcionar, pois se ele está entre 4 e 11 e não foi selecionado na anterior, ele só pode ser esses.*/
                caso = 3;
            } else {
                printf("[Erro] Mes invalido");
            }
        }
    }
    
    switch (caso){
        case 1:
            printf("Voce escolheu Fevereiro, o unico mes com 28 dias haha!");
            break;
        case 2:
            printf("O mes %i escolhido tem 31 dias",mes);
            break;
        case 3:
            printf("O mes %i escolhido tem 30 dias",mes);
            break;
        default:
            printf("Tente novamente");
            break;
    }
    return 0;
}