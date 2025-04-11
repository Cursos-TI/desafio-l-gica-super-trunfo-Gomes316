#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1 - Salvador
    char estado1[] = "A";
    char codigo1[] = "A01";
    char cidade1[] = "Salvador";
    unsigned long int populacao1 = 2900319;
    float area1 = 692.81;
    float pib1 = 63.56;
    int pontosTuristicos1 = 42;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;

    // Declaração das variáveis para a Carta 2 - Maceió
    char estado2[] = "B";
    char codigo2[] = "B02";
    char cidade2[] = "Maceió";
    unsigned long int populacao2 = 1039791;
    float area2 = 510.655;
    float pib2 = 27.484;
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Exibição das informações cadastradas
    printf("\n=== Informações das Cartas ===\n");

    printf("\nCarta 1 - %s (%s):\n", cidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%s):\n", cidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    // Comparação fixa: População
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Cidade 1 - %s: %lu habitantes\n", cidade1, populacao1);
    printf("Cidade 2 - %s: %lu habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Cidade 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Cidade 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
