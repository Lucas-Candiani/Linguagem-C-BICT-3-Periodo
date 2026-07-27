/* Desafio 2) 
Uma rede de lanchonete está implantando um sistema informatizado de controle de estoque.
Cada filial dessa rede segue um padrão rigoroso, em que todos os lanches utilizam os mesmos ingredientes,
gerando, assim, a mesma lista de produtos em estoque.  
É interessante manter cadastrados a descrição, a quantidade em 
estoque, a quantidade mínima exigida e o valor unitário de cada produto. Cada 
filial possui  seis produtos em estoque. Para o efetivo cadastramento, os projetistas do sistema 
sugeriram aos programadores a utilização de
UM VETOR DE SEIS POSIÇÕES para o cadastramento da descrição dos produtos 
e UMA MATRIZ 6 × 3 para cadastrar a quantidade em estoque, quantidade mínima exigida e valor unitário.  
Seguindo o definido em projeto, você foi contratado para implementar as seguintes funcionalidades,
acessadas por meio de um menu de opções:  

1. Cadastrar as informações dos seis produtos, atendendo às seguintes restrições: 

a) a quantidade em estoque não poderá ser inferior à quantidade mínima exigida;  

b) o valor unitário deverá ser maior que zero — caso seja informado algum valor incorreto,
mostre uma mensagem de erro e solicite-o novamente.

2. Retirar um produto do estoque: você deverá informar o nome do  
produto desejado e a quantidade desejada. Então, deverá procurar 
o produto no vetor de descrições. Se ele não existir,  mostrar uma 
mensagem de erro e voltar ao menu de opções. 
Se o produto existir, você deverá verificar se a quantidade em estoque é 
suficiente para atender à solicitação. Se a quantidade existente for suficiente,deverá ser 
atualizada (por  exemplo, se o produto pão com gergelim possui 10 unidades em estoque e vou  utilizar 3,
deverei atualizar a quantidade em estoque para 7). Se a 
quantidade  existente não for suficiente para atender à solicitação, 
mostrar a mensagem “Estoque insuficiente” e voltar ao menu de opções.  

3. Mostrar a descrição de todos os produtos com quantidade em  
estoque inferior ao estoque mínimo exigido.  

4. Mostrar o valor total dos produtos existentes no estoque. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void transforma_minusculo(int linhas, int colunas,char matriz[linhas][colunas]){
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; matriz[i][j] != '\0'; j++) {
            matriz[i][j] = tolower((unsigned char)matriz[i][j]); //unsigned char trata 
            //o caracter atual como um inteiro. Protege o código em caso de strings com acento;
        }
    }
}

void string_minuscula(char *str) {
    for (int j = 0; str[j] != '\0'; j++) {
        str[j] = tolower((unsigned char)str[j]);
    }
}

void menu(int menu){
    printf("\n\n");
    printf("|<<<<<<Menu de Opções>>>>>>|\n");
    printf("|(1) --> Cadastrar produtos|\n");
    printf("|(2) --> Remover o produto do estoque|\n");
    printf("|(3) --> Ver estoque abaixo do mínimo exigido|\n");
    printf("|(4) --> Ver estoque geral |\n");
    printf("|(0) --> Sair do sistema |\n"); 
}

int main()
{
    char mat_descricao[6][25]; /*=
    {
    {"Pao com Gergilim"},
    {"Alface americana"},
    {"Tomate"},
    {"Queijo Cheddar"},
    {"Hamburguer"},
    {"Nuggets"}
    }; */
    
    float mat_estoque[6][3]; /*=
    {
    {10, 2, 3},
    {1,3, 1.5},
    {18,10, 1.25},  Neumar, vou deixar esses aqui para caso o senhor queira testar com valores prontos...
    {5, 3, 5},      Basta remover os ; manter o '=' e colocar como comentário a parte ali embaixo que cadastra
    {12, 6, 4.5},   o nome do produto...
    {10,15,10},
    }; */
    
    //transforma_minusculo(6,25,mat_descricao);
    
    int i=0; 
    int opcao; // Variável para o switch controlar o menu
    int c;

    do {
        menu(0);
        printf("|Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");
        
        // Limpa o buffer para o fgets do caso 2 não ser pulado
        while ((c = getchar()) != '\n' && c != EOF);

        switch(opcao) {

            //============================= Opção 1) ===================================//  
            case 1:
                for(int j=0; j<6; j++){
                    //>>>>>CADASTRO DE PRODUTO<<<<<
                    printf("|Qual produto será cadastrado?: ");
                    scanf(" %[^\n]", mat_descricao[j]); //Esse tipo de scanf consegue guardar a string
                    // diretamente no matriz, o \n dentro serve para não contabilizar o espaço final
                    
                    //>>>>>PREENCHIMENTO DE ESTOQUE<<<<<
                    printf("|Adicione quantidade em estoque: ");
                    scanf("%f", &mat_estoque[j][i]);
                    printf("\n");
                    
                    //>>>>>PREENCHIMENTO DE MIN.NECESSÁRIO<<<<<
                    printf("|Adicione quantidade mínima necessária: ");
                    scanf("%f", &mat_estoque[j][i+1]);
                    printf("\n");
                    //Testo se o estoque é maior que o minimo necessário
                    while(mat_estoque[j][i]<mat_estoque[j][i+1]){
                        printf("|O valor em ESTOQUE é menor do que o mínino necessário, preencha-o novamente:");
                        scanf("%f", &mat_estoque[j][i]);
                        printf("\n");
                    }
                    
                    //>>>>>PREENCHIMENTO DE MIN.NECESSÁRIO<<<<<
                    printf("|Adicione o valor unitário: ");
                    scanf("%f", &mat_estoque[j][i+2]);
                    printf("\n");
                    //Testo se o valor unitário é zero...
                    while(mat_estoque[j][i+2]==0){
                        printf("O valor unitário não pode ser zero, prrencha-o novamente: ");
                        scanf("%f", &mat_estoque[j][i+2]);
                        printf("\n");
                    }
                    printf("|\tProduto cadastrado...\t\n");
                }
                transforma_minusculo(6,25,mat_descricao); //Transformo todas as string coletadas em minuscula
                break;

            //============================= Opção 2) ===================================//  
            case 2: {
                char remover_produto[25];
                int cadastrado=0; 
                float qtd_removida; 
                
                while (cadastrado==0){
                    printf("|Qual produto será removido? (ex: Pao Doce):");
                    fgets(remover_produto, sizeof(remover_produto), stdin);
                    remover_produto[strcspn(remover_produto,"\n")] = '\0'; // Remove o Enter no final
                    string_minuscula(remover_produto);
                    
                    for(int j=0; j<6; j++){
                        if (strcmp(remover_produto,mat_descricao[j]) == 0){//Procurando se tem o produto no estoque...
                            cadastrado+=1;
                            printf("|Qual é a quantidade que deseja remover?: ");
                            scanf("%f", &qtd_removida);
                            
                            if((mat_estoque[j][i]-qtd_removida)>0){
                                mat_estoque[j][i]= mat_estoque[j][i]-qtd_removida;
                                printf("|>>Remoção concluida<<\n|Novo valor no estoque:%s: %.2f \n",mat_descricao[j],mat_estoque[j][i]);
                            } else {
                                printf("\n|Estoque insuficiente>>> Quantidade disponivel/minima necessária: %.2f/%.0f\n",mat_estoque[j][i], mat_estoque[j][i+1]);
                                break;
                            }
                        } 
                    }
                    if(cadastrado==0){
                        printf("|\n|O produto digitado não foi cadastrado. Tente novamente:");
                    }
                }
                break;
            }

            //============================= Opção 3) ===================================//  
            case 3:
                int bool=0;
                printf("|Estoque abaixo do nível mínimo para operação|\n");
                for(int j=0; j<6; j++){
                    if(mat_estoque[j][i]<mat_estoque[j][i+1]){
                        printf("|%s| quantidade em estoque: %.0f => quantidade mínima necessária: %.0f => preco unitario: %.2f\n", mat_descricao[j], mat_estoque[j][i], mat_estoque[j][i+1], mat_estoque[j][i+2]); 
                    } else {
                        bool ++;
                    }
                    if(bool==6){
                        printf("\n|Nenhum produto está abaixo do minimo necessario\n");
                    }
                } 
                break;
                
            //============================= Opção 4) ===================================//  
            case 4:
                float total=0;
                printf("\n|================== >>>>>>> ESTOQUE <<<<<<< ==================|\n");
                //Esse código define 18 caracteres de tamanho, 10 para o estoque...
                printf("| %-18s | %-10s | %-12s | %-10s |\n", "Produto", "Estoque", "Qtd. Minima", "Preco Unit.");
                printf("|--------------------|------------|--------------|------------|\n");
                
                for(int j = 0; j < 6; j++) {
                    total += mat_estoque[j][i]*mat_estoque[j][i+2];
                    // %-18s  -> Alinha o texto independente do tamanho da palavra
                    // %10.0f -> Trava a direita ocupando 10 espaços fixos 
                    printf("| %-18s | %10.0f | %12.0f | R$ %7.2f |\n", 
                           mat_descricao[j], 
                           mat_estoque[j][i], 
                           mat_estoque[j][i+1], 
                           mat_estoque[j][i+2]);
                }
                printf("|=========Valor total dos produtos: R$%.2f ==================|\n",total);
                printf("|==============================================================|\n");
                break;
            case 0:
                printf("\n|Desligando o sistema... Ate logo!\n");
                break;
            default:
                printf("\n|Opcao invalida! Tente novamente.\n");
                break;
        }

    } while(opcao != 0);

    return 0;
}