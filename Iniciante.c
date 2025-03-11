#include <stdio.h>
#include <string.h>

int main() 
{
    // Variáveis do jogador
    char Nome[60];
    int Idade;
    int Nascimento;
    char Tutorial[20]; // Aumenta o tamanho para garantir que "Sim" ou "Não" sejam lidos corretamente

    // Pergunta o nome
    printf("Qual é o seu nome? ");
    if (scanf(" %[^\n]", Nome) != 1) {
        printf("Erro ao ler o nome.\n");
        return 1;  // Retorna 1 para indicar erro
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
    while (getchar() != '\n');  // Usar isso pode funcionar, mas fique atento a comportamentos imprevistos

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

    // Informações das cidades
    char CidadeA[] = "Petrópolis";
    char CidadeB[] = "Caucaia";

    int PopulacaoA = 278881;
    int PopulacaoB = 355679;

    float AreaA = 795.798;
    float AreaB = 1223.246;

    float PIBA = 51.003;
    float PIBB = 28.229;

    int PontosTuristicosA = 15; // Estimativa de pontos turísticos em Petrópolis
    int PontosTuristicosB = 12; // Estimativa de pontos turísticos em Caucaia

    // Mostra as cidades disponíveis
    printf("As cidades disponíveis são:\n");
    printf("1 - %s\n", CidadeA);
    printf("2 - %s\n", CidadeB);

    // Escolha do jogador
    int Escolha;
    printf("Qual cidade você deseja escolher? (Digite 1 para Petrópolis ou 2 para Caucaia): ");
    if (scanf("%d", &Escolha) != 1) {
        printf("Erro ao ler a escolha da cidade.\n");
        return 1;
    }

    // Exibe os detalhes da cidade escolhida
    if (Escolha == 1) 
    {
        printf("\n===== CARTA ESCOLHIDA =====\n");
        printf("Cidade: %s\n", CidadeA);
        printf("População: %d habitantes\n", PopulacaoA);
        printf("Área: %.2f km²\n", AreaA);
        printf("PIB: R$ %.2f bilhões\n", PIBA);
        printf("Pontos Turísticos: %d\n", PontosTuristicosA);
    } 
    else if (Escolha == 2) 
    {
        printf("\n===== CARTA ESCOLHIDA =====\n");
        printf("Cidade: %s\n", CidadeB);
        printf("População: %d habitantes\n", PopulacaoB);
        printf("Área: %.2f km²\n", AreaB);
        printf("PIB: R$ %.2f bilhões\n", PIBB);
        printf("Pontos Turísticos: %d\n", PontosTuristicosB);
    }
    else 
    {
        printf("\nOpção inválida! Escolha 1 ou 2.\n");
    }

    return 0;
}
