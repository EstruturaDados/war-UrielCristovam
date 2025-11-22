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




// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.

struct Territorio{
        char Nome;
        char CorTerritorio;
        int NumeroTropas; 
};


// Funções
// Leitura de dados pelo terminal (fgets e scanf)
void limparBufferEntrada(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);

}

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

    struct Territorio nTe[numeroDeTerritorios];
    
    
    for(int i = 0; i < numeroTerritorio; i++){


        printf("\n--- TERRITÓRIO 1#---\n", i + 1);
        entradaDoUsuario(&numeroTerritorio[i].NumeroTropas, &numeroTerritorio[i].Nome, &numeroTerritorio[i].CorTerritorio);

       
    }

// Impressão organizada dos dados de todos os territórios

       
}

