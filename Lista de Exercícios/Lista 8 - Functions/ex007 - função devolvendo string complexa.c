/*
7) Faça uma função que receba a data atual (dia, mês e ano em inteiro) e 
exiba-a na tela no formato textual por extenso. Exemplo: Data: 
01/01/2000, Imprimir: 1 de janeiro de 2000.
*/
#include <stdio.h>


void actual_date(int day, int month, int year, char resultado[])
{
    char *extensive; // Eu coloquei o * para não precisar de um for para preencher
    // cada caso do switch

    switch (month){
        case 1:
            extensive = "Janeiro";
            break;
        case 2:
            extensive = "Fevereiro";
            break;
        case 3:
            extensive = "Março";
            break;
        case 4:
            extensive = "Abril";
            break;
        case 5:
            extensive = "Maio";
            break;
        case 6:
            extensive = "Junho";
            break;
        case 7:
            extensive = "Julho";
            break;
        case 8:
            extensive = "Agosto";
            break;
        case 9:
            extensive = "Setembro";
            break;
        case 10:
            extensive = "Outubro";
            break;
        case 11:
            extensive = "Novembro";
            break;
        case 12:
            extensive = "Dezembro";
            break;
    }
//O sprint é um comando utilizado para guardar palavras, numeros e textos dentro de uma variável. o %s sinaliza
//a impressão de uma string no terminal 
    sprintf(resultado, "%02d de %s de %d", day, extensive, year);
    
}



int main()
{   
    int dia, mes, ano; 
    
    char data_extensivo[100]; //Onde vou guardar o resultado final
    
    printf("Digite a data atual (Ex: DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data digitada: %02d/%02d/%d\n", dia, mes, ano); //O %02d adiciona um 0 antes se o numero for pequeno
    
    
    actual_date(dia, mes, ano, data_extensivo);
    
    printf("Hoje é %s", data_extensivo);
    

    return 0;
}
