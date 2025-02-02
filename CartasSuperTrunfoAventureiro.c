#include <stdio.h>

int main() {

    // Declaração das variáveis, uma para cada atributo da cidade.
    char codigo[4];
    char nome[50];
    int populacao, pontos_tur;
    float area, pib;
    
    // Cadastro de cartas com a entrada de cada dado pelo usuário:
    printf("--- Cadastro de Cidades ---\n\n");
    printf("Insira o código da cidade: ");
    scanf("%s", &codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", &nome);
    printf("Insira a população da cidade: ");
    scanf("%d", &populacao);
    printf("Insira a área da cidade em Km²: ");
    scanf("%f", &area);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_tur);
    printf("\n--- Cadastro Finalizado ---\n\n");

    //Cálculo dos novos dados
    float densidadepop, pibpercapita;
    densidadepop = (float) populacao / area;
    pibpercapita = (float) pib / populacao;

    // Exibição dos dados da cartas
    printf("A carta registrada é:\n\n");
    printf("-------------------------\n");
    printf("--- %s - %s ---\n", codigo, nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.3f Km²\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_tur);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepop);
    printf("PIB per capita: R$%.2f por habitante\n", pibpercapita);
    printf("-------------------------\n");

    return 0;
}
