/*
(2) Alguns números inteiros possuem a capacidade de se autoelogiarem 
através de seus dígitos. Estes são números que formam a família dos 
Números Narcisistas. Os Números Narcisistas clássicos são aqueles 
iguais à soma de cada um de seus dígitos elevados à potência do 
número total de dígitos. Por exemplo, o número 153 é um narcisista 
clássico porque a soma de cada um de seus dígitos elevados ao cubo 
153 = 1^3 + 5^3 +3^3 = 1+125 +27= 153
(total de dígitos que compõem o número 153) é exatamente 153. 
Crie um programa que receba um número qualquer e determine se ele é 
Narcisista ou não.
*/
#include <stdio.h>
#include <math.h>
int main()
{
//Variáveis para definir a quantidade de unidades do número
    int valor;
    int unidades;
    int valorTeste;
//Variáveis para a separação dos valores.
    int c,dez, valorFalso, armazem = 0; 
    
    printf("informe um valor e verificaremos se ele é um numero Narcisista: ");
    scanf("%i", &valor);
    
    valorTeste = valor; // Criei essa outra variável para não bagunçar lá embaixo
    
//=======Primeiro eu preciso saber quantas unidades o número vai ter=======//    
    unidades = 0;
    
    if(valor == 0){
        unidades = 1;
    }else{
        while(valorTeste>0){
            valorTeste = valorTeste/10;
            unidades +=1;
        }
    }

/*===== Agora eu preciso obter os numeros que estão dentro dele =======/ 
Observe que quando eu pego o resto da divisão de qualquer valor por 10,
eu acabo retirando o ultimo valor dele. Como o 213%10 = 3 */

    dez = 1;
    valorFalso = valor;
    
    for(c=1; c<valor; c *= 10){
        dez *= 10;
        valorFalso = (valorFalso%dez)/c;
        armazem += pow(valorFalso, unidades);
        valorFalso = valor;
//Eu preciso reiniciar o valor2 com o valor inicial para que nno fim ele não puxe o valor2 anterior
    }
    
    
    if (armazem == valor){
        printf("O valor informado é um numero narcisista!: %i", armazem);
    } else {
        printf("O valor informado não é um numero narcisista: %i", armazem);
    }
   
    return 0;
}
