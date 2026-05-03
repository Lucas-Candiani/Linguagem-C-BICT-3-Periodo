/**
13. Crie um programa em C que lê o conceito de um aluno na disciplina de
Programação de Computadores e imprime seu significado, de acordo
com a tabela abaixo. Caso seja informado um conceito inexistente, deve
ser exibida uma mensagem de erro.
**/
#include <stdio.h>
int main()
{
    char conceito;
    printf("Qual é o seu conceito? [A - B - C - D - E - F: ");
    scanf("%c", &conceito);
    if(conceito != 'A' && conceito != 'B' && conceito != 'C' && conceito !='D' && conceito != 'E' && conceito != 'F'){
    printf("[ERRO] Conceito invalido. Tente novamente.");
    } else {
        switch (conceito){
            case 'A':
                printf("A = Excelente | VOCE BRILHOU, PARABÉNS! =)");
                break;
            case 'B':
                printf("B = Ótimo | Muito bem!");
                break;
            case 'C':
                printf("C = BOM |");
                break;
            case 'D':
                printf("D = Regular | Ta ok =|");
                break;
            case 'E':
                printf("E = Ruim| Tem que melhorar =(");
                break;
            case 'F':
                printf("F = Reprovou| Nos vemos de novo ano que vem...");
                break;
        }
    }
    return 0;
}