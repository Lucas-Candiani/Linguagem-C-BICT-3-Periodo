/*

3. Faça um programa contendo uma função que receba dois números
positivos por parâmetro e retorne a soma dos N números inteiros
existentes entre eles.

*/
#include <stdio.h>

int soma_intervalo (int i, int f) {
	int soma = 0;
	for (int x = i+1; x<f; x++) {
		soma += x;
	}
	return soma;
}


int main()
{
	int a,b,s;

	printf("digite o inicio do intervalo: ");
	scanf("%i", &a);

	printf("digite o fim do intervalo: ");
	scanf("%i", &b);

	s = soma_intervalo(a,b);

	printf ("A soma entre %i e %i eh igual a %d \n", a, b, s);

	s = soma_intervalo(0,11);
    printf ("A soma entre %i e %i eh igual a %d \n", 0, 11, s); 
    
	return 0;
}
