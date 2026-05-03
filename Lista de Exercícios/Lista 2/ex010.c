/*
10. Escreva um programa para um sistema de compras em que o preço de
um produto varia dependendo da quantidade comprada. Se o cliente
comprar:
● Menos de 5 unidades, o preço é R$ 50,00 por unidade.
● Entre 5 e 10 unidades, o preço é R$ 45,00 por unidade.
● Mais de 10 unidades, o preço é R$ 40,00 por unidade.
*/
#include <stdio.h>
#define LIMITE 3000.0 //isso é uma constante
int main()
{
    int quantidade;
    float valor, preco;
    printf("Informe a quantidade de itens no pedido: ");
    scanf("%i", &quantidade);
    if (quantidade < 5){
        preco = 50.0;
    }
    if (quantidade >=5 && quantidade <10){
        preco = 45.0;
    }
    if (quantidade >= 10){
        preco = 40.0;
    }
    valor = quantidade * preco;
    printf("Valor total do pedido: %.2f \n", valor);
    return 0;
}