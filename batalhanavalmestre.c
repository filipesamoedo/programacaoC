// Desafio Nível Mestre Tema 5. Batalha Naval. Matrizes de Habilidade e Integração de Habilidades ao Tabuleiro. Sobreposição de Matrizes.
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
    printf("\n");

    // CADASTRAMENTO DE NAVIOS 
    // COM TESTE DE LIMITES do Tabuleiro e Teste de SOBREPOSIÇÃO de navios
    int navios_cadastrados = 0; // CONTADOR DE NAVIOS CADASTRADOS para apresentar no final
    char linha_idx; // Recebe a letra que o usuário digita
    int coluna_n; // Recebe o número da coluna que o usuário digita
    int linha_n; // Converte a letra da linha para número (0-9)

    // SHIP1: CADASTRO HORIZONTAL com TESTES

    printf("Cadastro do navio 1 (Horizontal - 3 posições): \n");
    printf("\n Entre com a posição da linha: ");
    scanf(" %c", &linha_idx);
    linha_n = linha_idx - 'A'; // Converte caractere para índice (0-9)
    // Teste de Limites da LINHA
    if (linha_n < 0 || linha_n > 9) {
        printf("\nErro: Linha inválida. Use letras de A a J.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: ");
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
    printf("\n Entre com a posição da linha: ");
    scanf(" %c", &linha_idx);
    linha_n = linha_idx - 'A'; // 'A' vira 0, 'B' vira 1, ..., 'J' vira 9

    if (linha_n < 2 || linha_n > 9) {
        printf("\nErro: Linha inválida. Use letras de C a J.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: ");
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
    } else { printf("\nErro: Não é possível cadastrar um navio em cima do outro.\n");}

    // SHIP3: CADASTRO DIAGONAL com TESTES

    printf("\n Cadastro do navio 3 (Diagonal - 3 posições): \n");
    printf("\n Entre com a posição da linha: ");
    scanf(" %c", &linha_idx);
    linha_n = linha_idx - 'A'; // Converte caractere para índice (0-9)
    if (linha_n < 2 || linha_n > 9) {
        printf("\nErro: Linha inválida. Use letras de C a J.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: ");
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
    } else { printf("\nErro: Não é possível cadastrar um navio em cima do outro.\n");}

    // SHIP4: CADASTRO DIAGONAL

    printf("\n Cadastro do navio 4 (Diagonal - 3 posições): \n");
    printf("\n Entre com a posição da linha: ");
    scanf(" %c", &linha_idx);
    linha_n = linha_idx - 'A'; // Converte caractere para índice (0-9)
    if (linha_n < 2 || linha_n > 9) {
        printf("\nErro: Linha inválida. Use letras de C a J.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: ");
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

    // Imprime o tabuleiro atualizado com os navios cadastrados
    printf("\nParabéns! %d navios cadastrados com sucesso. \n", navios_cadastrados);
    imprimir_tabuleiro(coluna, linha, tabuleiro);

    // Criação de 3 Matrizes 3x5 para habilidades CONE, CRUZ e OCTAEDRO
    // Ponto de origem para cada habilidade é [1][2] (linha 1, coluna 2). PONTO CENTRAL

    int cone[3][5], cruz[3][5], octaedro[3][5];

    // LEGENDA DAS HABILIDADES
    // AREA AFETADA PELA HABILIDADE: 5
    // BARCO: 3
    // ÁGUA: 0
    // NAVIO ATINGIDO: 1

    // EXPLICAÇÃO DAS HABILIDADES PARA O USUÁRIO
    printf("\nHABILIDADES DISPONÍVEIS:\n");
    printf("1. CONE: Ataca 9 posições em forma de cone\n");
    printf("2. CRUZ: Ataca 7 posições em forma de cruz\n");
    printf("3. OCTAEDRO: Ataca 5 posições em forma de octaedro\n\n");

    // INICIALIZANDO E IMPRIMINDO CONE
    printf("Habilidade CONE:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) || (i == 1 && (j == 1 || j == 2 || j == 3)) || (i == 2)){
                cone[i][j] = 6;
            } else  {
            cone[i][j] = 0;
            }
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    // INICIALIZANDO E IMPRIMINDO CRUZ
    printf("\nHabilidade CRUZ:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) || (i == 1) || (i == 2 && j == 2)){
                cruz[i][j] = 7; 
            }
            else  {cruz[i][j] = 0;}
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    // INICIALIZANDO e IMPRIMINDO OCTAEDRO
    printf("\nHabilidade OCTAEDRO:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) || (i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 2)){
                octaedro[i][j] = 8; 
            }
            else  {octaedro[i][j] = 0;}
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    // APLICANDO HABILIDADES ESPECIAIS NO TABULEIRO PRINCIPAL
    char linha_cone_letra;
    int linha_cone, coluna_cone;
    int qtdd_navios_atingidos = 0;

    // APLICANDO HABILIDADE CONE
    printf("\nEscolha o ponto central onde irá utilizar a habilidade CONE:\n");
    printf("\n Entre com a posição da linha: ");
    scanf(" %c", &linha_cone_letra);
    linha_cone = linha_cone_letra - 'A'; // Converte caractere para índice (0-9)
    // Teste de Limites da LINHA CONE
    if (linha_cone < 1 || linha_cone > 8) {
        printf("\nErro: Linha inválida. Use letras de B a I.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: ");
    scanf(" %d", &coluna_cone);
    coluna_cone--; // Ajusta para índice 0
    // Teste de Limites da COLUNA CONE
    if (coluna_cone < 2 || coluna_cone > 7) {
        printf("\nErro: Coluna inválida. Use números de 3 a 8.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Aplicando habilidade CONE no tabuleiro principal
    // Indo pro ponto inicial da matriz CONE. Separando MATRIZ CONE e MATRIZ TABULEIRO
    // Declarando variáveis para ÍNDICES das MATRIZES
    int pi_l = linha_cone - 1; // PONTO INICIAL linha do TABULEIRO. Para utilizar no índice do tabuleiro.
    int pi_c = coluna_cone -2; // PONTO INICIAL coluna do TABULEIRO. Para utilizar no índice do tabuleiro.

    // Loops Aninhandos para percorrer a matriz CONE e aplicar no TABULEIRO
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if ((tabuleiro[pi_l+i][pi_c+j] == 3) && (cone[i][j] == 6)){
                tabuleiro[pi_l+i][pi_c+j] = 1; // Navio antingido
                qtdd_navios_atingidos++;
            }
            else if ((cone[i][j] == 6) && (tabuleiro[pi_l+i][pi_c+j] == 0)){
                tabuleiro[pi_l+i][pi_c+j] = 5; // Área afetada pela habilidade
            }
        }
    }

    // APLICANDO HABILIDADE CRUZ
    char linha_cruz_letra;
    int linha_cruz, coluna_cruz;
    printf("\nAgora escolha o ponto central onde irá utilizar a habilidade CRUZ:\n");
    printf("\n Entre com a posição da linha: ");
    scanf(" %c", &linha_cruz_letra);
    linha_cruz = linha_cruz_letra - 'A'; // Converte caractere para índice (0-9)
    // Teste de Limites da LINHA CRUZ
    if (linha_cruz < 1 || linha_cruz > 8) {
        printf("\nErro: Linha inválida. Use letras de B a I.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: ");
    scanf(" %d", &coluna_cruz);
    coluna_cruz--; // Ajusta para índice 0
    // Teste de Limites da COLUNA CONE
    if (coluna_cruz < 2 || coluna_cruz > 7) {
        printf("\nErro: Coluna inválida. Use números de 3 a 8.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Aplicando habilidade CRUZ (seguro, com offset e checagem de limites)
    pi_l = linha_cruz - 1;
    pi_c = coluna_cruz - 2;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int bi = pi_l + i;
            int bj = pi_c + j;
            if (bi < 0 || bi > 9 || bj < 0 || bj > 9) continue;
            if (cruz[i][j] == 7) {
                if (tabuleiro[bi][bj] == 3) {
                    tabuleiro[bi][bj] = 1;
                    qtdd_navios_atingidos++;
                } else if (tabuleiro[bi][bj] == 0) {
                    tabuleiro[bi][bj] = 5;
            }
        }
    }
}
    // APLICANDO HABILIDADE OCTAEDRO
    char linha_octa_letra;
    int linha_octa, coluna_octa;
    printf("\nAgora escolha o ponto central onde irá utilizar a habilidade OCTAEDRO:\n");
    printf("\n Entre com a posição da linha: ");
    scanf(" %c", &linha_octa_letra);
    linha_octa = linha_octa_letra - 'A'; // Converte caractere para índice (0-9)
    // Teste de Limites da LINHA OCTAEDRO
    if (linha_octa < 1 || linha_octa > 8) {
        printf("\nErro: Linha inválida. Use letras de B a I.\n");
        return 1; // Encerra o programa com código de erro
    }
    printf("\n Entre com a posição da coluna: ");
    scanf(" %d", &coluna_octa);
    coluna_octa--; // Ajusta para índice 0
    // Teste de Limites da COLUNA CONE
    if (coluna_octa < 1 || coluna_octa > 8) {
        printf("\nErro: Coluna inválida. Use números de 2 a 9.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Aplicando habilidade OCTAEDRO no tabuleiro principal
    pi_l = linha_octa - 1;
    pi_c = coluna_octa - 2;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int bi = pi_l + i;
            int bj = pi_c + j;
            if (bi < 0 || bi > 9 || bj < 0 || bj > 9) continue;
            if (octaedro[i][j] == 8) {
                if (tabuleiro[bi][bj] == 3) {
                    tabuleiro[bi][bj] = 1;
                    qtdd_navios_atingidos++;
                } else if (tabuleiro[bi][bj] == 0) {
                    tabuleiro[bi][bj] = 5;
            }
        }
    }
}
    // Impressão do tabuleuro atualizado após uso das habilidades
    // E impressão da quantidade de navios atingidos
    printf("\nHabilidade utilizadas com sucesso! \n");
    imprimir_tabuleiro(coluna, linha, tabuleiro);
    printf("\nQuantidade de navios atingidos: %d\n", qtdd_navios_atingidos);
    printf("Legenda: Navio atingido (1), Área afetada (5), Barco (3), Água (0)\n\n");
    printf("\n");
    printf("Fim do jogo. Obrigado por jogar!\n");
    printf("Desenvolvido por Filipe S. Amoedo");

    return 0;
}
