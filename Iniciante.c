#include <stdio.h>

int main() {
    // Dados da Carta 1
    char Estado1;
    char Codigo1[4];
    char NomeCidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    // Dados da Carta 2
    char Estado2;
    char Codigo2[4];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &Estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf(" %s", Codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade1);

    printf("Informe a população: ");
    scanf("%d", &Populacao1);

    printf("Informe a área em km²: ");
    scanf("%f", &Area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &Estado2);

    printf("Informe o código da carta (ex: B03): ");
    scanf(" %s", Codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("Informe a população: ");
    scanf("%d", &Populacao2);

    printf("Informe a área em km²: ");
    scanf("%f", &Area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Exibição das Cartas
    printf("\n==============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("==============================\n");

    return 0;
}
