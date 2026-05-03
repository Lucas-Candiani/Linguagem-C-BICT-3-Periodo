/* 3.
Faça um programa em C que receba quatro notas de um aluno, calcule e
mostre a média aritmética das notas e a mensagem de aprovado ou
reprovado, considerando para aprovação média 7 (70%).
*/
//Podemos usar o Double que tem o dobro de bits do float
#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("Informe a primeira nota: \n");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: \n");
    scanf("%f", &nota2);
    
    printf("Informe a terceira nota: \n");
    scanf("%f", &nota3);
    
    printf("Informe a quarta nota: \n");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4)/4;
    
    if (media >= 70.0){
        printf("A media é de: %.2f então você foi aprovado", media);
    } else {
        printf("A media é de: %.2f então você não passou", media);
    }
    
     return 0;
}