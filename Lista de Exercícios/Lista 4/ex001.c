/**
1. Faça um programa em que o usuário digite 3 números e se a soma deles
for maior que 50 o programa encerra. Caso contrário, solicita novas
entradas ao usuário. Utilize o laço enquanto.
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1 , num2, num3, soma;
        while(soma<=50){
        printf("Insira o primeiro numero: ");
        scanf("%f", &num1);
        printf("\nInsira o segundo numero: ");
        scanf("%f", &num2);
        printf("\nInsira o segundo numero: ");
        scanf("%f", &num3);
        soma = num1 + num2 + num3;
        printf("A soma de %.2f + %.2f + %.2f = %.2f \n", num1, num2, num3, soma);
        }
    
    printf("\nFim do programa por que a soma de ambos resulta em um valor maior que 50");
    return 0;
}
