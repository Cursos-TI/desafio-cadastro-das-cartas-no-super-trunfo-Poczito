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
    printf("Insira o PIB da cidade em milhões de reais: ");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_tur);
    printf("\n--- Cadastro Finalizado ---\n\n");

    // Exibição dos dados da cartas
    printf("A carta registrada é:\n\n");
    printf("Código %s\n", codigo);
    printf("%s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.3f Km²\n", area);
    printf("PIB: R$%.2f milhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_tur);

    return 0;
}
