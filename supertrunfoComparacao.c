#include <stdio.h>

int main(){

    // Declaração de variáveis da carta 1

    char pais1[50], pais2[50];
    int populacao1, pt1;
    double area1, pib1, densidade1, capita1;

    // Apresentação do Jogo Super Trunfo
    printf("Bem-vindo ao jogo Super Trunfo - Versão Países\n");
    printf("Você irá cadastrar duas cartas com dados de países e depois escolher dois atributos para comparar.\n");
    printf("O programa irá informar qual país venceu em cada atributo escolhido e também a soma dos atributos.\n");
    printf("Vamos começar!\n");

    // Cadastramento da Carta 1

    printf("\nCadastro da Carta 1\n");
    printf("Digite o nome do País:");
    scanf("%s", pais1);

    printf("Digite a População:");
    scanf("%d", &populacao1);

    printf("Digite a Área:");
    scanf("%lf", &area1);

    printf("Digite o PIB - em trilhões -:");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d", &pt1);

    // Calculo Densidade Populacional
    densidade1 = (double) populacao1 / area1;
    // Calculo PIB Per Capita
    capita1 = pib1 * 1000000000000 / populacao1;

    // Impressão de dados da Carta 1

    printf("\n*** CARTA 1 CADASTRADA ***\n");
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

    printf("\nCadastro da Carta 2\n");
    printf("Digite o nome do País:");
    scanf("%s", pais2);

    printf("Digite a População:");
    scanf("%d", &populacao2);

    printf("Digite a Área:");
    scanf("%lf", &area2);

    printf("Digite o PIB - em trilhões -:");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d", &pt2);

    // Calculo Densidade Populacional

    densidade2 = (double) populacao2 / area2; // conversão explícita

    // Calculo PIB Per Capita

    capita2 = pib2 * 1000000000000 / populacao2;

    // Impressão de dados da Carta 2

    printf("\n*** CARTA 2 CADASTRADA ***\n");
    printf("País: %s \n", pais2);
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

    int atributo1, atributo2;

    // Criação de Menu Interativo para o Usuário escolher DOIS ATRIBUTOS A SEREM COMPARADOS
    // e então informar qual carta venceu ou se ocorreu empate.

    printf("\n");
    printf("*** SELEÇÃO DOS ATRIBUTOS A SEREM COMPARADOS ***\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("\n");
    printf("Escolha o PRIMEIRO atributo:");
    scanf("%d", &atributo1);    // Lê a opção escolhida, mas não faz nada com ela

    // Criação de Menu Dinâmico. O usuário não pode escolher o mesmo atributo duas vezes.
    // Então o segundo MENU só mostrará as opções que não foram escolhidas no primeiro MENU.

    switch (atributo1)
    {
    case 1:
        printf("\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("\n");
        printf("Escolha o SEGUNDO atributo (deve ser diferente do primeiro):");
        scanf("%d", &atributo2);
    break;
    case 2:
        printf("\n");
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("\n");
        printf("Escolha o segundo atributo:");
        scanf("%d", &atributo2);
    break;
    case 3:
        printf("\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("\n");
        printf("Escolha o segundo atributo:");
        scanf("%d", &atributo2);
    break;
    case 4:
        printf("\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Populacional\n");
        printf("\n");
        printf("Escolha o segundo atributo:");
        scanf("%d", &atributo2);
    break;
    case 5:
        printf("\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("\n");
        printf("Escolha o segundo atributo:");
        scanf("%d", &atributo2);
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    // Verificação se o usuário escolheu o SEGUNDO ATRIBUTO corretamente

    if (atributo2 < 1 || atributo2 > 5) {
        printf("Atenção: Você escolheu uma opção inválida para o segundo atributo. Por favor, escolha uma opção válida.\n");
        return 1; // Encerra o programa com código de erro
    }
    // Verificação se o usuário escolheu o mesmo atributo duas vezes

    if (atributo1 == atributo2) {
        printf("Atenção: Você escolheu o mesmo atributo duas vezes. Por favor, escolha atributos diferentes.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Exibição do resultado

    printf("\n*** SUPER TRUNFO versão PAÍSES ***\n");
    printf("## %s VS %s ##\n ", pais1, pais2);

    // SWITCH PARA O PRIMEIRO ATRIBUTO ESCOLHIDO

    switch (atributo1)
    {
    case 1:
        printf("\n1º Atributo: População\n");
        if (populacao1 > populacao2) {
            printf("%s VENCEU com a População de: %d.\n", pais1, populacao1);
        } else if (populacao2 > populacao1) {
            printf("%s VENCEU com a População de: %d.\n", pais2, populacao2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 2:
        printf("\n1º Atributo: Área\n");
        if (area1 > area2) {
            printf("%s VENCEU com a Área de: %.2f km2.\n", pais1, area1);
        } else if (area2 > area1) {
            printf("%s VENCEU com a Área de: %.2f km2.\n", pais2, area2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 3:
        printf("\n1º Atributo: PIB\n");
        if (pib1 > pib2) { 
            printf("%s VENCEU com o PIB de: %.2f trilhões de reais.\n", pais1, pib1);
        } else if (pib2 > pib1) {
            printf("%s VENCEU com o PIB de: %.2f trilhões de reais.\n", pais2, pib2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 4:
        printf("\n1º Atributo: Pontos Turísticos\n");
        if (pt1 > pt2) {    
            printf("%s VENCEU com Pontos Turísticos: %d.\n", pais1, pt1);
        } else if (pt2 > pt1) {
            printf("%s VENCEU com Pontos Turísticos: %d.\n", pais2, pt2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 5:
        printf("\n1º Atributo: Densidade Populacional\n");
        if (densidade1 < densidade2) {
            printf("%s VENCEU com a Desidade Populacional de: %.2f hab/km2.\n", pais1, densidade1);
        } else if (densidade2 < densidade1) {
            printf("%s VENCEU com a Desidade Populacional de: %.2f hab/km2.\n", pais2, densidade2);
        } else {
            printf("Empate!\n");
        }
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    // SWITCH PARA O SEGUNDO ATRIBUTO ESCOLHIDO

    switch (atributo2)
    {
    case 1:
        printf("\n2º Atributo: População\n");
        if (populacao1 > populacao2) {
            printf("%s VENCEU com a População de: %d.\n", pais1, populacao1);
        } else if (populacao2 > populacao1) {
            printf("%s VENCEU com a População de: %d.\n", pais2, populacao2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 2:
        printf("\n2º Atributo: Área\n");
        if (area1 > area2) {
            printf("%s VENCEU com a Área de: %.2f km2.\n", pais1, area1);
        } else if (area2 > area1) {
            printf("%s VENCEU com a Área de: %.2f km2.\n", pais2, area2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 3:
        printf("\n2º Atributo: PIB\n");
        if (pib1 > pib2) { 
            printf("%s VENCEU com o PIB de: %.2f trilhões de reais.\n", pais1, pib1);
        } else if (pib2 > pib1) {
            printf("%s VENCEU com o PIB de: %.2f trilhões de reais.\n", pais2, pib2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 4:
        printf("\n2º Atributo: Pontos Turísticos\n");
        if (pt1 > pt2) {    
            printf("%s VENCEU com Pontos Turísticos: %d.\n", pais1, pt1);
        } else if (pt2 > pt1) {
            printf("%s VENCEU com Pontos Turísticos: %d.\n", pais2, pt2);
        } else {
            printf("Empate!\n");
        }
    break;
    case 5:
        printf("\n2º Atributo: Densidade Populacional\n");
        if (densidade1 < densidade2) {
            printf("%s VENCEU com a Densidade Populacional de: %.2f hab/km2.\n", pais1, densidade1);
        } else if (densidade2 < densidade1) {
            printf("%s VENCEU com a Densidade Populacional de: %.2f hab/km2.\n", pais2, densidade2);
        } else {
            printf("Empate!\n");
        }
    break;
    default:
        printf("Opção inválida!\n");
    break;
    
    }

    // SOMA DOS DOIS ATRIBUTOS PARA DEFINIÇÃO DO VENCEDOR FINAL.

    float soma1, soma2;

    switch (atributo1)
    {
    case 1:
        soma1 = populacao1;
        soma2 = populacao2;
    break;
    case 2:
        soma1 = area1;
        soma2 = area2;
    break;
    case 3:
        soma1 = pib1;
        soma2 = pib2;
    break;
    case 4:
        soma1 = pt1;
        soma2 = pt2;
    break;
    case 5:
        soma1 = densidade1;
        soma2 = densidade2;
    break;
    default:
    break;
    }

    switch (atributo2)
    {
    case 1:
        soma1 += populacao1;
        soma2 += populacao2;
    break;
    case 2:
        soma1 += area1;
        soma2 += area2;
    break;
    case 3:
        soma1 += pib1;
        soma2 += pib2;
    break;
    case 4:
        soma1 += pt1;
        soma2 += pt2;
    break;
    case 5:
        soma1 += densidade1;
        soma2 += densidade2;
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    // Resultado Final com Tratamento de Empates caso as somas sejam iguais.
    // Exibição Clara do Resultado
    // Mostrar os valores de cada atributo para cada carta

    printf("\nCOMPARATIVO DOS ATRIBUTOS DE CADA CARTA\n");

    // Switch para mostrar os valores do atributo 1 para cada carta

    switch (atributo1)
    {  
    case 1:
        printf("População: %s %d VS %d %s\n", pais1, populacao1, populacao2, pais2);
    break;
    case 2:
        printf("Área: %s %.2f VS %.2f %s\n", pais1, area1, area2, pais2);
    break;
    case 3:
        printf("PIB: %s %.2f VS %.2f %s\n", pais1, pib1, pib2, pais2);
    break;
    case 4:
        printf("Pontos Turísticos: %s %d VS %d %s\n", pais1, pt1, pt2, pais2);
    break;
    case 5:
        printf("Densidade Populacional: %s %.2f VS %.2f %s\n", pais1, densidade1, densidade2, pais2);
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    // Switch para mostrar os valores do atributo 2 para cada carta

    switch (atributo2)
    {  
    case 1:
        printf("População: %s %d VS %d %s\n", pais1, populacao1, populacao2, pais2);
    break;
    case 2:
        printf("Área: %s %.2f VS %.2f %s\n", pais1, area1, area2, pais2);
    break;
    case 3:
        printf("PIB: %s %.2f VS %.2f %s\n", pais1, pib1, pib2, pais2);
    break;
    case 4:
        printf("Pontos Turísticos: %s %d VS %d %s\n", pais1, pt1, pt2, pais2);
    break;
    case 5:
        printf("Densidade Populacional: %s %.2f VS %.2f %s\n", pais1, densidade1, densidade2, pais2);
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    // Mostrar a soma dos atributos para cada carta.
 
    printf("\nCOMPARATIVO DA SOMA DOS ATRIBUTOS\n");
    printf("%s %.2f VS %.2f %s  \n", pais1, soma1, soma2, pais2);

    // Mostrar qual carta venceu ou se houve empate.

    if (soma1 > soma2) {
        printf("\nO país vencedor foi: %s\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nO país vencedor foi: %s\n", pais2);
    } else {
        printf("\nEmpate! Ambos têm soma %.2f \n", soma1);
    }

    // Mensagem de encerramento do programa

    printf("\nObrigado por jogar Super Trunfo - Versão Países\n");
    printf("Até a próxima!\n");
    printf("Desenvolvido por: Filipe S Amoedo.\n");

    return 0;

}
