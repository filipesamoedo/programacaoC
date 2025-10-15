// Desafio BATALHA NAVAL. Versão novato. Criar tabuleiro e exibir. Cadastrar dois navios de 3 posições e exibir.
#include <stdio.h>

int main ()
{   
    // Declaração dos arrays de referência para linhas e colunas
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10] = {1,2,3,4,5,6,7,8,9,10};
    
    // Declaração do tabuleiro 10x10 e variáveis de controle
    int tabuleiro[10][10];
    int i, j;

    // Inicializa todas as posições do tabuleiro com 0
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; 
    }
    }

    // FUNÇÃO IMPRIMIR TABULEIRO
    int imprimir_tabuleiro() {

        printf("TABULEIRO BATALHA NAVAL\n");

        // Impressao dos números-base da coluna. 
        printf(" "); // Espaço antes dos números da coluna
        for (j = 0; j < 10; j++)
        {
        printf(" %d", coluna[j]);
        }
        printf("\n");

        // Impresssão das letras-base da linha e do tabuleiro
        for(i = 0; i < 10; i++) {
            printf("%c", linha[i]); // Imprime ABC.. Antes de cada linha do tabuleiro
            for(j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    // Imprime o tabuleiro inicial
    imprimir_tabuleiro();

    // Ship1 placement Horizontal: F1 F2 F3
    for(i = 0; i < 3; i++) {
        tabuleiro[5][i] = 3; 
    }

    // Ship2 placement Vertical: D8 E8 F8
    for(i = 3; i < 6; i++) {
        tabuleiro[i][7] = 3;
    }

    // Imprime o tabuleiro atualizado
    printf("\n 2 navios cadastrados. \n");
    imprimir_tabuleiro();

    return 0;
}
