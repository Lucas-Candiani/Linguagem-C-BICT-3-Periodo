/**
7. O cardápio de uma casa de lanches é dado pela tabela abaixo: Escreva um programa em
C que leia o código do item adquirido pelo consumidor e a quantidade, calculando e
mostrando o valor a pagar. Não será necessário exibir o produto e o valor, somente o valor
final.
**/
#include <stdio.h>

int main()
{
    float valor;
    int pedido, quantidade;
    char bool = 1;
    printf("---Seja bem vindo(a) ao restaWeb---\n Aqui está nossocardapio:");
    printf("100 |Cachorro Quente| R$1,70|\n101 |Bauru Simples|R$2,30|\n102 |Bauru c/ovo| R$2,60|\n103 |Hamburguer| R$2,40|\n104 Cheeseburguer| R$2,50|\n105 |Cheeseburguer| R$1,00|\n");
    printf("Qual será o seu pedido? (informe o codigo do produto): ");
    scanf("%i", &pedido);
    printf("Quantos voce vai querer?: ");
    scanf("%i", &quantidade);
    
    switch (pedido){
        case 100:
            valor = 1.7 * quantidade;
            break;
        case 101:
            valor = 2.3 * quantidade;
            break;
        case 102:
            valor = 2.6 * quantidade;
            break;
        case 103:
            valor = 2.4 * quantidade;
            break;
        case 104:
            valor = 2.5 * quantidade;
            break;
        case 105:
            valor = quantidade;
            break;
        default:
            bool = 0;
            printf("O codigo inserido é invalido.\n");
            break;
    }
    
    if(bool == 1){
        printf("Seu pedido ficou em R$%2.f ",valor);
    } else {
        printf("Tente novamente");
    }
    return 0;
}