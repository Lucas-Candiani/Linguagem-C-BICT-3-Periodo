/**
5. Construa um programa para determinar se o indivíduo está com um
peso favorável. Essa situação é determinada através do IMC (Índice de
Massa Corpórea), que é definida como sendo a relação entre o peso
(PESO) e o quadrado da Altura (ALTURA) do indivíduo. Ou seja,
e, a situação do peso é determinada pela tabela abaixo:
**/
#include <stdio.h>
#include <math.h>
int main()
{
    float peso, altura, imc;
    printf("Insira seu peso e sua altura ");
    scanf("%f %f", &peso, &altura);
    imc = peso / pow(altura , 2); //pow é a função de potenciação
    if (imc <20){
        printf("Abaixo do peso");
    } else {
        if(imc <= 25){
            printf("Peso normal");
        } else {
            if(imc <=30){
                printf("Sobre-peso");
            } else {
                if (imc <=40){
                    printf("Obeso");
                } else {
                    if(imc >40){
                        printf("Obeso Morbido");
                    }
                }
            }
        }
    }
    
    return 0;
}