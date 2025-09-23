// Jogo de Xadrez para movimentação de Torre, Bispo e Rainha em C - Tema 4 - Exercício NOVATO

#include <stdio.h>

int main (){

    // Apresentação do Jogo

    printf("Bem-vindo ao Jogo de Xadrez!\n");
    printf("Neste jogo vamos mover a Torre, o Bispo e a Rainha.\n");
    printf("Comecemos com a Torre!\n");

    // Estrutura de Repetição para Torre [FOR] com Switch Case

    int casas;
    char direcao;
    
    printf("A Torre pode se movimentar entre 1 e 5 casas.\n");
    printf("Digite a quantidade de casas que a Torre deve se mover: (1 a 5) ");
    scanf("%d", &casas);
    if (casas < 1 || casas > 5) {
        printf("Número de casas inválido! Deve ser entre 1 e 5.\n");
        printf("Reiniciliaze o programa.\n");
        return 1; // Encerra o programa com erro
    }

    printf("Agora, vamos escolher a direção da Torre (Norte, Sul, Leste e Oeste) \n");
    printf("Digita a letra correspondente a direção da Torre (N, S, L, O): ");
    scanf(" %c", &direcao);


    switch (direcao){
        case 'n':
        case 'N':
            printf("A Torre se moveu %d casas para o Norte.\n", casas);
            for (int i = 1; i <= casas; i++) {
                printf("Norte!\n");
            }
            break; 
        case 's':
        case 'S':
            printf("A Torre se moveu %d casas para o Sul.\n", casas);
            for (int i = 1; i <= casas; i++) {
                printf("Sul!\n");
            }
            break;
        case 'l':
        case 'L':
            printf("A Torre se moveu %d casas para o Leste.\n", casas);
            for (int i = 1; i <= casas; i++) {
                printf("Leste!\n");
            }
            break;
        case 'o':
        case 'O':
            printf("A Torre se moveu %d casas para o Oeste.\n", casas);
            for (int i = 1; i <= casas; i++) {
                printf("Oeste!\n");
            }
            break;
        default:
            printf("Direção inválida! Escolha N, S, L ou O.\n");
            printf("Reiniciliaze o programa.\n");
            break;
    } 
    


    // Bispo
    // Declaração de variáveis
    int movimentos;
    int direcao_bispo;

    // Apresentação e Entrada de Dados para quantidade de casas a serem movimentadas pelo Bispo

    printf("Agora vamos mover o Bispo!\n");
    printf("O Bispo pode se movimentar entre 1 e 5 casas na diagonal.\n");
    printf("Digite a quantidade de casas que o Bispo deve se mover: (1 a 5) ");
    scanf("%d", &movimentos);

    // Teste de erro de entrada de dados

    if (movimentos < 1 || movimentos > 5) {
        printf("Número de casas inválido! Deve ser entre 1 e 5.\n");
        printf("Reiniciliaze o programa.\n");
        return 1; // Encerra o programa com erro
    }

    // Entrada de dados para direção do Bispo [WHILE] com Switch Case

    printf("Agora, vamos escolher a direção do Bispo.\n");
    printf("[1] Noroeste\n");
    printf("[2] Nordeste\n");
    printf("[3] Sudoeste\n");
    printf("[4] Sudeste\n");
    printf("Digite número correspondente a sua escolha: ");
    scanf("%d", &direcao_bispo);

    // Estrutura de Repetição para Bispo com Switch Case que teste as 4 direções possíveis e controle de erro na entrada de dados

    int i = 1; 
    switch (direcao_bispo)
    {
    case 1:
        printf("O Bispo se moveu %d casas para o Noroeste.\n", movimentos);
        while (i <= movimentos) {
            printf("Noroeste!\n");
            i++;
        }
    break;
    case 2:
        printf("O Bispo se moveu %d casas para o Nordeste.\n", movimentos);
        while (i <= movimentos) {
            printf("Nordeste!\n");
            i++;
        }
    break;
    case 3:
        printf("O Bispo se moveu %d casas para o Sudoeste.\n", movimentos);
        while (i <= movimentos) {
            printf("Sudoeste!\n");
            i++;
        }
    break; 
    case 4:
        printf("O Bispo se moveu %d casas para o Sudeste.\n", movimentos);
        while (i <= movimentos) {
            printf("Sudeste!\n");
            i++;
        }
    break;
    default:
        printf("Direção inválida! Escolha entre [1]NO, [2]NE, [3]SO ou [4]SE.\n");
        printf("Reiniciliaze o programa.\n");
        break;
    }

    // Estrutura de Repetição para Rainha com [DO WHILE] e Switch Case

    // Declaração de variáveis

    int movimentos_rainha;
    int direcao_rainha;
    int j = 2;

    printf("Agora vamos mover a Rainha!\n");
    printf("A Rainha pode se movimentar entre 1 e 8 casas.\n");
    printf("Digite a quantidade de casas que a Rainha deve se mover: (1 a 8) ");
    scanf("%d", &movimentos_rainha);

    // Teste de erro de entrada de dados

    if (movimentos_rainha < 1 || movimentos_rainha > 8) {
        printf("Número de casas inválido! Deve ser entre 1 e 8.\n");
        printf("Reiniciliaze o programa.\n");
        return 1; // Encerra o programa com erro
    }

    // Entrada de dados para direção da Rainha

    printf("Agora, vamos escolher a direção da Rainha.\n");
    printf("[1] Norte\n");
    printf("[2] Sul\n");
    printf("[3] Leste\n");
    printf("[4] Oeste\n");
    printf("[5] Noroeste\n");
    printf("[6] Nordeste\n");
    printf("[7] Sudoeste\n");
    printf("[8] Sudeste\n");
    printf("Digite número correspondente a sua escolha: ");
    scanf("%d", &direcao_rainha);

    // Teste de erro de entrada de dados

    if (direcao_rainha < 1 || direcao_rainha > 8) {
        printf("Direção inválida! Deve ser entre 1 e 8.\n");
        printf("Reiniciliaze o programa.\n");
        return 1; // Encerra o programa com erro
    }

    // Estrutura de Repetição para Rainha com [DO WHILE] e Switch Case que teste as 8 direções possíveis, e teste de erro na entrada de dados

    switch (direcao_rainha)
    {
    case 1:
        printf("A Rainha se moveu %d casas para o Norte.\n", movimentos_rainha);
        do {
            printf("Norte!\n");
            j++;
        } while (j <= movimentos_rainha);
        break;
    case 2:
        printf("A Rainha se moveu %d casas para o Sul.\n", movimentos_rainha);
        do {
            printf("Sul!\n");
            j++;
        } while (j <= movimentos_rainha);
        break;
    case 3:
        printf("A Rainha se moveu %d casas para o Leste.\n", movimentos_rainha);
        do {
            printf("Leste!\n");
            j++;
        } while (j <= movimentos_rainha);
        break;
    case 4:
        printf("A Rainha se moveu %d casas para o Oeste.\n", movimentos_rainha);
        do {    
            printf("Oeste!\n");
            j++;
        } while (j <= movimentos_rainha);
        break;
    case 5:
        printf("A Rainha se moveu %d casas para o Noroeste.\n", movimentos_rainha);
        do {
            printf("Noroeste!\n");
            j++;
        } while (j <= movimentos_rainha);
        break;
    case 6:
        printf("A Rainha se moveu %d casas para o Nordeste.\n", movimentos_rainha);
        do {
            printf("Nordeste!\n");
            j++;
        } while (j <= movimentos_rainha);
        break;
    case 7:
        printf("A Rainha se moveu %d casas para o Sudoeste.\n", movimentos_rainha);
        do {
            printf("Sudoeste!\n");
            j++;
        } while (j <= movimentos_rainha);
        break;
    case 8:
        printf("A Rainha se moveu %d casas para o Sudeste.\n", movimentos_rainha);
        do {
            printf("Sudeste!\n");
            j++;
        } while (j <= movimentos_rainha);
        break;    
    default:
        printf("Direção inválida! Escolha entre [1]N, [2]S, [3]L, [4]O, [5]NO, [6]NE, [7]SO ou [8]SE.\n");
        printf("Reiniciliaze o programa.\n");
        break;
    }

    // Encerramento do programa

    printf("Parabéns pelas escolhas e Obrigado por jogar!\n");
    printf("Reiniciliaze o programa para jogar novamente.\n");
    printf("Desenvolvido por: Filipe S Amoedo.\n");

    return 0;
}
