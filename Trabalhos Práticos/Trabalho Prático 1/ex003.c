/*
(3) Uma fábrica de brinquedos precisa produzir alvos feitos de papelão. 
Para tal produção, será necessário adquirir o material, ou seja, o papelão. 
Assim, a fábrica solicitou à equipe de desenvolvimento que fizesse um 
programa para calcular a quantidade de papelão a ser comprada para a 
confecção de 5 mil alvos. Sabe-se que o brinquedo terá seis círculos 
sobrepostos e que todos os círculos apresentam a mesma distância do 
círculo imediatamente menor. O diâmetro do círculo maior será dado 
pelo usuário.
*/
#include <stdio.h>

int main()
{
    float diametroMaior;
    float distancia;
    float raioAtual;
    float c;
    float area, areaTotal;
    
    printf("informe o diametro do maior circulo: ");
    scanf("%f", &diametroMaior);
    
    raioAtual = diametroMaior/2;
    distancia = raioAtual*0.15; //Comecei testando com 0.1, mas o ultimo circulo ficaria muito grande em comparação com os outros
    
    area = 3.14159*(raioAtual*raioAtual);
    areaTotal = area;
    
    for (c=2; c<=6; c++){
        if(raioAtual>0){
            raioAtual= raioAtual-distancia;
            area = 3.14159*(raioAtual*raioAtual);
            areaTotal += area;
        }
    }
    
    printf("A area total do alvo é de: %.2f centimentros quadrados \n", areaTotal);
    printf("Para a confeccao de 5 mil alvos, necessita-se ao todo de %.0f centimetros quadrados de papelao", areaTotal*5000);
    return 0;
}
