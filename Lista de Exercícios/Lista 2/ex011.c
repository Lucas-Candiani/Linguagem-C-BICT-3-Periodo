/*
11. Faça um programa em C que leia a temperatura em graus Celsius e,
dependendo do valor, imprima a condição climática:
● Abaixo de 0°C: "Muito frio"
● De 0°C até 15°C: "Frio"
● De 16°C até 25°C: "Ameno"
● De 26°C até 35°C: "Quente"
● Acima de 35°C: "Muito quente"
*/
#include <stdio.h>
int main()
{
    float temp;

    printf("Olá! quantos graus está fazendo hoje?:\n ");
    scanf("%f", &temp);


    if (temp < 0){
        printf("Nossa, está muitooo frio!! |%.1f°C|",temp);
    }

    if (temp >= 0 && temp <=15){
        printf("Está frio! |%.1f°C|",temp);
    }

    if (temp >= 16 && temp <=25){
        printf("Está Ameno =) |%.1f°C|",temp);
    }

    if (temp >= 26 && temp <=35){
        printf("Está quente! |%.1f°C|",temp);
    }

    if (temp >35){
        printf("Nossa, está muito quente!! |%.1f°C|",temp);
    }

 return 0;
}