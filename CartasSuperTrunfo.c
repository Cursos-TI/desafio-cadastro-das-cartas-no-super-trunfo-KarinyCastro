#include <stdio.h>

int main() {
    printf("\nDesafio Super Trunfo Novato\n");

    // Carta 1
    char estado1[3];
    char codigo1[7];
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapta1;

    // Carta 2
    char estado2[3];
    char codigo2[7];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapta2;

    // Código carta 1
    printf("Digite o estado da carta 1(A-H):\n");
    scanf("%2s", estado1);
    printf("Digite o codigo da carta 1(ex: A01):\n");
    scanf("%6s", codigo1);
    printf("Digite o nome da cidade da carta 1:\n");
    scanf("%49s", cidade1);
    printf("Digite a populacao da carta 1(em mil):\n");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade da carta 1(em km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1(em milhoes de reais):\n");
    scanf("%f", &PIB1);
    printf("Digite o numero de ponto turisticos da carta 1:\n");
    scanf("%d", &pontosturisticos1);

    // Calculando densidade populacional e PIB per capita para a carta 1
    densidadepopulacional1 = populacao1 / area1; // Densidade populacional = População / Área
    pibpercapta1 = PIB1 / populacao1; // PIB per capita = PIB / População

    printf("Densidade Populacional da carta 1: %.2f habitantes por km²\n", densidadepopulacional1);
    printf("PIB per capita da carta 1: %.2f milhões de reais\n", pibpercapta1);

    // Código carta 2
    printf("Digite o estado da carta 2(A-H):\n");
    scanf("%2s", estado2);
    printf("Digite o codigo da carta 2(ex: A01):\n");
    scanf("%6s", codigo2);
    printf("Digite o nome da cidade da carta 2:\n");
    scanf("%49s", cidade2);
    printf("Digite a populacao da cidade da carta 2(em mil):\n");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade da carta 2(em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2(em milhoes de reais):\n");
    scanf("%f", &PIB2);
    printf("Digite o numero de pontos turisticos da carta 2:\n");
    scanf("%d", &pontosturisticos2);

    // Calculando densidade populacional e PIB per capita para a carta 2
    densidadepopulacional2 = populacao2 / area2; // Densidade populacional = População / Área
    pibpercapta2 = PIB2 / populacao2; // PIB per capita = PIB / População

    printf("Densidade Populacional da carta 2: %.2f habitantes por km²\n", densidadepopulacional2);
    printf("PIB per capita da carta 2: %.2f milhões de reais\n", pibpercapta2);

    // Exibição de carta 1
    printf("\nInformacoes da carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", PIB1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    // Exibição carta 2
    printf("\nInformacoes da carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", PIB2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}