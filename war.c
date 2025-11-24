// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO - NÍVEL NOVATO
// ============================================================================
//        
// ============================================================================
//
// OBJETIVOS:
// Criar uma struct chamada Territorio.
// Usar um vetor estático de 5 elementos para armazenar os territórios.
// Cadastrar os dados de cada território: Nome, Cor do Exército, e Número de Tropas.
// Exibir o estado atual do mapa.
//
// ============================================================================
// Inclusão das bibliotecas padrão necessárias para entrada/saída, alocação de memória, manipulação de strings e tempo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 




// --- Constantes Globais ---
// Definem valores fixos para o número de territórios, missões e tamanho máximo de strings, facilitando a manutenção.

#define MAX_TERRITORIOS 5



// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.

struct Territorio{
    
     char NomeTerritorio[50];    
     char CorDoTerritório[50];
     int numeroDeTropas; 
 
};


// Funções
// Leitura de dados pelo terminal (fgets e scanf)
void limparBufferEntrada(){
    
    int c; 
    while((c = getchar()) != '\n' && c != EOF); 
    
};

void entradaDoUsuario(struct Territorio *t, int indice){
    printf("\n--TERRITÓRIO #%d --- \n", indice);

    printf("Digite o numero de tropas que deseja alocar:\n");
    scanf("%d", &t->numeroDeTropas);
    limparBufferEntrada();

    printf("Qual é o nome do seu território?\n");
    scanf("%49s", t->NomeTerritorio);
    limparBufferEntrada();

    printf("Qual é a cor do seu exército?\n");
    scanf("%49s", t->CorDoTerritório);
    limparBufferEntrada();

}


//Função a ser estudada melhor 
void exibirMapa(const struct Territorio territ[], int total){

    printf("\n========== MAPA FINAL ==========");
    for(int i = 0; i < total; ++i){
        printf("\nTerritório %d | Cor: %s | Nome: %s | Tropas: %d",
               i + 1, territ[i].CorDoTerritório, territ[i].NomeTerritorio, territ[i].numeroDeTropas);
    }
    printf("\n================================\n");
}


// Função principal que orquestra o fluxo do jogo, chamando as outras funções em ordem.
int main() {
    
    struct Territorio territ[MAX_TERRITORIOS];
    int totalTerritorios = 0;
    
    
    for(int i = 0; i < MAX_TERRITORIOS; ++i){
        entradaDoUsuario(&territ[i], i + 1);
    }
    
    exibirMapa(territ, MAX_TERRITORIOS);
    
    return 0;
    
}

// Impressão organizada dos dados de todos os territórios



