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
    
     char NomeTerritorio;    
     char CorDoTerritório;
     int numeroDeTropas; 
 
};


// Funções
// Leitura de dados pelo terminal (fgets e scanf)
void limparBufferEntrada(){
    
    int c; 
    while((c = getchar()) != '\n' && c != EOF); 
    
};

void entradaDoUsuario(int *numeroDeTropas, char *nomeDoTerritorio, char *corDoExercito, struct Territorio *t, int indice){
    printf("\n--TERRITÓRIO #%d --- \n", indice);

    printf("Digite o numero de tropas que deseja alocar:\n");
    scanf("%d", numeroDeTropas);
    limparBufferEntrada();

    printf("Qual é o nome do seu território?\n");
    scanf("%c", nomeDoTerritorio);
    limparBufferEntrada();

    printf("Qual é a cor do seu exército?\n");
    scanf("%c", corDoExercito);
    limparBufferEntrada();

}


// Função principal que orquestra o fluxo do jogo, chamando as outras funções em ordem.
int main() {
    
    struct Territorio territ[MAX_TERRITORIOS];
    int totalTerritorios = 0;
    
    
    do {
        printf("Território  %d\n", totalTerritorios);

        printf("Digite um numero de tropas \n");
        scanf("%d", &territ -> numeroDeTropas);
        limparBufferEntrada();

        printf("Digite o nome do território \n");
        scanf("%c", &territ -> NomeTerritorio);
        limparBufferEntrada();

        printf("Digite a cor do exército \n");
        scanf("%c", &territ -> CorDoTerritório);
        limparBufferEntrada();


        totalTerritorios++; 
    } while (totalTerritorios < 5);
}

// Impressão organizada dos dados de todos os territórios

       


