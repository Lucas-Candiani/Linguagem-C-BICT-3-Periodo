/*
8. Escreva um programa em C que leia o salário de um empregado e
verifique se ele é superior a R$ 3.000,00. Se for, imprima "Salário alto",
caso contrário, imprima "Salário normal".
*/
#include <stdio.h>
#define LIMITE 3000.0 //isso é uma constante
int main()
{
    float salario;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario > LIMITE){
        printf("Salaio alto! :)");
    }

    if (salario <= LIMITE){
        printf("salario baixo! :(");
 }


 return 0;
}