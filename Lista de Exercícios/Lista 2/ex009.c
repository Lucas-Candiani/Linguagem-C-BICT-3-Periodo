/*
9. Crie um programa em C que leia a renda de um trabalhador e calcule o
imposto a ser pago de acordo com as informações abaixo:
● Até R$ 2.000,00: Isento
● De R$ 2.001,00 até R$ 5.000,00: 10%
● De R$ 5.001,00 até R$ 10.000,00: 15%
● Acima de R$ 10.000,00: 20%
O programa deve imprimir o valor do imposto a ser pago.
*/
#include <stdio.h>
int main()
{
    float salario, tax, imposto_final;

    printf("Insira o valor da renda:\n ");
    scanf("%f", &salario);


    if (salario <= 2000){
        tax = 1;
    }

    if (salario >2000 && salario <=5000){
        tax = 0.1;
    }

    if (salario >5000 && salario <=10000){
        tax = 0.15;
    }

    if (salario >10000){
        tax = 0.2;
    }

    imposto_final = salario*tax;

    printf("Sua renda é de R$%.2f. Então o imposto cobrado será de %.2freais.",salario, imposto_final);


    return 0;
}