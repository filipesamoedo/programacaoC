// Curso: Engenharia de Software - Disciplina: Estrutura de Dados em C - Desafio: War Nível Novato
// Inclusão de Bibliotecas
#include <stdio.h>
#include <string.h>

// Constantes Globais
#define MAX_TERRITORIOS 5
#define TAM_STRING 30

// Definição da Estrutura (Struct)
typedef struct {
    char nome[TAM_STRING];
    char cor[10];
    int tropas;
} Territorio;

// Declaração de Vetor de Territórios
Territorio territorios[MAX_TERRITORIOS];

// Laço para preencher os territórios
void cadastrarTerritorios() {
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n--- Cadastrando Território %d ---\n", i + 1);

        printf("Nome do Território: ");
        fgets(territorios[i].nome, TAM_STRING, stdin); // Guardar o nome do território
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0; // Remover o '\n'

        printf("Cor do Exército (ex: Azul, Verde): ");
        fgets(territorios[i].cor, 10, stdin); // Guardar a cor do exército
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = 0; // Remover o '\n'

        printf("Número de Tropas: ");
        scanf("%d", &territorios[i].tropas); // Guardar o número de tropas
        getchar(); // Limpar o '\n' deixado pelo scanf
    }
}

// Laço para exibir os territórios
void exibirTerritorios() {
    // Exibir o mapa do mundo
    printf("\n====================================\n");
    printf("   MAPA DO MUNDO - ESTADO ATUAL\n");
    printf("====================================\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTERRITÓRIO %d\n", i + 1);
        printf(" - Nome: %s\n", territorios[i].nome);
        printf(" - Dominado por: Exército %s\n", territorios[i].cor);
        printf(" - Número de Tropas: %d\n", territorios[i].tropas);
    }
}

// --- Função Principal ---
int main() {
    // Cadastrar os territórios
    cadastrarTerritorios();

    // Exibir os territórios cadastrados
    exibirTerritorios();

    return 0;
}
