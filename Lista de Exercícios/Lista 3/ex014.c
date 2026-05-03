/**
14. Faça um programa que mostre o menu de opções a seguir, receba a
opção do usuário e os dados necessários para executar cada operação.
Menu de opções:
1. Somar dois números.
2. Raiz quadrada de um número.
Digite a opção desejada:
**/
#include <stdio.h>
#include <math.h>
int main()
{
    int opcao;
    float n1,n2, res;
    printf("---Menu de Opcoes---\n1. Somar dois numeros.\n2. Raiz quadrada de um numero.\nDigite a opcao desejada: ");
    scanf("%i", &opcao);
    if (opcao != 1 && opcao != 2){
        printf("Opcao invalida. [FIM] ");
    } else {
        switch (opcao){
        case 1:
            printf("Informe o primeiro numero: ");
            scanf("%f",&n1);
            printf("Informe o segundo numero: ");
            scanf("%f",&n2);
            res = n1 + n2;
            printf("A soma de %.2f e %.2f é %.2f",n1 ,n2 ,res);
            break;
        case 2:
            printf("Informe o numero: ");
            scanf("%f",&n1);
            if (n1>0){
            res = sqrt(n1);
            printf("A raiz quadrada de %.2f é %.2f",n1 ,res );
            } else {
                printf("Não existe solucao real para raiz quadrade de numeros negativos.");
            }
            break;
        }
    }
    return 0;
}