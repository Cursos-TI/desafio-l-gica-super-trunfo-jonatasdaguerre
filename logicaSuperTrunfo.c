#include <stdio.h>

int main() {
    //Declaração das variáveis da Carta 1
    char estado1[5];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1; 
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    //Declaração das variáveis da Carta 2
    char estado2[5];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2; 
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // Leitura dos dados da Carta 1
    printf("\n Digite os dados da Carta 1: \n");
    printf("\n Estado: \n");
    scanf("%4s", &estado1);
    printf("Código: \n");
    scanf("%3s", &codigo1);
    printf("Nome da cidade: \n");
    scanf("%49s", &cidade1);
    printf("População: \n");
    scanf("%lu", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    // Leitura dos dados da Carta 2
    printf("\n Digite os dados da Carta 2: \n");
    printf("\n Estado: \n");
    scanf("%4s", &estado2);
    printf("Código: \n");
    scanf("%3s", &codigo2);
    printf("Nome da cidade: \n");
    scanf("%49s", &cidade2);
    printf("População: \n");
    scanf("%lu", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidade2);

    // Exibir informações das cartas
    printf("\n - Carta 1: ");
    printf("\n - Estado: %s", estado1);
    printf("\n - Código: %s", codigo1);
    printf("\n - Cidade: %s", cidade1);
    printf("\n - População: %lu", populacao1);
    printf("\n - Área: %.0f km²", area1);
    printf("\n - PIB: %.0f bilhões de reais", pib1);
    printf("\n - Número de pontos turísticos: %d", pontosturisticos1);
    printf("\n - Densidade Populacional: %.2f hab/km²", densidade1);
    printf("\n - PIB per Capita: %.2f reais", pibpercapita1);
    printf("\n - Super Poder: %.2f\n", superpoder1);

    printf("\n - Carta 2: ");
    printf("\n - Estado: %s", estado2);
    printf("\n - Código: %s", codigo2);
    printf("\n - Cidade: %s", cidade2);
    printf("\n - População: %lu", populacao2);
    printf("\n - Área: %.0f km²", area2);
    printf("\n - PIB: %.0f bilhões de reais", pib2);
    printf("\n - Número de pontos turísticos: %d", pontosturisticos2);
    printf("\n - Densidade Populacional: %.2f hab/km²", densidade2);
    printf("\n - PIB per Capita: %.2f reais", pibpercapita2);
    printf("\n - Super Poder: %.2f\n", superpoder2);

    // Menu interativo
    int opcao;
    printf("\n===== Menu de Comparação =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n=== Comparação ===\n");

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosturisticos1);
            printf("%s: %d pontos\n", cidade2, pontosturisticos2);

            if (pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha entre 1 e 5.\n");
            break;
    }

    return 0;
}