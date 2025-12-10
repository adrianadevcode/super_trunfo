/*
    Programa: Super Trunfo - Batalha de Cartas (Nível Mestre)
    Objetivo: ler os dados de DUAS cartas, calcular atributos
              derivados (densidade populacional, PIB per capita,
              Super Poder) e comparar as cartas atributo a atributo.

    Níveis anteriores:
    - Nível Novato: leitura e exibição das cartas.
    - Nível Intermediário: cálculo de densidade populacional e PIB per capita.
    - Nível Mestre: cálculo do Super Poder e comparação entre cartas.

    Observação:
    - População agora é unsigned long int para permitir valores maiores.
*/

#include <stdio.h>

int main() {
    /* ======================================================
       1. DECLARAÇÃO DAS VARIÁVEIS BÁSICAS
       ====================================================== */

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;                // em bilhões de reais
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* ======================================================
       2. VARIÁVEIS DERIVADAS
       ====================================================== */

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float inversoDensidade1, inversoDensidade2;
    float superPoder1, superPoder2;

    /* ======================================================
       3. LEITURA DOS DADOS - CARTA 1
       ====================================================== */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a populacao: ");
    scanf("%lu", &populacao1);  // unsigned long int

    printf("Informe a area (em km2): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ======================================================
       4. LEITURA DOS DADOS - CARTA 2
       ====================================================== */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a populacao: ");
    scanf("%lu", &populacao2);

    printf("Informe a area (em km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ======================================================
       5. CÁLCULO DOS ATRIBUTOS DERIVADOS
       ====================================================== */

    // Densidade populacional = habitantes / area
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // PIB per capita = PIB / populacao
    // OBS: PIB está em bilhões, então o PIB per capita
    // também ficará em bilhões por habitante, mas isso
    // não afeta as comparações (escala é a mesma).
    pibPerCapita1 = pib1 / (float)populacao1;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Inverso da densidade populacional
    inversoDensidade1 = 1.0f / densidade1;
    inversoDensidade2 = 1.0f / densidade2;

    // Super Poder = soma de todos os atributos numéricos
    superPoder1 = (float)populacao1
                + area1
                + pib1
                + (float)pontosTuristicos1
                + pibPerCapita1
                + inversoDensidade1;

    superPoder2 = (float)populacao2
                + area2
                + pib2
                + (float)pontosTuristicos2
                + pibPerCapita2
                + inversoDensidade2;

    /* ======================================================
       6. EXIBIÇÃO DOS DADOS DAS CARTAS (NÍVEIS ANTERIORES)
       ====================================================== */

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.8f (bilhoes por habitante)\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.8f (bilhoes por habitante)\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    /* ======================================================
       7. COMPARAÇÃO ENTRE AS CARTAS
       Regra:
       - Densidade populacional: vence o MENOR valor.
       - Demais atributos (incluindo Super Poder): vence o MAIOR valor.
       Para cada atributo, guardamos:
       1 = Carta 1 venceu
       0 = Carta 2 venceu
       ====================================================== */

    int resultadoPopulacao     = (populacao1   > populacao2);
    int resultadoArea          = (area1        > area2);
    int resultadoPib           = (pib1         > pib2);
    int resultadoPontos        = (pontosTuristicos1 > pontosTuristicos2);
    int resultadoDensidade     = (densidade1   < densidade2); // menor vence
    int resultadoPibPerCapita  = (pibPerCapita1 > pibPerCapita2);
    int resultadoSuperPoder    = (superPoder1  > superPoder2);

    printf("\n=== Comparacao de Cartas ===\n\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           resultadoPopulacao ? 1 : 2, resultadoPopulacao);

    printf("Area: Carta %d venceu (%d)\n",
           resultadoArea ? 1 : 2, resultadoArea);

    printf("PIB: Carta %d venceu (%d)\n",
           resultadoPib ? 1 : 2, resultadoPib);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           resultadoPontos ? 1 : 2, resultadoPontos);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           resultadoDensidade ? 1 : 2, resultadoDensidade);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           resultadoPibPerCapita ? 1 : 2, resultadoPibPerCapita);

    printf("Super Poder: Carta %d venceu (%d)\n",
           resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);

    /* ======================================================
       8. FIM DO PROGRAMA
       ====================================================== */

    return 0;
}

