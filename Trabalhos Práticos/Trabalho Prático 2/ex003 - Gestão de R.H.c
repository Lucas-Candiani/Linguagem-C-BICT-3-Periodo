/* Desafio 3) Uma empresa do ramo da construção civil está informatizando seu  
Departamento de Pessoal. Inicialmente, cadastrou o salário de todos os cargos  
da empresa. Cada tipo de cargo ocupa uma posição do vetor de tamanho 5. 
Depois,  cadastrou todos os seus funcionários em um vetor de registros, 
contendo os  seguintes campos: código, nome e código do cargo.   
Crie um programa que contenha uma função para mostrar um menu ao  
usuário, assim:  
1. Cadastrar os cargos da empresa.  
2. Cadastrar os funcionários da empresa.  
3. Mostrar um relatório contendo o número, o nome e o valor do  
salário de todos os funcionários.  
4. Mostrar o valor total pago aos funcionários que pertençam a um 
cargo informado pelo usuário.  
5. Finalizar.  

Opção 1: Cada vez que essa opção for selecionada deverá ser chamada uma  
sub-rotina, na qual o usuário poderá cadastrar todos os cargos. Não se esqueça,  
nesta empresa existem apenas cinco cargos. Se o usuário mandar executar 
esta  opção mais de uma vez, mostre a mensagem de erro “Salários dos cargos 
já  cadastrados” e retorne ao menu.  

Opção 2: Cada vez que essa opção for selecionada deverá ser chamada uma  
sub-rotina, na qual o usuário poderá cadastrar um novo funcionário, ou seja,  
informará o número do funcionário (este número deve ser único, você deverá  
implementar essa validação), nome e código do cargo (lembre-se de que o  
código informado deverá existir no vetor de cargos). Não se esqueça, nesta  
empresa existem apenas 15 funcionários. Se o usuário selecionar essa opção e 
o vetor de funcionários estiver completamente preenchido, mostrar uma  
mensagem de erro e retornar ao menu.  
• Crie uma sub-rotina para fazer a validação do número do funcionário — ela 
não poderá aceitar um número repetido.  
• Crie uma sub-rotina para fazer a validação do código do cargo ocupado  
pelo funcionário — ela só poderá aceitar códigos entre 1 e 5 cujos salários  
já tenham sido cadastrados no vetor de cargos. 

Opção 3: Cada vez que essa opção for selecionada deverá ser chamada uma  
sub-rotina, na qual serão mostrados código, nome e valor do salário de todos os  
funcionários cadastrados (salários podem ser obtidos no vetor de cargos).  

Opção 4: Cada vez que essa opção for selecionada deverá ser chamada uma  
sub-rotina, na qual será feito o somatório do salário de todos os funcionários 
que  pertencerem a determinado cargo. Esse cargo é informado pelo usuário 
(entre 1  e 5) no módulo principal do seu programa e o somatório calculado 
deverá ser mostrado, também, no módulo principal. 
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int indice_global = 0;//Se eu coloco ele local o código iria reiniciar na próxima chamada

void menu(int menu){
    printf("\n");
    printf("|>>>>>> |Menu de Opções| <<<<<<|\n");
    printf("|(1) --> Cadastrar Cargos |\n");
    printf("|(2) --> Cadastrar Funcionários |\n");
    printf("|(3) --> Relatório de R.H |\n");
    printf("|(4) --> Total Pago |\n");
    printf("|(5) --> Finalizar |\n");
    
}

struct funcionario{
    int numero;
    char nome[25];
    int cargo;
};

float preenche_cargos(float vet[], int tamanho, float salario){
    
    vet[indice_global]=salario;
    indice_global++;
}

int valida_cod_funcionario(int codigo_digitado, struct funcionario vet[], int qtd_atual) {
    // Vou comparar o código digitado com o código de cada funcionário já salvo
    for (int j = 0; j < qtd_atual; j++) {
        if (codigo_digitado == vet[j].numero) {
            return 1; // Encontrou um repetido!
        }
    }
    return 0; 
}

int valida_cargo_funcionario(int codigo,int cadastrado){
    if(codigo<1 || codigo>5){
        return 1;
    } else if(cadastrado==0){
        return -1; 
    } else {
        return 0; 
    }
}

void gerar_relatorio_rh(struct funcionario vet_funcionarios[], int qtd_funcionarios, float vetor_cargos[]) {
    printf("\n|======================= RELATORIO DE R.H. =======================|\n");
    if (qtd_funcionarios == 0) {
        printf("| Nenhum funcionario cadastrado no sistema ate o momento.          |\n");
        printf("|=================================================================|\n");
        return;
    }
    printf("| %-8s | %-25s | %-15s |\n", "Codigo", "Nome do Funcionario", "Salario");
    printf("|----------|---------------------------|-----------------|\n");
    for (int j = 0; j < qtd_funcionarios; j++) {
        
        float salario_atual = vetor_cargos[vet_funcionarios[j].cargo-1]; //-1 do código do cargo
        printf("| %-8d | %-25s | R$ %-12.2f |\n", 
               vet_funcionarios[j].numero, 
               vet_funcionarios[j].nome, 
               salario_atual);
    }
    printf("|=================================================================|\n");
}

int main(){
    
    int opcao;
    float cargos[5];
    float salario_cargo=0;
    int c;
    int ja_cadastrado = 0;
    
    int codigo_temp;
    int qtd_funcionarios=0;
    
    struct funcionario relatorio_funcionarios[15];
    
    int cargo_procurado;
    float total_pago=0;
    int achou_funcionario=0;
    do {
        menu(0);
        printf("|Opcao: ");
        scanf("%d", &opcao);
        printf("\n\n");
        while ((c = getchar()) != '\n' && c != EOF); //Limpando o buffer
        switch(opcao) {
            //============================= Opcao 1) ===================================//  
            case 1:
                if (ja_cadastrado == 1) {
                    printf("|[ERRO] Salários dos cargos já cadastrados...\n");
                    break; 
                }
                printf("|>>>>>> Cadastrando Cargos <<<<<<|\n");
                for(int i=0; i<5; i++){
                    printf("|Digite o salário do cargo %d: ", i+1);
                    scanf("%f", &salario_cargo);
                    preenche_cargos(cargos,5, salario_cargo);
                    while ((c = getchar()) != '\n' && c != EOF); //Limpando o buffer
                }
                
                ja_cadastrado=1; //Mostro pro menu que já foi cadastrado;
                salario_cargo=0;//Está livre pra ser usado novamente.
                break;
            //============================= Opcao 2)===================================//  
            case 2:
                printf("|>>>>>> Cadastrando Funcionários <<<<<<|\n");
                if (qtd_funcionarios < 15){
                    //>>>>>NOME<<<<<<<<<<<<<<
                    printf("--- Cadastrando Funcionário %d ---\n", qtd_funcionarios + 1);
                    printf("Digite o nome: ");
                    fgets(relatorio_funcionarios[qtd_funcionarios].nome, sizeof(relatorio_funcionarios[qtd_funcionarios].nome), stdin);
                    relatorio_funcionarios[qtd_funcionarios].nome[strcspn(relatorio_funcionarios[qtd_funcionarios].nome, "\n")] = '\0';
                    
                    //>>>>>NUMERO<<<<<<<<<<<<<<
                    printf("|>> Qual é o numero do funcionário?: ");
                    scanf("%d", &codigo_temp); 
                    while(valida_cod_funcionario(codigo_temp, relatorio_funcionarios, qtd_funcionarios)==1){
                        printf("[ERRO] Esse numero de funcionario ja existe! Tente novamente: ");
                        scanf("%d", &codigo_temp);
                    }
                    relatorio_funcionarios[qtd_funcionarios].numero = codigo_temp;
                    
                    //>>>>>CODIGO<<<<<<<<<<<<<<
                    printf("|Para qual cargo o funcionário foi contratado?: \n ");
                    for(int i=0; i<5; i++){
                        printf("(->%d)\n", i+1);
                    }
                    //Nota-se que estou utilizando mesmo código_temp do numero do funcionário
                    scanf("%d", &codigo_temp);
                    
                    if(valida_cargo_funcionario(codigo_temp, ja_cadastrado)==-1){
                        printf("\n|Os cargos ainda não foram cadastrados, preencha-os antes de cadastrar funcionários\n\n");
                        break;
                    }
                    while(valida_cargo_funcionario(codigo_temp, ja_cadastrado)==1){
                        printf("\n|Código Invalido, tente novamente:");
                        scanf("%d", &codigo_temp);
                    }
                    relatorio_funcionarios[qtd_funcionarios].cargo = codigo_temp;
                    
                    qtd_funcionarios++;
                    printf("|>> Funcionário cadastrado com sucesso! <<|\n");
                }
                break;
            //============================= Opcao 3)===================================//  
            case 3:
                gerar_relatorio_rh(relatorio_funcionarios, qtd_funcionarios, cargos);
                break;
            //============================= Opcao 4)===================================//  
            case 4:
                printf("\n| Para qual cargo gostaria de visualizar o total pago? (de 1 a 5): ");
                scanf("%d", &cargo_procurado);
            
                // Verifique se o código está entre 1 e 5
                if (cargo_procurado < 1 || cargo_procurado > 5) {
                    printf("| [ERRO] Cargo invalido! Digite um valor entre 1 e 5.\n");
                    break;
                }
            
                // Percorre o vetor procurando quem pertence ao cargo escolhido
                for (int j = 0; j < qtd_funcionarios; j++) {
                    if (relatorio_funcionarios[j].cargo == cargo_procurado) {
                        
                        // Pega o salário correspondente no vetor de cargos (ajustando o índice com -1)
                        salario_cargo = cargos[cargo_procurado-1];
                        
                        total_pago += salario_cargo;
                        achou_funcionario++;
                    }
                }
                
                if (achou_funcionario > 0) {
                    printf("\n|===================================================|\n");
                    printf("| Total de funcionarios no cargo %d: %-14d |\n", cargo_procurado, achou_funcionario);
                    printf("| Total pago para este cargo: R$ %-18.2f |\n", total_pago);
                    printf("|===================================================|\n");
                } else {
                    printf("\n| Nenhum funcionario foi cadastrado neste cargo.\n");
                }
                break;
            case 5:
                printf("|Sistema Finalizado... até a próxima");
                break;
            default:
                printf("|Opcao invalida, tente novamente... \n\n");
                break;
        }
    } while(opcao != 5);

  return 0;
}