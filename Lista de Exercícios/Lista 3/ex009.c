/**
9. Faça um programa em C que receba dois números e execute as
operações listadas a seguir de acordo com a escolha do usuário:
Se a opção digitada for inválida, mostrar uma mensagem de erro e
terminar a execução do programa.
**/
#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, res;
    int opcao;
    char bool;
    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o segundo numero: ");
    scanf("%f", &n2);
    printf("Escolha qual operação deseja: \n");
    printf("1 - Media \n2 - Diferenca\n3 - Multiplicacao\n4 - Divisao do primeiro pelo segundo\n ");
    
    scanf("%i", &opcao);
    if (opcao <1 || opcao >4){
        printf("[ERRO] Operacao invalida.");
    } else {
        switch(opcao){
            case 1:
                res = (n1 + n2)/2;
                printf("(%.2f+%.2f)/2 = %.2f",n1 ,n2 ,res);
                break;
            case 2:
                if(n1>n2){
                    res = n1 - n2;
                } else {
                    res = n2 - n1;
                }
                printf("A diferenca de %.2f e %.2f vai ser: %.2f",n1 ,n2,res);
                break;
            case 3:
                res = (n1 * n2);
                printf("%.2f x %.2f = %.2f",n1 ,n2 ,res);
                break;
            case 4:
                if (n2 == 0){
                    printf("O segundo valor e zero, entao a divisao é infinita :(");
                    res = 0;
                } else {
                    res = n1/n2;
                    printf("%.2f / %.2f = %.2f",n1 ,n2 ,res);
                }
                break;
            default:
            printf("Voce inseriu um dia invalido");
            break;
        }
    }
    return 0;
}