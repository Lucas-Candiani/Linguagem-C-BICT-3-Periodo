/*

Fatorial recursivo

*/
#include <stdio.h>

int calcular_fatorial(int n);

int main()
{
    
    int x;
    printf("Digite um número inteiro: ");
    scanf("%i", &x);
    
    int resposta = calcular_fatorial(x);
    
    printf("o fatorial de %i é igual a %i", x ,resposta);
    return 0;
}

//Recursividade = uma função chama a si mesma. 
int calcular_fatorial(int n){
    
    /*int f=1;
    for(int i=1; i <= n; i++){
        f = f*i;
    }
    return f;*/
    
    if(n==1) {
        return 1;
    } else {
        return (n*calcular_fatorial(n-1));  
    }

}