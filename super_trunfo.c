/*
    Programa: Super Trunfo - Cadastro de Cartas (Nível Novato)
    Objetivo: ler do usuário os dados de DUAS cartas de cidades
              e exibir essas informações de forma organizada.

    Regras do desafio:
    - Não usar estruturas de repetição (for, while).
    - Não usar estruturas de decisão (if, else).
    - Apenas leitura, armazenamento e exibição dos dados.
*/

#include <stdio.h>  // biblioteca padrão de entrada e saída

int main() {
    /* ======================================================
       1. DECLARAÇÃO DAS VARIÁVEIS
       Um grupo de variáveis para a Carta 1
       e outro grupo para a Carta 2.
       ====================================================== */

    // Carta 1
    char estado1;              // letra de 'A' a 'H'
    char codigo1[4];           // ex: "A01" (+ '\0')
    char nomeCidade1[50];      // nome da cidade
    int populacao1;            // número de habitantes
    float area1;               // área em km²
    float pib1;                // PIB em bilhões de reais
    int pontosTuristicos1;     // quantidade de pontos turísticos

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* ======================================================
       2. ENTRADA DE DADOS - CARTA 1
       Lemos os dados digitados pelo usuário para a
       primeira carta.
       ====================================================== */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado1);  // espaço antes de %c para ignorar ENTER pendente

    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %3s", codigo1);  // lê até 3 caracteres

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // lê até a quebra de linha

    printf("Informe a populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a area (em km2): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ======================================================
       3. ENTRADA DE DADOS - CARTA 2
       Mesmo processo da carta 1, agora para a segunda carta.
       ====================================================== */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a area (em km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ======================================================
       4. SAÍDA DE DADOS
       Exibimos os dados das duas cartas, no formato
       pedido no enunciado.
       ====================================================== */

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    /* ======================================================
       5. FIM DO PROGRAMA
       ====================================================== */

    return 0;  // indica que o programa terminou com sucesso
}
