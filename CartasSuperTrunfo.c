#include <stdio.h>
int main() {
    // Estruturas das cartas (duas cidades)
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pt1, pt2;

    // Variáveis calculadas
    float dens1, dens2;
    float pibCap1, pibCap2;
    float superPoder1, superPoder2;

    printf("=== Super Trunfo - Países (Nível Mestre) ===\n\n");

    // ---------- Cadastro da primeira carta ----------
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &pop1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt1);

    // ---------- Cadastro da segunda carta ----------
    printf("\nCadastro da segunda carta:\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &pop2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt2);

    // ---------- Cálculos automáticos ----------
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    pibCap1 = (pib1 * 1000000000) / pop1;
    pibCap2 = (pib2 * 1000000000) / pop2;

    // Super poder (soma simples dos atributos principais)
    superPoder1 = pop1 + area1 + pib1 + pt1 + pibCap1 - dens1;
    superPoder2 = pop2 + area2 + pib2 + pt2 + pibCap2 - dens2;

    // ---------- Exibição das cartas ----------
    printf("\n=== CARTA 1 ===\n");
    printf("Código: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", codigo1, cidade1, pop1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: R$ %.2f\n", pt1, dens1, pibCap1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Código: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", codigo2, cidade2, pop2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: R$ %.2f\n", pt2, dens2, pibCap2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ---------- Comparações ----------
    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");

    // População
    if (pop1 > pop2)
        printf("População: %s venceu!\n", cidade1);
    else if (pop2 > pop1)
        printf("População: %s venceu!\n", cidade2);
    else
        printf("População: Empate!\n");

    // Área
    if (area1 > area2)
        printf("Área: %s venceu!\n", cidade1);
    else if (area2 > area1)
        printf("Área: %s venceu!\n", cidade2);
    else
        printf("Área: Empate!\n");

    // PIB
    if (pib1 > pib2)
        printf("PIB: %s venceu!\n", cidade1);
    else if (pib2 > pib1)
        printf("PIB: %s venceu!\n", cidade2);
    else
        printf("PIB: Empate!\n");

    // Pontos turísticos
    if (pt1 > pt2)
        printf("Pontos Turísticos: %s venceu!\n", cidade1);
    else if (pt2 > pt1)
        printf("Pontos Turísticos: %s venceu!\n", cidade2);
    else
        printf("Pontos Turísticos: Empate!\n");

    // Densidade populacional (menor vence)
    if (dens1 < dens2)
        printf("Densidade Populacional: %s venceu (menor densidade)!\n", cidade1);
    else if (dens2 < dens1)
        printf("Densidade Populacional: %s venceu (menor densidade)!\n", cidade2);
    else
        printf("Densidade Populacional: Empate!\n");

    // PIB per capita
    if (pibCap1 > pibCap2)
        printf("PIB per Capita: %s venceu!\n", cidade1);
    else if (pibCap2 > pibCap1)
        printf("PIB per Capita: %s venceu!\n", cidade2);
    else
        printf("PIB per Capita: Empate!\n");

    // Super Poder final
    if (superPoder1 > superPoder2)
        printf("\n Super Poder: %s é a carta vencedora geral!\n", cidade1);
    else if (superPoder2 > superPoder1)
        printf("\nSuper Poder: %s é a carta vencedora geral!\n", cidade2);
    else
        printf("\n Super Poder: Empate total!\n");

    printf("\n--- Fim da Simulação do Super Trunfo - Nível Mestre ---\n");

    return 0;
}
