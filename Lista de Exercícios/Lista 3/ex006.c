/**
6. A nota final de um estudante é calculada a partir de três notas
atribuídas,
respectivamente, a um trabalho de laboratório, a uma avaliação
semestral e a um exame final. A média das três notas mencionadas
obedece aos pesos a seguir:
**/
#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, n3 , mediaP;
    int p1, p2, p3, caso;
    char res;
    printf("---Insira a nota do laboratorio: ---\n");
    scanf("%f", &n1);
    printf("---Insira a nota da prova: ---\n");
    scanf("%f", &n2);
    printf("---Insira a nota do exame final: ---\n");
    scanf("%f", &n3);
    if (n1<0 || n1 >100 || n2<0 || n2 >100 || n3<0 || n3>100){
        printf("---[#ERRO] Sua nota deve estar entre 0 e 100---");
    } else {
        caso = 1;
        p1 = 2;
        p2 = 3;
        p3 = 5;
        mediaP = ((n1*p1)+(n2*p2)+(n3*p3))/3;
        if(mediaP >= 80 || mediaP <= 100){
        res = 'A';
        } else {
            if(mediaP >= 70 || mediaP <80){
            res = 'B';
            } else {
                if(mediaP >= 60 || mediaP <70){
                res = 'C';
                } else {
                    if(mediaP >= 50 || mediaP <60){
                    res = 'D';
                    } else {
                        if(mediaP >=0 || mediaP <50){
                        res = 'E';
                        }
                    }
                }
            }
        }
    }
    if (caso == 1){
        printf("Sua media ponderada foi de %.2f, entao seu conceito foi %c",mediaP, res);
    } else {
        printf("Tente novamente");
    }
    
    return 0;
}