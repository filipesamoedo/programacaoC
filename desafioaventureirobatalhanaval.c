// Desafio Aventureiro. Batalha Naval

#include <stdio.h>

// FUNÇÃO IMPRIMIR TABULEIRO
void imprimir_tabuleiro(int coluna[], char linha[], int tabuleiro[10][10]) {

        int i, j;
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

int main ()
{   
    // Declaração dos arrays para linhas e colunas, tabuleiro 10x10 e variáveis de controle
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10] = {1,2,3,4,5,6,7,8,9,10}, tabuleiro[10][10], i, j;

    // Inicializa todas as posições do tabuleiro com 0
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; 
    }
    }

    // Imprime o tabuleiro inicial chamando a função
    imprimir_tabuleiro(coluna, linha, tabuleiro);

    // CADASTRAMENTO DE NAVIOS 
    // COM TESTE DE LIMITES do Tabuleiro e Teste de SOBREPOSIÇÃO de navios
    int navios_cadastrados = 0; // CONTADOR DE NAVIOS CADASTRADOS para apresentar no final
    char linha_idx; // Recebe a letra que o usuário digita
    int coluna_n; // Recebe o número da coluna que o usuário digita
    int linha_n; // Converte a letra da linha para número (0-9)

    // SHIP1: CADASTRO HORIZONTAL com TESTES

    printf("\n Cadastro do navio 1 (Horizontal - 3 posições): \n");
    printf("\n Entre com a posição da linha: \n");
    scanf(" %c", &linha_idx);
    linha_n = linha_idx - 'A'; // Converte caractere para índice (0-9)
    // Teste de Limites da LINHA
    if (linha_n < 0 || linha_n > 9) {
        printf("\nErro: Linha inválida. Use letras de A a J.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: \n");
    scanf(" %d", &coluna_n);
    coluna_n--; // Ajusta para índice 0
    // Teste de Limites da COLUNA
    if (coluna_n < 0 || coluna_n > 8) {
        printf("\nErro: Coluna inválida. Use números de 1 a 8.\n");
        return 1; // Encerra o programa com código de erroB
    }
    // Teste de Sobreposição e Cadastro do navio horizontal
    if (tabuleiro[linha_n][coluna_n] == 0 && tabuleiro[linha_n][coluna_n+1] == 0 && tabuleiro[linha_n][coluna_n+2] == 0) {
        for(i = 0; i < 3; i++) {
            tabuleiro[linha_n][coluna_n+i] = 3; 
        }
        navios_cadastrados++;
    } else {
        printf("\nErro: Não é possível cadastrar um navio em cima do outro.\n");
    }

    // SHIP2: CADASTRO VERTICAL com TESTES

    printf("\n Cadastro do navio 2 (VERTICAL - 3 posições): \n");
    printf("\n Entre com a posição da linha: \n");
    scanf(" %c", &linha_idx);
    linha_n = linha_idx - 'A'; // 'A' vira 0, 'B' vira 1, ..., 'J' vira 9

    if (linha_n < 2 || linha_n > 9) {
        printf("\nErro: Linha inválida. Use letras de C a J.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: \n");
    scanf(" %d", &coluna_n);
    coluna_n--; // Ajusta para índice 0

    if (coluna_n < 0 || coluna_n > 9) {
        printf("\nErro: Coluna inválida. Use números de 1 a 10.\n");
        return 1; // Encerra o programa com código de erro
    }

    if (tabuleiro[linha_n][coluna_n] == 0 && tabuleiro[linha_n-1][coluna_n] == 0 && tabuleiro[linha_n-2][coluna_n] == 0) {
        for(i = 0; i < 3; i++) {
            tabuleiro[linha_n-i][coluna_n] = 3;
        }
        navios_cadastrados++;
    } else {
        printf("\nErro: Não é possível cadastrar um navio em cima do outro.\n");
    }

    // SHIP3: CADASTRO DIAGONAL com TESTES

    printf("\n Cadastro do navio 3 (Diagonal - 3 posições): \n");
    printf("\n Entre com a posição da linha: \n");
    scanf(" %c", &linha_idx);
    linha_n = linha_idx - 'A'; // Converte caractere para índice (0-9)
    if (linha_n < 2 || linha_n > 9) {
        printf("\nErro: Linha inválida. Use letras de C a J.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: \n");
    scanf(" %d", &coluna_n);
    coluna_n--; // Ajusta para índice 0
    if (coluna_n < 0 || coluna_n > 7) {
        printf("\nErro: Coluna inválida. Use números de 1 a 8.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Teste de Sobreposição e Cadastro do navio diagonal
    if (tabuleiro[linha_n][coluna_n] == 0 && tabuleiro[linha_n-1][coluna_n+1] == 0 && tabuleiro[linha_n-2][coluna_n+2] == 0) {
        for(i = 0; i < 3; i++) {
            tabuleiro[linha_n-i][coluna_n+i] = 3; 
        }
        navios_cadastrados++;
    } else {
        printf("\nErro: Não é possível cadastrar um navio em cima do outro.\n");
    }

    // Ship4: CADASTRO DIAGONAL

    printf("\n Cadastro do navio 4 (Diagonal - 3 posições): \n");
    printf("\n Entre com a posição da linha: \n");
    scanf(" %c", &linha_idx);
    linha_n = linha_idx - 'A'; // Converte caractere para índice (0-9)
    if (linha_n < 2 || linha_n > 9) {
        printf("\nErro: Linha inválida. Use letras de C a J.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: \n");
    scanf(" %d", &coluna_n);
    coluna_n--; // Ajusta para índice 0

    if (coluna_n < 0 || coluna_n > 7) {
        printf("\nErro: Coluna inválida. Use números de 1 a 8.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Teste de Sobreposição e Cadastro do navio diagonal
    if (tabuleiro[linha_n][coluna_n] == 0 && tabuleiro[linha_n-1][coluna_n+1] == 0 && tabuleiro[linha_n-2][coluna_n+2] == 0) {
        for(i = 0; i < 3; i++) {
            tabuleiro[linha_n-i][coluna_n+i] = 3; 
        }
        navios_cadastrados++;
    } else {
        printf("\nErro: Não é possível cadastrar um navio em cima do outro.\n");
    }

    // Imprime o tabuleiro atualizado
    printf("\n %d navios cadastrados. \n", navios_cadastrados);
    imprimir_tabuleiro(coluna, linha, tabuleiro);

    return 0;
}
