// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO - NÍVEL NOVATO
// ============================================================================
//        
// ============================================================================
//
// OBJETIVOS:
// - Modularizar completamente o código em funções especializadas.
// - Implementar um sistema de missões para um jogador. 
// - Criar uma função para verificar se a missão foi cumprida.
// - Utilizar passagem por referência (ponteiros) para modificar dados e
//   passagem por valor/referência constante (const) para apenas ler.
// - Foco em: Design de software, modularização, const correctness, lógica de jogo.
//
// ============================================================================
// Inclusão das bibliotecas padrão necessárias para entrada/saída, alocação de memória, manipulação de strings e tempo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// --- Constantes Globais ---
// Definem valores fixos para o número de territórios, missões e tamanho máximo de strings, facilitando a manutenção.




// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.

struct Territorio{
        char Nome;
        char CorTerritorio;
        int NumeroTropas; 
};


// Declarações antecipadas de todas as funções que serão usadas no programa, organizadas por categoria.

void limparBufferEntrada(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);

}

void entradaDoUsuario(int *numeroDeTropas, char *nomeDoTerritorio, char *corDoExercito){
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


    struct Territorio numeroTerritorio[5];
    
    
    for(int i = 0; i < 5; i++){


        printf("\n--- TERRITÓRIO #---\n");
        entradaDoUsuario(&numeroTerritorio[i].NumeroTropas, &numeroTerritorio[i].Nome, &numeroTerritorio[i].CorTerritorio);

       
    }
    
        



    
}

