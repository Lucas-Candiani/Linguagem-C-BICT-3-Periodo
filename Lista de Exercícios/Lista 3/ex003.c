/*
3. Faça um programa para determinar se um dado número N digitado pelo
usuário é positivo, negativo ou nulo.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Insira um número inteiro ");
    scanf("%i", &n);
    
    if(n>0){
        printf("Esse numero é Positivo");
    } else {
        if(n<0){
            printf("Esse numero é Negativo");
        } else {
            printf("Esse numero é Nulo");
        }
    }
    return 0;
}