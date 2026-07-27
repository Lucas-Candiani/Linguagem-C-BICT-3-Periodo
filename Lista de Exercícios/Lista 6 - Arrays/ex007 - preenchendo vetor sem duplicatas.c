/*
7) Faça um programa para ler 10 números DIFERENTES a serem
armazenados em um vetor. Os dados deverão ser armazenados no vetor
na ordem que forem sendo lidos, sendo que caso o usuário digite um
número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve
ser pesquisado no vetor, verificando se ele existe entre os números que
já foram fornecidos. Exibir na tela o vetor final que foi digitado.
*/
#include <stdio.h>

int main()
{
    int vet[10];
    int organizadora;  
    
/*
Notas:
Eu preciso que o o mesmo vetor tenha dois parâmetros: j e i
Assim, o parâmetro i fica responsável por buscar algum possivel valor igual nas casas do vetor e
o j fica responsável por guardar o valor da variável organizadora no vetor principal.
*/

    for(int j=0; j<10; j++){
        printf("Digite um valor para guardar no vetor: ");
        scanf("%d", &organizadora);
        for(int i=0; i<10; i++){
            if(organizadora==vet[i]){
                printf("O valor digitado já inserido, repita: ");
                scanf("%d", &organizadora);
            }
        }
        vet[j]=organizadora;
        printf("\n");
    }
    
    printf("|>> Vetor Final >>: \n");
    for(int j=0; j<10; j++){
        printf("-> %d", vet[j]);
    }
    return 0;
}
