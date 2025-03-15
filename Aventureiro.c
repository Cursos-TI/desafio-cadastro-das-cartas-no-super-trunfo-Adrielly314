#include <stdio.h>
#include <string.h>

int main() 
{
    // Variáveis do jogador
    char Nome[60];
    int Idade;
    int Nascimento;
    char Tutorial[20];

    // Pergunta o nome
    printf("Qual é o seu nome? ");
    if (scanf(" %[^\n]", Nome) != 1) {
        printf("Erro ao ler o nome.\n");
        return 1;
    }

    // Pergunta a idade
    printf("Certo, nome bonito o seu! Qual é a sua idade? ");
    if (scanf("%d", &Idade) != 1) {
        printf("Erro ao ler a idade.\n");
        return 1;
    }

    // Pergunta o ano de nascimento
    printf("Quando você nasceu? ");
    if (scanf("%d", &Nascimento) != 1) {
        printf("Erro ao ler o ano de nascimento.\n");
        return 1;
    }

    // Limpa o buffer do teclado
    while (getchar() != '\n');  

    // Pergunta se deseja o tutorial
    printf("Deseja receber o tutorial? (Sim ou Não) ");
    if (scanf(" %[^\n]", Tutorial) != 1) {
        printf("Erro ao ler resposta.\n");
        return 1;
    }

    // Exibe o tutorial se o jogador respondeu "Sim"
    if (strcmp(Tutorial, "Sim") == 0) 
    { 
        printf("\n===== TUTORIAL =====\n");
        printf("No jogo Super Trunfo - Países, cada jogador recebe cartas de cidades com informações como população, área, PIB e pontos turísticos.\n");
        printf("A cada rodada, um jogador escolhe uma característica de sua carta e compara com a do adversário.\n");
        printf("Quem tiver o maior valor vence e fica com a carta do outro jogador.\n");
        printf("O jogo continua até que um dos jogadores tenha todas as cartas.\n");
        printf("Dica: escolha bem suas jogadas e tente adivinhar a estratégia do adversário!\n\n");
    } 
    else 
    {
        printf("Ok! Vamos prosseguir então.\n\n");
    }

    // Informações das 8 cidades
    char *Cidades[] = {"Petrópolis", "Caucaia", "São Paulo", "Paris", "Rio de Janeiro", "Belo Horizonte", "Lisboa", "Nova York"};
    char *Paises[] = {"Brasil", "Brasil", "Brasil", "França", "Brasil", "Brasil", "Portugal", "EUA"};

    int Populacoes[] = {278881, 355679, 11451999, 2104154, 6748000, 2524000, 504718, 8419600};
    float Areas[] = {795.798, 1223.246, 1521.202, 105, 1182.3, 331.4, 100.05, 783.8};
    float PIBs[] = {51.003, 28.229, 66.872, 5.150, 65.235, 61.828, 20.211, 1575.0};
    int PontosTuristicos[] = {15, 12, 60, 100, 50, 45, 40, 150};

    // Cálculo da densidade demográfica
    float Densidades[8];
    for (int i = 0; i < 8; i++) {
        Densidades[i] = Populacoes[i] / Areas[i];
    }

    // Mostra as cidades disponíveis
    printf("As cidades disponíveis são:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d - %s\n", i + 1, Cidades[i]);
    }

    // Escolha do jogador 1
    printf("\nJogador 1, escolha sua cidade: ");
    int Escolha1;
    if (scanf("%d", &Escolha1) != 1 || Escolha1 < 1 || Escolha1 > 8) {
        printf("Opção inválida!\n");
        return 1;
    }
    Escolha1--;

    // Exibe detalhes da escolha do jogador 1
    printf("\n===== CARTA ESCOLHIDA - JOGADOR 1 =====\n");
    printf("País: %s\n", Paises[Escolha1]);
    printf("Cidade: %s\n", Cidades[Escolha1]);

    // Escolha do jogador 2
    printf("\nJogador 2, escolha sua cidade: ");
    int Escolha2;
    if (scanf("%d", &Escolha2) != 1 || Escolha2 < 1 || Escolha2 > 8) {
        printf("Opção inválida!\n");
        return 1;
    }
    Escolha2--;

    // Exibe detalhes da escolha do jogador 2
    printf("\n===== CARTA ESCOLHIDA - JOGADOR 2 =====\n");
    printf("País: %s\n", Paises[Escolha2]);
    printf("Cidade: %s\n", Cidades[Escolha2]);

    // Escolha do critério de comparação
    printf("\nEscolha o critério para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    
    int Criterio;
    if (scanf("%d", &Criterio) != 1 || Criterio < 1 || Criterio > 5) {
        printf("Critério inválido!\n");
        return 1;
    }

    // Variáveis para armazenar os valores escolhidos
    float Valor1 = 0, Valor2 = 0;

    switch (Criterio) {
        case 1: 
            Valor1 = Populacoes[Escolha1];
            Valor2 = Populacoes[Escolha2];
            printf("\nPopulação: %s (%d habitantes) vs %s (%d habitantes)\n", Cidades[Escolha1], Populacoes[Escolha1], Cidades[Escolha2], Populacoes[Escolha2]);
            break;
            
        case 2: 
            Valor1 = Areas[Escolha1];
            Valor2 = Areas[Escolha2];
            printf("\nÁrea: %s (%.2f km²) vs %s (%.2f km²)\n", Cidades[Escolha1], Areas[Escolha1], Cidades[Escolha2], Areas[Escolha2]);
            break;

        case 3: 
            Valor1 = PIBs[Escolha1];
            Valor2 = PIBs[Escolha2];
            printf("\nPIB: %s (R$ %.2f bilhões) vs %s (R$ %.2f bilhões)\n", Cidades[Escolha1], PIBs[Escolha1], Cidades[Escolha2], PIBs[Escolha2]);
            break;

        case 4: 
            Valor1 = PontosTuristicos[Escolha1];
            Valor2 = PontosTuristicos[Escolha2];
            printf("\nPontos Turísticos: %s (%d) vs %s (%d)\n", Cidades[Escolha1], PontosTuristicos[Escolha1], Cidades[Escolha2], PontosTuristicos[Escolha2]);
            break;

        case 5:
            Valor1 = Densidades[Escolha1];
            Valor2 = Densidades[Escolha2];
            printf("\nDensidade Demográfica: %s (%.2f hab/km²) vs %s (%.2f hab/km²)\n", Cidades[Escolha1], Densidades[Escolha1], Cidades[Escolha2], Densidades[Escolha2]);
            break;
    }

    // Vencedor
    if (Valor1 > Valor2) {
        printf("\nJogador 1 venceu!\n");
    } else if (Valor2 > Valor1) {
        printf("\nJogador 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
