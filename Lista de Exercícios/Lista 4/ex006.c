/*
6. Faça um programa que solicite ao usuário 10 números inteiros e, ao final,
informe a quantidade de números ímpares e pares lidos. Além disso,
calcule também a soma dos números pares e a média dos números
ímpares. Resolva utilizando estruturas de condição e de repetição.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=0;
    int num, impar=0, par=0, totalPar = 0, totalImpar;
    
    for (c==0; c <=10 ; c++){
        printf("Insira o primeiro numero: ");
        scanf("%i", &num);
        if (num%2==0){
            par +=1;
            totalPar += num; 
            printf("\n|Valor par|\n");
        } else {
            impar += 1;
            totalImpar += num; 
            printf("\n|Valor impar|");
        }   
    }
    
    printf("\nFim do programa com %i numeros pares e %i numeros impares", par, impar);
    printf("\nA soma dos numeros pares eh: %.2f | E a media de impares eh % ", totalPar, (0.0+totalImpar)/impar);
    return 0;
}