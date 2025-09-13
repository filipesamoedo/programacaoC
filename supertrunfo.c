#include <stdio.h>

int main(){

    // Declaração de variáveis da carta 1

    char estado1;
    char codigo1[50], cidade1[50];
    int populacao1, pt1;
    double area1, pib1, densidade1, capita1;

    // Cadastramento da Carta 1

    printf("Vamos cadastrar os dados da Carta 1. Digite a letra do Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a População:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área:\n");
    scanf("%lf", &area1);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pt1);

    // Calculo Densidade Populacional
    densidade1 = (double) populacao1 / area1;
    // Calculo PIB Per Capita
    capita1 = pib1 * 1000000000 / populacao1;

    // Impressão de dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km2 \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pt1);

    // Impressão de Dados Novos - Aventureiro
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", capita1);

    // Cálculo e Impressão de Super Poder
    double super_poder1;
    super_poder1 = populacao1 + area1 + pib1 + pt1 + capita1 + (1/densidade1);

    printf("Super Poder: %.2f \n", super_poder1);

    // Declaração de variáveis da Carta 2

    char estado2;
    char codigo2[50], cidade2[50];
    int populacao2, pt2;
    double area2, pib2, densidade2, capita2;

    // Cadastramento da Carta 2

    printf("Vamos cadastrar os dados da Carta 2. Digite a letra do Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área:\n");
    scanf("%lf", &area2);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pt2);

    // Calculo Densidade Populacional
    densidade2 = (double) populacao2 / area2; // conversão explícita
    // Calculo PIB Per Capita
    capita2 = pib2 * 1000000000 / populacao2;

    

    // Impressão de dados da Carta 2

    printf("\nVamos cadastrar os dados da Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pt2);

    // Impressão de Dados Novos: Aventureiro

    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", capita2);

    // Cálculo e Impressão de Super Poder
    double super_poder2;
    super_poder2 = populacao2 + area2 + pib2 + pt2 + capita2 + (1/densidade2);
    printf("Super Poder: %.2f \n", super_poder2);

    // Estrutura de decisão composta - Tema 3 - Nível Novato

    printf("Comparação de Cartas:\n");
    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu!\n");
    } else{
        printf("População: Carta 2 venceu!\n");
    }
    if(area1 > area2){
        printf("Área: Carta 1 venceu!\n");
    } else{
        printf("Área: Carta 2 venceu!\n");
    }
    if(pib1 > pib2){
        printf("PIB: Carta 1 venceu!\n");
    } else{
        printf("PIB: Carta 2 venceu!\n");
    }
    if(pt1 > pt2){
        printf("Pontos Turísticos: Carta 1 venceu!\n");
    } else{
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    }
    if(densidade1 > densidade2){
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else{
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }
    if(capita1 > capita2){
        printf("PIB per Capita: Carta 1 venceu!\n");
    } else{
        printf("PIB per Capita: Carta 2 venceu!\n");
    }
    if(super_poder1 > super_poder2){
        printf("Super Poder: Carta 1 venceu!\n");
    } else{
        printf("Super Poder: Carta 2 venceu!\n");
    }


    return 0;

}
