/*
13. Crie um programa em C que leia um ano e verifique se ele é bissexto.
Um ano é bissexto se:
● Ele for divisível por 4, mas não divisível por 100,
● ou Ele for divisível por 400.
O programa deve imprimir "Bissexto" ou "Não bissexto" dependendo do
caso.
*/
#include <stdio.h>
int main()
{
    int ano, verificador1, verificador2, verificador3;

    printf("|Insira um ano: ");
    scanf("%i", &ano);

    verificador1 = ano%4 ;
    verificador2 = ano%1000;
    verificador3 = ano%400;

    if (verificador1 == 0 && verificador2 != 0 || verificador3 == 0){
    printf("|O ano %i é Bissexto!|",ano);
    } else {
    printf("|O ano %i NÃO é Bissexto!|",ano);
    }

    return 0;
}