/**
10.Codifique um programa em C que faça a leitura de dois números reais. A
seguir o programa lê um caractere, que deve ser +, -, * ou /, e realiza a
operação indicada pelo caractere sobre os valores lidos.
● Seu programa deve usar a estrutura switch.
● O programa deve imprimir o resultado da operação realizada
sobre eles, como mostra o exemplo a seguir (exibindo
exatamente duas casas decimais):
**/
#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, resultado;
    char opcao;
    int valida; //bool é para booleanos, só para true e false...
    
    printf("Opções -----\n + -> Somar \n - -> Subtrair \n * -> Multiplicar \n/ -> Dividir \n");
    scanf("%c", &opcao);
    printf("Insira 2 valores:\n ");
    scanf("%f \n %f",&n1 ,&n2);
    /*scanf("%f",&n1);
    scanf("%f",&n2);*/
    
    switch (opcao){
        case '+':
            resultado = n1 + n2;
            valida = 1;
            break;
        case '-':
            resultado = n1 - n2;
            valida = 1;
            break;
        case '*':
            resultado = n1*n2;
            valida = 1;
            break;
        case '/':
            resultado = n1/n2;
            valida = 1;
            break;
        default:
        valida = 0;
        printf("Opcao invalida");
    }
    if (valida == 1) {
        printf("Resultado: %.2f %c %.2f = %.2f", n1, opcao, n2, resultado);
    }
    return 0;
}