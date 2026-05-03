/*
(7) Escreva um programa em C que leia uma sequência de números inteiros, 
encerrando quando for digitado 0 (o zero não entra nos cálculos). 
Ao final, exiba: 
a) Quantidade de valores lidos 
b) Soma e média (com 1 casa decimal) 
c) Maior e menor valor 
d) Quantidade de pares e quantidade de ímpares 
e) Quantidade de múltiplos de 3
f) Maior sequência consecutiva de positivos (números > 0 seguidos, 
sem zeros) 
g) Média dos positivos e média dos negativos (se existirem)
*/

#include <stdio.h>

int main()
{
    int valor;
    int total=1;
    int maior;
    int menor; 
    int pares = 0;
    int impares = 0;
    int multiplos_3 = 0;
    int cPar=0;
    int cImp=0; 
    int cPos=0, positivos =0;
    int cNeg=0, negativos = 0;
    
    float mediaPos, mediaNeg;
    
    int contadoraDePosi = 0, maiorSequenciaPosi = 0;
    
    printf("| Insira um numero inteiro. (Insira 0 para encerrar) |: ");
    scanf("%i", &valor);
    maior = valor;
    menor = valor;
    
    if(valor == 0){
        return 0;
    } else {
        if(valor>0){
            positivos += valor;
            cPos += 1;
            contadoraDePosi ++;
            maiorSequenciaPosi = contadoraDePosi;
        } else {
            negativos += valor;
            cNeg += 1;
        }
    }
    
    while(valor !=0){
        printf("| Insira o próximo (0 -> encerra): ");
        scanf("%i", &valor);
        if(valor ==0){ //Se eu não coloco isso. Da erro para conseguir o menor valor no final.
            break;
        } else {
            total += valor;
            //====== Positivos e negativos ======|
            if(valor>0){
                positivos += valor;
                cPos += 1;
                contadoraDePosi ++; //PAREI AQUI
            } else {
                if(valor < 0 || valor == 0){
                    negativos += valor;
                    cNeg += 1;
                    if(contadoraDePosi > maiorSequenciaPosi){
                        maiorSequenciaPosi = contadoraDePosi;
                        contadoraDePosi = 0;
                    }
                }
            }
            //====== Guardar os pares, impares e os totais de cada======|
            if(valor%2==0){
                pares += valor;
                cPar ++;
            } else {
                impares += valor;
                cImp ++;
            }
            
            //====== Guardar os multiplos de 3 ======|
            if(valor%3==0){
                multiplos_3 ++;
            }
            //====== Menor e maior valor ======|
            if(valor > maior){
                maior = valor;
            } else {
                if(valor < menor){
                    menor = valor;
                }
            }
            //====== Guardar a maior sequencia positiva ======| AINDA PROCURANDO UMA FORMA
            
        }
    }
    //Se o usuário adicionar somente uma sequencia positiva e depois o zero. Os valores não estavam sendo contabilizados
    if(contadoraDePosi > maiorSequenciaPosi){
        maiorSequenciaPosi = contadoraDePosi;
    }    
    
    mediaPos = ((0.0+positivos)/cPos);
    mediaNeg = ((0.0+negativos)/cNeg);
    printf("| (a) Tivemos um total de %i numeros lidos |\n", cPos + cNeg);
    printf("| (b) A soma dos valores é %i e a media é %.1f |\n", total, (0.0+total)/(cPar+cImp));
    printf("| (c) O maior numero é %i e o menor é %i |\n", maior, menor);
    printf("| (d) Houveram %i numeros pares e %i numeros impares |\n", pares, impares);
    printf("| (e) Houveram %i numeros multiplos de 3|\n", multiplos_3);
    printf("| (f) A Maior sequencia de numeros positivos foi: %i \n", maiorSequenciaPosi);
    
    if(cPos>0 && cNeg >0){
        printf("| (g) A media dos numeros positivos foi: %.1f e a dos numeros negativos foi %.1f|\n", mediaPos, mediaNeg);
    } else {
        if(cPos>0 && cNeg<=0){
            printf("| (g) A media dos numeros positivos foi: %.1f e não houveram valores negativos|\n", mediaPos);
        } else {
            if(cPos<=0 && cNeg>0){
                printf("| (g) Nao houveram numeros positivos e a media dos negativos foi %.1f|\n", mediaNeg);
            }
        }
    }
    


    return 0;
}
