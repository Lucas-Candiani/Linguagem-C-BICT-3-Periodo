#include <stdio.h>
#include <stdlib.h>
/* 2. Faça um programa em que o usuário digite 2 valores e se a soma deles
for maior que 15 o programa encerra. Caso contrário, solicita novas
entradas ao usuário. Utilize o laço do-while.
*/
int main(){
    float num1 , num2, soma;
    do{
        printf("\nInsira o primeiro numero: ");
        scanf("%f", &num1);
        printf("\nInsira o segundo numero: ");
        scanf("%f", &num2);
        soma = num1 + num2;
        printf("A soma de %.2f + %.2f = %.2f", num1, num2, soma);
    } while (soma <= 15);
        printf("\nFim do programa por que a soma de ambos resulta em um valor maior que 15");
    return 0;
}