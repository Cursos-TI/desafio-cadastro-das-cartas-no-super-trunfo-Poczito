#include <stdio.h>

int main() {

    // Declaração das variáveis da primeira carta
    char codigo1[4];
    char nome1[50];
    int populacao1, pontos_tur1;
    float area1;
    double pib1;
    
    // Leitura dos dados da primeira carta:
    printf("--- Cadastro de Cidades ---\n\n");
    printf("Insira o código da cidade: ");
    scanf("%s", &codigo1);
    printf("Insira o nome da cidade: ");
    scanf("%s", &nome1);
    printf("Insira a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Insira a área da cidade em Km²: ");
    scanf("%f", &area1);
    printf("Insira o PIB da cidade: ");
    scanf("%lf", &pib1);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_tur1);
    printf("\n--- Cadastro Finalizado ---\n\n");

    //Cálculo dos outros dados da carta 1
    float densidadepop1, pibpercapita1;
    densidadepop1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

    // Exibição dos dados da carta 1
    printf("A carta registrada é:\n\n");
    printf("-------------------------\n");
    printf("--- %s - %s ---\n", codigo1, nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("PIB: R$%.2lf\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_tur1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepop1);
    printf("PIB per capita: R$%.2f por habitante\n", pibpercapita1);
    printf("-------------------------\n");

    // Declaração das variáveis da segunda carta
    char codigo2[4];
    char nome2[50];
    int populacao2, pontos_tur2;
    float area2;
    double pib2;

    // Leitura dos dados da segunda carta:
    printf("\nAgora registre a segunda carta:\n\n");
    printf("--- Cadastro de Cidades ---\n\n");
    printf("Insira o código da cidade: ");
    scanf("%s", &codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", &nome2);
    printf("Insira a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Insira a área da cidade em Km²: ");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: ");
    scanf("%lf", &pib2);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_tur2);
    printf("\n--- Cadastro Finalizado ---\n\n");

    //Cálculo dos outros dados da carta 2
    float densidadepop2, pibpercapita2;
    densidadepop2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;

    // Exibição dos dados da carta 2
    printf("A carta registrada é:\n\n");
    printf("-------------------------\n");
    printf("--- %s - %s ---\n", codigo2, nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f Km²\n", area2);
    printf("PIB: R$%.2lf\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_tur2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepop2);
    printf("PIB per capita: R$%.2f por habitante\n", pibpercapita2);
    printf("-------------------------\n");

    //Comparação
    printf("--- Fase de Batalha ---\n\n");
    printf("Instruções: se o resultado da rodada for 1, a vitória é da primeira carta.\n");
    printf("Caso o resultado da rodada seja 0, a vitória é da segunda carta.\n\n");
    printf("População - %d habitantes x %d habitantes. Resultado = %d\n", populacao1, populacao2, populacao1 > populacao2);
    printf("Área - %.3f Km² x %.3f Km². Resultado = %d\n", area1, area2, (float) area1 > area2);
    printf("PIB - R$%.2lf x R$%.2lf. Resultado = %d\n", pib1, pib2, (float) pib1 > pib2);
    printf("Pontos Turísticos - %d x %d. Resultado = %d\n", pontos_tur1, pontos_tur2, pontos_tur1 > pontos_tur2);
    printf("Densidade Populacional - %.2f x %.2f. Resultado = %d\n", densidadepop1, densidadepop2, (float) densidadepop1 < densidadepop2);
    printf("PIB per capita - %.2f x %.2f. Resultado = %d\n", pibpercapita1, pibpercapita2, (float) pibpercapita1 > pibpercapita2);
    printf("\n--- Fim da Batalha ---\n\n");

    return 0;
}