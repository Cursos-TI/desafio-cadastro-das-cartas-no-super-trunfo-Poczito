#include <stdio.h>

int main() {

    /*

    // Declaração das variáveis da primeira carta
    char estado1[3];
    char codigo1[3];
    char nome1[50];
    int populacao1, pontos_tur1;
    float area1;
    double pib1;
    
    // Leitura dos dados da primeira carta:
    printf("--- Cadastro de Cidades ---\n\n");
    printf("Insira o estado da cidade: ");
    scanf("%s", &estado1);
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
    printf("--- %s%s - %s ---\n", estado1, codigo1, nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("PIB: R$%.2lf\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_tur1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepop1);
    printf("PIB per capita: R$%.2f por habitante\n", pibpercapita1);
    printf("-------------------------\n");

    // Declaração das variáveis da segunda carta
    char estado2[3];
    char codigo2[3];
    char nome2[50];
    int populacao2, pontos_tur2;
    float area2;
    double pib2;

    // Leitura dos dados da segunda carta:
    printf("\nAgora registre a segunda carta:\n\n");
    printf("--- Cadastro de Cidades ---\n\n");
    printf("Insira o estado da cidade: ");
    scanf("%s", &estado2);
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
    printf("--- %s%s - %s ---\n", estado2, codigo2, nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f Km²\n", area2);
    printf("PIB: R$%.2lf\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_tur2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepop2);
    printf("PIB per capita: R$%.2f por habitante\n", pibpercapita2);
    printf("-------------------------\n");

    */

    //Inserção automática dos dados (apagar depois)

    char estado1[3] = "RJ";
    char codigo1[3] = "02";
    char nome1[50] = "Caxias";
    int populacao1 = 1, pontos_tur1 = 1;
    float area1 = 1;
    double pib1 = 1;

    char estado2[3] = "BA";
    char codigo2[3] = "01";
    char nome2[50] = "Retirolândia";
    int populacao2 = 2, pontos_tur2 = 2;
    float area2 = 40;
    double pib2 = 40;

    //Cálculo dos outros dados da carta 1
    float densidadepop1, pibpercapita1;
    densidadepop1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;
    
    //Cálculo dos outros dados da carta 2
    float densidadepop2, pibpercapita2;
    densidadepop2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;


    //Menu Principal

    int escolhaMenu;

    printf("\n--- Menu Principal ---\n\n");
    printf("Com qual propriedade deseja batalhar?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    scanf("%d", &escolhaMenu);

    //Comparação
    printf("\n--- Fase de Batalha ---\n\n");

    switch (escolhaMenu){
        case 1:
            if (populacao1 == populacao2){
                printf("População: %s e %s possuem %d habitantes ambas. Empate!\n", nome1, nome2, populacao1);
            } else if (populacao1 > populacao2){
                printf("População: %s - %d habitantes x %s - %d habitantes.\nVitória da cidade %s!\n", nome1, populacao1, nome2, populacao2, nome1);
            } else {
                printf("População: %s - %d habitantes x %s - %d habitantes.\nVitória da cidade %s!\n", nome1, populacao1, nome2, populacao2, nome2);
            }
            break;

        case 2:
            if (area1 == area2){
                printf("Área: %s e %s possuem %.2f Km² ambas. Empate!\n", nome1, nome2, area1);
            } else if (area1 > area2){
                printf("Área: %s - %.2f Km² x %s - %.2f Km².\nVitória da cidade %s!\n", nome1, area1, nome2, area2, nome1);
            } else {
                printf("Área: %s - %.2f Km² x %s - %.2f Km².\nVitória da cidade %s!\n", nome1, area1, nome2, area2, nome2);
            }
            break;

        case 3:
            if (pib1 == pib2){
                printf("PIB: %s e %s possuem PIB de R$%.2f ambas. Empate!\n", nome1, nome2, pib1);
            } else if (pib1 > pib2){
                printf("PIB: %s - R$%.2f x %s - R$%.2f.\nVitória da cidade %s!\n", nome1, pib1, nome2, pib2, nome1);
            } else {
                printf("PIB: %s - R$%.2f x %s - R$%.2f.\nVitória da cidade %s!\n", nome1, pib1, nome2, pib2, nome2);
            }
            break;

        case 4:
            if (pontos_tur1 == pontos_tur2){
                printf("Pontos Turísticos: %s e %s possuem %d pontos ambas. Empate!\n", nome1, nome2, pontos_tur1);
            } else if (pontos_tur1 > pontos_tur2){
                printf("Pontos Turísticos: %s - %d pontos x %s - %d pontos.\nVitória da cidade %s!\n", nome1, pontos_tur1, nome2, pontos_tur2, nome1);
            } else {
                printf("Pontos Turísticos: %s - %d pontos x %s - %d pontos.\nVitória da cidade %s!\n", nome1, pontos_tur1, nome2, pontos_tur2, nome2);
            }
            break;
        
        case 5:
            if (densidadepop1 == densidadepop2){
                printf("Densidade populacional: %s e %s possuem %.2f ambas. Empate!\n", nome1, nome2, densidadepop1);
            } else if (densidadepop1 < densidadepop2){
                printf("Densidade Populacional: %s - %.2f x %s - %.2f.\nVitória da cidade %s!\n", nome1, densidadepop1, nome2, densidadepop2, nome1);
            } else {
                printf("Densidade Populacional: %s - %.2f x %s - %.2f.\nVitória da cidade %s!\n", nome1, densidadepop1, nome2, densidadepop2, nome2);
            }
            break;

        case 6:
            if (pibpercapita1 == pibpercapita2){
                printf("PIB per capita: %s e %s possuem %.2f ambas. Empate!\n", nome1, nome2, pibpercapita1);
            } else if (pibpercapita1 > pibpercapita2){
                printf("PIB per capita: %s - %.2f x %s - %.2f.\nVitória da cidade %s!\n", nome1, pibpercapita1, nome2, pibpercapita2, nome1);
            } else {
                printf("PIB per capita: %s - %.2f x %s - %.2f.\nVitória da cidade %s!\n", nome1, pibpercapita1, nome2, pibpercapita2, nome2);
            }
            break;
            
        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}