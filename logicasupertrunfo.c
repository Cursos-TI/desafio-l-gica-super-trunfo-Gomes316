#include <stdio.h>

int main() {
    // Dados da Carta 1 - Salvador
    char cidade1[] = "Salvador";
    unsigned long int populacao1 = 2900319;
    float area1 = 692.81;
    float pib1 = 63.56;
    int pontosTuristicos1 = 42;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2 - Maceió
    char cidade2[] = "Maceió";
    unsigned long int populacao2 = 1039791;
    float area2 = 510.655;
    float pib2 = 27.484;
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("\n=== SUPER TRUNFO - CIDADES ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", cidade1, cidade2);

    switch(opcao) {
        case 1: // População
            printf("\n[População]\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("\n[Área]\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\n[PIB]\n");
            printf("%s: R$ %.2f bilhões\n", cidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("\n[Pontos Turísticos]\n");
            printf("%s: %d pontos turísticos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (inverso)
            printf("\n[Densidade Demográfica]\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedora (menor densidade): %s\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedora (menor densidade): %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Por favor, escolha um número entre 1 e 5.\n");
    }

    return 0;
}
