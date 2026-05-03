/*
1. Faça um programa em C que leia um número e o imprima caso ele seja
maior do que 20
*/
#include <stdio.h>
int main()
{
  int num;
  printf("Escreva um numero inteiro");
  scanf("%i", &num);
  if (num > 20){
  printf("O numero: %i Este número é maior que 20 \n", num);
  }
  return 0;
}
