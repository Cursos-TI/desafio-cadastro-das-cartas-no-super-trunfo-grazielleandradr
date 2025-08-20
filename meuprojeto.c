#include <stdio.h>

typedef struct {
    char codigo[4];           // Código da carta (ex: A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main(void) {
    Carta c1, c2;

    /* Cadastro da Carta 1 */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", c1.codigo);

    printf("Populacao: ");
    scanf("%d", &c1.populacao);

    printf("Area (km2): ");
    scanf("%f", &c1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &c1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &c1.pontos_turisticos);

    /* Cadastro da Carta 2 */
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo da carta (ex: B02): ");
    scanf("%s", c2.codigo);

    printf("Populacao: ");
    scanf("%d", &c2.populacao);

    printf("Area (km2): ");
    scanf("%f", &c2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &c2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &c2.pontos_turisticos);

    /* Exibição dos dados */
    printf("\n============================\n");
    printf("        CARTA 1\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area (km2): %.2f\n", c1.area);
    printf("PIB (bilhoes): %.2f\n", c1.pib);
    printf("Pontos turisticos: %d\n", c1.pontos_turisticos);

    printf("\n        CARTA 2\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area (km2): %.2f\n", c2.area);
    printf("PIB (bilhoes): %.2f\n", c2.pib);
    printf("Pontos turisticos: %d\n", c2.pontos_turisticos);

    return 0;
}