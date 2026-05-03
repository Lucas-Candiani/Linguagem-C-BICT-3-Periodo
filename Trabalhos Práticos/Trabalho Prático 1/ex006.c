/*
(6) Escreva um programa em C que receba um número inteiro positivo e 
determine se ele é um número perfeito ou não. 
Um número é considerado perfeito quando a soma de todos os seus 
divisores (exceto ele mesmo) é igual ao próprio número. 
a) Exemplo 1: 
● Número = 6 
● Divisores (exceto o próprio número): 1, 2, 3 
● Soma = 1 + 2 + 3 = 6 
● Resultado: 6 é perfeito! 
b) Exemplo 2: 
● Número = 12 
● Divisores (exceto o próprio número): 1, 2, 3, 4, 6 
● Soma = 16 
● Resultado: 12 não é perfeito. 
*/

#include <stdio.h>
int main()
{
    int num;
    int multiplos = 0;
    int c;
    
    printf("|Insira um numero inteiro positivo, e verificaremos se ele é perfeito|: ");
    scanf("%i", &num);
//=======Area para certificar que o valor inserido sera positivo====//    
    while(num<0){
        printf("\n| [ERRO] Valor invalido, insira um numero positivo |: ");
        scanf("%i", &num);
    }
    
//=======Area para achar os multiplos do numero e guarda-los =====//

    for(c=1; c<num; c += 1){
        if(num%c==0){
            printf("Multiplo : %i\n", c);
            multiplos += c;
        }
    }
    
//=======Area para verificar se a soma dos multiplos é igual ao numero====//
    //printf("Multiplos = %i", multiplos);
    if (multiplos == num){
        printf("| Numero PERFEITO! =) |");
    } else {
        printf("| O numero NAO e PERFEITO |");
    }
    
    
    return 0;
}