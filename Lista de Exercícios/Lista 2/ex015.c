/*
15. Crie um programa que leia um número inteiro e verifique se ele é
divisível por 5 e 10. Se for divisível por ambos, imprima "Divisível por 5 e
10". Se for divisível apenas por 5, imprima "Divisível por 5". Se for
divisível apenas por 10, imprima "Divisível por 10". Caso contrário,
imprima "Não divisível por 5 nem 10".
*/
#include <stdio.h>
int main()
{
    int v, caso1, caso2;

    printf("|Insira um valor inteiro: ");
    scanf("%i", &v);

    caso1 = v%5;
    caso2 = v%10;

    if(caso1==0 && caso2==0){
        printf("O valor é divisivel por 5 e por 10");
    }

    if(caso1==0 && caso2!=0){
        printf("O valor é divisivel por 5");
    }

    if(caso1!=0 && caso2==0){
        printf("O valor é divisivel por 10");
    }

    if(caso1!=0 && caso2!=0){
        printf("O valor não é divisivel nem por 5, nem por 10");
    }

    return 0;
}