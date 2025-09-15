#include <stdio.h>

int main(){

    // Tema 3 Nível Aventureiro - Criação de Menu Interativo
    // Declaração de variáveis da carta 1

    char pais1[50], pais2[50];
    int populacao1, pt1;
    double area1, pib1, densidade1, capita1;

    // Cadastramento da Carta 1

    printf("Vamos cadastrar os dados da Carta 1. Digite o nome do País:\n");
    scanf("%s", pais1);

    printf("Digite a População:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área:\n");
    scanf("%lf", &area1);

    printf("Digite o PIB - em trilhões -:\n");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pt1);

    // Calculo Densidade Populacional
    densidade1 = (double) populacao1 / area1;
    // Calculo PIB Per Capita
    capita1 = pib1 * 1000000000000 / populacao1;

    // Impressão de dados da Carta 1
    printf("\nCarta 1:\n");
    printf("País: %s \n", pais1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km2 \n", area1);
    printf("PIB: %.2f trilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pt1);

    // Impressão de Dados Novos - Aventureiro
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", capita1);

    // Cálculo e Impressão de Super Poder
    double super_poder1;
    super_poder1 = populacao1 + area1 + pib1 + pt1 + capita1 + (1/densidade1);

    printf("Super Poder: %.2f \n", super_poder1);

    // Declaração de variáveis da Carta 2

    int populacao2, pt2;
    double area2, pib2, densidade2, capita2;

    // Cadastramento da Carta 2

    printf("Vamos cadastrar os dados da Carta 2. Digite a letra do País:\n");
    scanf("%s", pais2);

    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área:\n");
    scanf("%lf", &area2);

    printf("Digite o PIB - em trilhões -:\n");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pt2);

    // Calculo Densidade Populacional
    densidade2 = (double) populacao2 / area2; // conversão explícita
    // Calculo PIB Per Capita
    capita2 = pib2 * 1000000000000 / populacao2;

    

    // Impressão de dados da Carta 2

    printf("\nVamos cadastrar os dados da Carta 2:\n");
    printf("País: %s \n", pais1);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.2f trilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pt2);

    // Impressão de Dados Novos: Aventureiro

    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", capita2);

    // Cálculo e Impressão de Super Poder
    double super_poder2;
    super_poder2 = populacao2 + area2 + pib2 + pt2 + capita2 + (1/densidade2);
    printf("Super Poder: %.2f \n", super_poder2);

    int atributo;
    // Criação de Menu Interativo para o Usuário escolher o atributo a ser comparado
    // e informar qual carta venceu em cada atributo
    printf("\n");
    printf("*** Menu de Comparação de Cartas ***\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("\n");
    printf("Digite sua escolha:");
    scanf("%d", &atributo); // Lê a opção escolhida, mas não faz nada com ela

    // Exibição do resultado

    printf("\n*** Resultado Final ***\n");
    printf("## %s VS %s ##\n ", pais1, pais2);
    switch (atributo)
    {
    case 1:
        printf("O Atributo usado na comparação foi: População\n");
        printf("Os valores do atributo para cada carta: %d VS %d\n", populacao1, populacao2);
        if (populacao1 > populacao2) {
            printf("A carta vencedora foi: %s\n", pais1);
        } else if (populacao2 > populacao1) {
            printf("A carta vencedora foi: %s\n", pais2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 2:
        printf("O Atributo usado na comparação foi: Área\n");
        printf("Os valores do atributo para cada carta: %.2f VS %.2f\n", area1, area2);
        if (area1 > area2) {
            printf("A carta vencedora foi: %s\n", pais1);
        } else if (area2 > area1) {
            printf("A carta vencedora foi: %s\n", pais2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 3:
        printf("O Atributo usado na comparação foi: PIB\n");
        printf("Os valores do atributo para cada carta: %.2f VS %.2f\n", pib1, pib2);
        if (pib1 > pib2) { 
            printf("A carta vencedora foi: %s\n", pais1);
        } else if (pib2 > pib1) {
            printf("A carta vencedora foi: %s\n", pais2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 4:
        printf("O Atributo usado na comparação foi: Pontos Turísticos\n");
        printf("Os valores do atributo para cada carta: %d VS %d\n", pt1, pt2);
        if (pt1 > pt2) {    
            printf("A carta vencedora foi: %s\n", pais1);
        } else if (pt2 > pt1) {
            printf("A carta vencedora foi: %s\n", pais2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 5:
        printf("O Atributo usado na comparação foi: Densidade Populacional\n");
        printf("Os valores do atributo para cada carta: %d VS %d\n", densidade1, densidade2);
        if (densidade1 < densidade2) {
            printf("A carta vencedora foi: %s\n", pais1);
        } else if (densidade2 < densidade1) {
            printf("A carta vencedora foi: %s\n", pais2);
        } else {
            printf("Empate!\n");
        }
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }


    return 0;

}
