#include <stdio.h>

int main() {
    // Dados da primeira carta (valores pre-definidos)
    char estado1 = 'A';
    char cod_carta1[10] = "01";
    char nome_cidade1[50] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 875.5;
    int pontos_turisticos1 = 15;
    
    // Dados da segunda carta (valores pre-definidos)
    char estado2 = 'B';
    char cod_carta2[10] = "02";
    char nome_cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.27;
    float pib2 = 420.8;
    int pontos_turisticos2 = 25;
    
    // Calculo da densidade populacional e PIB per capita
    float densidade_pop1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1 * 1000000000; // Convertendo bilhoes para reais
    
    float densidade_pop2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2 * 1000000000; // Convertendo bilhoes para reais
    
    // Exibicao das cartas
    printf("CARTAS DO SUPER TRUNFO\n");
    
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita1);
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita2);
    
    // Comparacao usando populacao como atributo escolhido
    printf("COMPARAÇÃO DE CARTAS\n");
    printf("Atributo escolhido: População\n");
    
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %d\n", nome_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", nome_cidade2, estado2, populacao2);
    
    // Logica de comparacao usando if-else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}