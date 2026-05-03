/*
12. Escreva um programa em C que leia o peso de um pacote e calcule o
valor do frete. O valor do frete depende do peso:
● Até 10 kg: R$ 15,00
● De 10,1 kg a 30 kg: R$ 25,00
● De 30,1 kg a 50 kg: R$ 40,00
● Acima de 50 kg: R$ 60,00
O programa deve imprimir o valor do frete.
*/
#include <stdio.h>
int main()
{
    float kg;

    printf("|Insira o peso do pacote: (Kg): ");
    scanf("%f", &kg);

    if (kg <= 10){
    printf("|Valor do frete será de R$15,00|");
    }

    if (kg <= 30 && kg>10.1){
    printf("|Valor do frete será de R$25,00|");
    }
    
    if (kg <= 50 && kg>30.1){
    printf("|Valor do frete será de R$40,00|");
    }

    if (kg >50 ){
    printf("|Valor do frete será de R$60,00|");
    }
    return 0;
}