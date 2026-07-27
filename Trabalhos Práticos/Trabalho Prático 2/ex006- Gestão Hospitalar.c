/*
Desafio 6) Um hospital está criando um sistema simples para organizar seus  
pacientes.  
Implemente um programa em C que utilize um vetor de registros (struct) com os  
seguintes campos:  
• Código do paciente (inteiro)  
• Nome (string de até 100 caracteres)  
• Idade (inteiro)  
• Diagnóstico (string de até 100 caracteres)  
O programa deve permitir as seguintes operações por meio de um menu de  
opções:  
1. Cadastrar paciente (máximo de 20 pacientes);  
2. Listar todos os pacientes cadastrados;  
3. Listar pacientes com idade acima de um valor informado;  
4. Buscar paciente por nome (parcial) — exibir todos os nomes que  
contenham a sequência de caracteres digitada (ignorando  
maiúsculas/minúsculas);  
5. Sair do sistema.  
Regras:  
• O código do paciente deve ser único.  
• O nome e o diagnóstico não podem ser vazios.  
• Se o vetor estiver cheio, exibir mensagem informando que o  
limite foi atingido.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct registro_geral{
    int codigo;
    char nome[100];
    int idade;
    char diagnostico[100];
};

void string_minuscula(char *str) {
    for (int j = 0; str[j] != '\0'; j++) {
        str[j] = tolower((unsigned char)str[j]);
    }
}

void menu(int menu){
    printf("\n\n");
    printf("|<<<<<<Menu de Opções>>>>>>|\n");
    printf("|(1) --> Cadastrar Paciente|\n");
    printf("|(2) --> Listar pacientes cadastrados|\n");
    printf("|(3) --> Listar paciente acima de idade X|\n");
    printf("|(4) --> Buscar paciente por nome |\n");
    printf("|(5) --> Sair do sistema |\n"); 
}

int valida_cod_paciente(int codigo_digitado, struct registro_geral vet[], int qtd_atual) {
    // Vou comparar o código digitado com o código de cada funcionário já salvo
    for (int j = 0; j < qtd_atual; j++) {
        if (codigo_digitado == vet[j].codigo) {
            return 1; // Encontrou um repetido!
        } else {
            return 0;
        }
    }
    return 0; 
}

void gerar_lista_pacientes(struct registro_geral formularios[], int n_pacientes) {
    
    printf("\n|======================= PACIENTES CADASTRADOS =======================|\n");
    if (n_pacientes == 0) {
        printf("|    Nenhum paciente cadastrado ate o momento          |\n");
        printf("|=================================================================|\n");
        return;
    }
    printf("| %-8s | %-25s | %-8s | %-15s |\n", "Codigo", "Nome", "Idade","Diagnostico");
    printf("|----------|------------|---------------|-----------------|\n");
    for (int j = 0; j < n_pacientes; j++) {
        char nome_formatado[25]; //Criei uma variável temporária só para deixar o nome bonito
        if (formularios[j].nome[0] != '\0') {
            strcpy(nome_formatado, formularios[j].nome);
            // Transforma APENAS a primeira letra do nome em maiúscula
            nome_formatado[0] = toupper((unsigned char)nome_formatado[0]);
        } else {
            strcpy(nome_formatado, "");
        }
        
        printf("| %-8d | %-25s | %-8d | %-15s |\n", 
               formularios[j].codigo,
               nome_formatado,
               formularios[j].idade,
               formularios[j].diagnostico);
    }
    printf("|=================================================================|\n");
}
    
void busca_paciente(char nomeEscolhido[], struct registro_geral forms[], int tamanho) {
    int achou = 0; 
    for(int i = 0; i < tamanho; i++) {
        //Procuro nome escolhido no formulario
        if(strstr(forms[i].nome, nomeEscolhido) != NULL) {
            
            if(achou == 0) {
                printf("\n|=============== RESULTADOS DA BUSCA POR: \"%s\" ================|\n", nomeEscolhido);
                printf("| %-8s | %-25s | %-8s | %-15s |\n", "Codigo", "Nome", "Idade", "Diagnostico");
                printf("|----------|---------------------------|----------|-----------------|\n");
            }
            
            achou = 1; //Pelo menos 1 nome foi encontrado...
            
            char nome_formatado[25]; //Ajeitando somente a estética do nome
            if (forms[i].nome[0] != '\0') {
                strcpy(nome_formatado, forms[i].nome);
                nome_formatado[0] = toupper((unsigned char)nome_formatado[0]);
            } else {
                strcpy(nome_formatado, "");
            }
            
            printf("| %-8d | %-25s | %-8d | %-15s |\n",
                    forms[i].codigo,
                    nome_formatado,
                    forms[i].idade,
                    forms[i].diagnostico);
        }
    }
    if(achou == 1) {
        printf("|=================================================================|\n");
    } else {
        printf("\n| Nenhum paciente com o nome \"%s\" foi encontrado. |\n", nomeEscolhido);
    }
}

int main()
{
    struct registro_geral formulario[20];
    char nome_procurado[25] ; //Var temporária para encontrar o nome buscado.
    int codigo_temp;
    int qtd_pacientes=0;
    int opcao;
    int c;
    int idade_desejada;
    
    do{
        menu(0);
        printf("|Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");
        
        while ((c = getchar()) != '\n' && c != EOF); //Limpo o buffer
        switch(opcao) {
            //============================= Opção 1) ===================================//  
            case 1:
                if(qtd_pacientes<20){
                    printf("|>>>>> Cadastrando Paciente <<<<<|\n");
                    
                    printf("|Codigo do paciente: ");
                    scanf("%d", &codigo_temp);
                    while(valida_cod_paciente(codigo_temp, formulario, qtd_pacientes)==1){
                        printf("[ERRO] Esse codigo de paciente ja existe! Tente novamente: ");
                        scanf("%d", &codigo_temp);
                    }
                    formulario[qtd_pacientes].codigo = codigo_temp;
                    printf("\n");
                    
                    
                    while ((c = getchar()) != '\n' && c != EOF); //Limpo o buffer antes de usar o fgets
                    printf("|Nome do paciente: ");
                    fgets(formulario[qtd_pacientes].nome, sizeof(formulario[qtd_pacientes].nome), stdin);
                    formulario[qtd_pacientes].nome[strcspn(formulario[qtd_pacientes].nome, "\n")] = '\0'; 
                    while(strlen(formulario[qtd_pacientes].nome) == 0){
                        printf("\n|O nome do paciente não pode estar vazio, digite novamente: ");
                        fgets(formulario[qtd_pacientes].nome, sizeof(formulario[qtd_pacientes].nome), stdin);
                        formulario[qtd_pacientes].nome[strcspn(formulario[qtd_pacientes].nome, "\n")] = '\0';
                    }
                    string_minuscula(formulario[qtd_pacientes].nome);//Deixo o nome pra minusculo para facilitar a busca.
                    printf("\n");
                    
                    printf("|Idade do paciente: ");
                    scanf("%d", &formulario[qtd_pacientes].idade);
                    while(formulario[qtd_pacientes].idade<0 || formulario[qtd_pacientes].idade>120){
                        printf("\n|Idade incoerente. Digite novamente:");
                        scanf("%d", &formulario[qtd_pacientes].idade);
                    }
                    printf("\n");
                    
                    while ((c = getchar()) != '\n' && c != EOF); //Limpo o buffer antes de usar o fgets
                    printf("|Diagnostico do paciente: ");
                    fgets(formulario[qtd_pacientes].diagnostico, sizeof(formulario[qtd_pacientes].diagnostico), stdin);
                    formulario[qtd_pacientes].diagnostico[strcspn(formulario[qtd_pacientes].diagnostico, "\n")] = '\0'; 
                    while(strlen(formulario[qtd_pacientes].diagnostico) == 0){
                        printf("\n|O diagnostico não pode estar vazio, digite novamente: ");
                        fgets(formulario[qtd_pacientes].diagnostico, sizeof(formulario[qtd_pacientes].diagnostico), stdin);
                        formulario[qtd_pacientes].diagnostico[strcspn(formulario[qtd_pacientes].diagnostico, "\n")] = '\0';
                    }
                    printf("\n");
                    
                    printf("|Paciente cadastrado com sucesso!...");
                    qtd_pacientes++;
                } else {
                    printf("\n[ERRO] |>>>>> 20/20 Pacientes já foram cadastrados... <<<<<<|\n");
                }
                
                break;
            //============================= Opção 2) ===================================//  
            case 2:
                printf("|>>>>> Pacientes Cadastrados <<<<<|\n");
                gerar_lista_pacientes(formulario, qtd_pacientes);
                
                break;
            //============================= Opção 3) ===================================//  
            case 3:
                if(qtd_pacientes==0){
                    printf("\n|Nenhum paciente cadastrado até o momento... \n");
                    break;
                }
                printf("|Pacientes acima da idade: ");
                scanf("%d", &idade_desejada);
                printf("\n");
                
                int idade_encontrada=0;
                
                for(int j=0; j<qtd_pacientes; j++){
                    if(idade_desejada < formulario[j].idade){
                        idade_encontrada +=1;
                    }
                }
                
                if(idade_encontrada>0){
                    printf("|=============== PACIENTES ACIMA DE %d ANOS ====================|\n",idade_desejada);
                    printf("| %-8s | %-15s | %-8s | %-15s |\n", "Codigo", "Nome", "Idade","Diagnostico");
                    printf("|----------|------------|---------------|-----------------|\n");
                    for (int j = 0; j < qtd_pacientes; j++) {
                        if(idade_desejada < formulario[j].idade){
                            char nome_formatado[25]; //Criei uma variável temporária só para deixar o nome bonito
                            if (formulario[j].nome[0] != '\0') {
                                strcpy(nome_formatado, formulario[j].nome);
                                // Transforma APENAS a primeira letra do nome em maiúscula
                                nome_formatado[0] = toupper((unsigned char)nome_formatado[0]);
                            } else {
                                strcpy(nome_formatado, "");
                            }
                            printf("| %-8d | %-25s | %-8d | %-15s |\n",
                                formulario[j].codigo,
                                nome_formatado,
                                formulario[j].idade,
                                formulario[j].diagnostico);
                        }
                    }
                    printf("|=================================================================|\n");
                } else {
                    printf("\n|Nenhum paciente acima da idade solicitada...|\n");
                }
                
                break;
                
            //============================= Opção 4) ===================================//  
            case 4:
                if(qtd_pacientes==0){
                    printf("\n|Nenhum paciente cadastrado até o momento... \n");
                    break;
                }
                printf("|Nome do paciente procurado: ");
                fgets(nome_procurado, sizeof(nome_procurado), stdin);
                nome_procurado[strcspn(nome_procurado, "\n")] = '\0';
                string_minuscula(nome_procurado);
                
                busca_paciente(nome_procurado, formulario, qtd_pacientes);
                
                break;
            case 5:
                printf("\n|Desligando o sistema... Ate logo!\n");
                break;
            default:
                printf("\n|Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}