/**
11. Faça um programa que leia um código numérico e uma quantidade de
um item e imprima o total a ser pago, seguindo a tabela abaixo:
**/
#include <stdio.h>
#include <math.h>
int main()
{
    float valor;
    int pedido, quantidade;
    char bool;
    printf("1 |Tapioca| R$18,00|\n2 |X-Salada| R$30,00|\n3 |X-Bacon| R$32,00|\n4 |Suco Natural| R$12,00|\n5 |Refrigerante| R$10,00|\n");
    printf("Qual será o seu pedido? (informe o codigo do produto): ");
    scanf("%i", &pedido);
    printf("Quantos voce vai querer?: ");
    scanf("%i", &quantidade);
    
    switch (pedido){
        case 1:
            bool = 1;
            valor = 18 * quantidade;
            break;
        case 2:
            bool = 1;
            valor = 30 * quantidade;
            break;
        case 3:
            bool = 1;
            valor = 32 * quantidade;
            break;
        case 4:
            bool = 1;
            valor = 12 * quantidade;
            break;
        case 5:
            bool = 1;
            valor = 10 * quantidade;
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