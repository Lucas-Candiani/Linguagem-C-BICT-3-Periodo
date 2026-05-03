/*
14. Crie um programa que leia o ano atual e o ano de nascimento de uma
pessoa. O programa deve verificar se ela já pode votar, ou seja, se ela
tem 16 anos ou mais. Se a pessoa tiver mais de 18 anos, o programa
também deve verificar se ela é obrigada a votar, ou se ela pode votar de
forma facultativa (entre 16 e 17 anos ou 70 anos ou mais). Imprima:
● "Você pode votar" se a pessoa tiver 16 anos ou mais.
● "Você deve votar" se a pessoa tiver mais de 18 anos e menos de
70 anos.
● "Você pode votar, mas não é obrigatório" se a pessoa tiver entre
16 e 17 anos ou 70 anos ou mais.
● "Você não pode votar" se a pessoa for menor de 16 anos.
*/
#include <stdio.h>
int main()
{
    int ano, born, idade;

    printf("|Insira o ano atual e o ano de seu nascimento: ");
    scanf("%i %i", &ano, &born);

    idade = ano-born;

    if (idade<16){
        printf("Ainda não pode votar");
    }

    if (idade>=16 && idade <18 || idade>=70){
        printf("Voto opcional!");
    }

    if (idade>=18 && idade <70){
        printf("Voto obrigatório!");
    }

    return 0;
}