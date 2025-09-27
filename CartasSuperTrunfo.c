#include <stdio.h>
#include <string.h>

struct Cidade {
    char codigo[4];      // Ex: "A01"
    long populacao;      // População (long para números grandes)
    double area;         // Área em km² (double para precisão)
    long pib;            // PIB (long para valores monetários grandes)
    int pontos_turisticos; // Número de pontos turísticos
};

int main() {
    struct Cidade cartas[8][4]; // 8 estados (A-H), 4 cidades cada

    // Cadastro das cartas
    printf("Bem-vindo ao Cadastro de Cartas - Super Trunfo Países (Nivel Novato)\n");
    printf("Cadastre os dados das 32 cidades (8 estados A-H, 4 cidades cada).\n\n");

    for (int i = 0; i < 8; i++) {
        char estado = 'A' + i;
        for (int j = 0; j < 4; j++) {
            printf("=== Cadastro da Cidade %c%02d ===\n", estado, j + 1);
            
            // Gera o código automaticamente
            sprintf(cartas[i][j].codigo, "%c%02d", estado, j + 1);
            
            printf("Código da carta: %s\n", cartas[i][j].codigo);
            
            printf("População: ");
            scanf("%ld", &cartas[i][j].populacao);
            
            printf("Área (km²): ");
            scanf("%lf", &cartas[i][j].area);
            
            printf("PIB: ");
            scanf("%ld", &cartas[i][j].pib);
            
            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[i][j].pontos_turisticos);
            
            printf("\n"); // Linha em branco para separar cadastros
        }
        printf("Cadastro do estado %c concluído!\n\n", estado);
    }

    // Exibição dos dados cadastrados
    printf("\n=== EXIBIÇÃO DAS CARTAS CADASTRADAS ===\n");
    for (int i = 0; i < 8; i++) {
        char estado = 'A' + i;
        printf("\n--- Estado %c ---\n", estado);
        for (int j = 0; j < 4; j++) {
            printf("\nCidade %s:\n", cartas[i][j].codigo);
            printf("População: %ld habitantes\n", cartas[i][j].populacao);
            printf("Área: %.2lf km²\n", cartas[i][j].area);
            printf("PIB: %ld\n", cartas[i][j].pib);
            printf("Número de pontos turísticos: %d\n", cartas[i][j].pontos_turisticos);
        }
    }

    printf("\nCadastro e exibição concluídos! Fim do Nível Novato.\n");
    return 0;
}

