/*
3) Faça um programa que leia as notas de uma turma de 10 estudantes e
depois imprima as notas que são maiores do que a média da turma.
*/
#include <stdio.h>

int main()
{
    int alunos[10];
    float media=0; 
    float contador=0;
    
    for(int i=0; i<10; i++){
        printf("Digite a nota do aluno %i: ", i);
        scanf("%i", &alunos[i]); 
        contador += (alunos[i]+ 0.0); 
        printf("\n");
    }

    media = contador/10; 
    printf("Media : %.2f \n", media);
    
    for(int i=0; i<10; i++){
        if(alunos[i]> media){
            printf("Nota acima da média: %i \n", alunos[i]);
        }
    }

    return 0;
}