#include <stdio.h>
#include <stdlib.h>
/* 10.Ler uma sequência de números inteiros e determinar se eles são pares
ou não. Deverá ser informado o número de dados lidos e número de
valores pares. O processo termina quando for digitado o número 1000. */
int main(){
    int num, quantidade = 0, pares = 0;
    printf("Insira valores inteiros (O numero 1000 encerra o codigo): ");
    scanf("%i", &num);
    while (num != 1000) {
        quantidade +=1;
        if(num%2 == 0){
            pares += 1;
        }
        printf("\nContinue inserindo valores: ");
        scanf("%i", &num);
    }
    printf("Quantidade total de valores: %i \n", quantidade);
    printf("Quantidade total de valores pares: %i", pares);
    return 0;
}