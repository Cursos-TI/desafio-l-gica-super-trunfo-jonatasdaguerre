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

    // Menu de seleção de atributos
    int atributo1 = 0, atributo2 = 0;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // Atributo 1
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População \n 2 - Área \n 3 - PIB \n 4 - Pontos Turísticos \n 5 - Densidade Demográfica \n> ");
    scanf("%d", &atributo1);

    // Atributo 2 (dinâmico)
    printf("\n Escolha o segundo atributo (diferente do primeiro): \n");
    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
    printf("> ");
    scanf("%d", &atributo2);

    // Captura valores do atributo 1
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosturisticos1; valor1_c2 = pontosturisticos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Captura valores do atributo 2
    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosturisticos1; valor2_c2 = pontosturisticos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Mostrar valores
    printf("\n--- Comparação ---\n");
    printf("Atributo 1: %.2f x %.2f\n", valor1_c1, valor1_c2);
    printf("Atributo 2: %.2f x %.2f\n", valor2_c1, valor2_c2);

    // Comparar (lembrando que Densidade é invertida)
    float soma1 = (atributo1 == 5 ? (1 / valor1_c1) : valor1_c1) + 
                  (atributo2 == 5 ? (1 / valor2_c1) : valor2_c1);
    float soma2 = (atributo1 == 5 ? (1 / valor1_c2) : valor1_c2) + 
                  (atributo2 == 5 ? (1 / valor2_c2) : valor2_c2);

    printf("Soma final:\n %s : %.0f \n %s : %.0f \n", cidade1, soma1, cidade2, soma2);

    // Resultado final
    printf("\n Resultado: ");
    if (soma1 > soma2)
        printf("%s venceu!\n", cidade1);
    else if (soma2 > soma1)
        printf("%s venceu!\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}