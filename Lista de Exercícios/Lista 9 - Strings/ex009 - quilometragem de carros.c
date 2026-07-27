/*
9)  Faça um programa que preencha uma matriz de string com os 
modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, 
etc.). Em seguida, preencha um vetor com o consumo desses carros, 
isto é, quantos quilômetros cada um deles faz com um litro de 
combustível. Calcule e mostre:  
a) O modelo de carro mais econômico;  
b) Quantos litros de combustível cada um dos carros 
cadastrados consome para percorrer uma distância de 1.000 
quilômetros.
*/
#include <stdio.h>
#include <string.h>
int main()
{
	char carros [5][20];
	float consumo [5],litros[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Modelo %d: ",i+1);
		scanf(" %[^\n]",carros[i]); //Esse tipo de scanf consegue guardar a string
		// diretamente no matriz, o  \n dentro serve para não contabilizar o espaço final
	}
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		printf("Consumo do %s: ",carros[i]);
		scanf("%f",&consumo[i]);
	}
	
	for(i=0;i<5;i++)
		litros[i]=(1000/consumo[i]);
	printf("\nModelo\t|  Litros necessarios para percorrer 1.000 Km\n\t|\n");
	
	for(i=0;i<5;i++){
	    printf("%s\t|\t\t%.3f\n",carros[i],litros[i]);
	}
		
	return 0;
}