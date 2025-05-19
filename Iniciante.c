#include <stdio.h>
#include <string.h>

int main() {
    // Dados do Jogador
    char Nome[50];
    int Idade;
    int Nascimento;
    char Tutorial[10];

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

    // Boas-vindas
    printf("\n    ===== SUPER TRUNFO =====\n");

    // Pergunta o nome
    printf("Olá novo jogador. Qual é o seu nome? ");
    if (scanf(" %[^\n]", Nome) != 1) {
        printf("Erro ao ler o nome.\n");
        return 1;
    }

    // Pergunta a idade
    printf("Nome bonito o seu! Qual é a sua idade? ");
    if (scanf("%d", &Idade) != 1) {
        printf("Erro ao ler a idade.\n");
        return 1;
    }
    while (getchar() != '\n'); // Limpa o Enter

    // Pergunta o ano de nascimento
    printf("Quando você nasceu? ");
    if (scanf("%d", &Nascimento) != 1) {
        printf("Erro ao ler o ano de nascimento.\n");
        return 1;
    }
    while (getchar() != '\n'); // Limpa o Enter

    // Pergunta se deseja o tutorial
    printf("Deseja receber o tutorial? (Sim ou Não) ");
    if (scanf(" %[^\n]", Tutorial) != 1) {
        printf("Erro ao ler resposta.\n");
        return 1;
    }

    // Exibe o tutorial se o jogador respondeu "Sim"
    if (strcmp(Tutorial, "Sim") == 0) {
        printf("\n===== TUTORIAL =====\n");
        printf("No jogo Super Trunfo - Países, cada jogador recebe cartas de cidades com informações como população, área, PIB e pontos turísticos.\n");
        printf("A cada rodada, um jogador escolhe uma característica de sua carta e compara com a do adversário.\n");
        printf("Quem tiver o maior valor vence e fica com a carta do outro jogador.\n");
        printf("O jogo continua até que um dos jogadores tenha todas as cartas.\n");
        printf("Dica: escolha bem suas jogadas e tente adivinhar a estratégia do adversário!\n\n");
    } else {
        printf("Ok! Vamos prosseguir então.\n\n");
    }

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &Estado1);
    while (getchar() != '\n');

    printf("Informe o código da carta (ex: A01): ");
    scanf(" %s", Codigo1);
    while (getchar() != '\n');

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade1);

    printf("Informe a população: ");
    scanf("%d", &Populacao1);
    while (getchar() != '\n');

    printf("Informe a área em km²: ");
    scanf("%f", &Area1);
    while (getchar() != '\n');

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);
    while (getchar() != '\n');

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);
    while (getchar() != '\n');

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &Estado2);
    while (getchar() != '\n');

    printf("Informe o código da carta (ex: B03): ");
    scanf(" %s", Codigo2);
    while (getchar() != '\n');

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("Informe a população: ");
    scanf("%d", &Populacao2);
    while (getchar() != '\n');

    printf("Informe a área em km²: ");
    scanf("%f", &Area2);
    while (getchar() != '\n');

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);
    while (getchar() != '\n');

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);
    while (getchar() != '\n');

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
