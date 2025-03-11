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

    // Informações das cidades
    char *Cidades[] = {"Petrópolis", "Caucaia", "São Paulo", "Paris"};
    char *Paises[] = {"Brasil", "Brasil", "Brasil", "França"};

    int Populacoes[] = {278881, 355679, 11451999, 2104154};
    float Areas[] = {795.798, 1223.246, 1521.202, 105};
    float PIBs[] = {51.003, 28.229, 66.872, 5.150};
    int PontosTuristicos[] = {15, 12, 60, 100};

    // Cálculo da densidade demográfica
    float Densidades[4];
    for (int i = 0; i < 4; i++) {
        Densidades[i] = Populacoes[i] / Areas[i];
    }

    // Mostra as cidades disponíveis
    printf("As cidades disponíveis são:\n");
    printf("1 - %s\n", Cidades[0]);
    printf("2 - %s\n", Cidades[1]);
    printf("3 - %s\n", Cidades[2]);
    printf("4 - %s\n", Cidades[3]);

    // Escolha do jogador 1
    printf("\nJogador 1, escolha sua cidade: ");
    int Escolha1;
    if (scanf("%d", &Escolha1) != 1 || Escolha1 < 1 || Escolha1 > 4) {
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
    if (scanf("%d", &Escolha2) != 1 || Escolha2 < 1 || Escolha2 > 4) {
        printf("Opção inválida!\n");
        return 1;
    }
    Escolha2--;

    // Exibe detalhes da escolha do jogador 2
    printf("\n===== CARTA ESCOLHIDA - JOGADOR 2 =====\n");
    printf("País: %s\n", Paises[Escolha2]);
    printf("Cidade: %s\n", Cidades[Escolha2]);

    // Escolha dos dois critérios de comparação
    int Criterio1, Criterio2;

    printf("\nJogador 1, escolha o primeiro critério para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    if (scanf("%d", &Criterio1) != 1 || Criterio1 < 1 || Criterio1 > 5) {
        printf("Critério inválido!\n");
        return 1;
    }

    // Remover o critério já escolhido
    printf("\nJogador 1, escolha o segundo critério para comparar (diferente do primeiro):\n");
    do {
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        if (scanf("%d", &Criterio2) != 1 || Criterio2 < 1 || Criterio2 > 5 || Criterio1 == Criterio2) {
            printf("Critério inválido ou igual ao primeiro critério!\n");
        }
    } while (Criterio1 == Criterio2);

    // Variáveis para armazenar os valores dos atributos
    float Valor1_Crit1 = 0, Valor2_Crit1 = 0;
    float Valor1_Crit2 = 0, Valor2_Crit2 = 0;

    // Obtendo os valores dos atributos
    switch (Criterio1) {
        case 1: 
            Valor1_Crit1 = Populacoes[Escolha1];
            Valor2_Crit1 = Populacoes[Escolha2];
            break;
        case 2: 
            Valor1_Crit1 = Areas[Escolha1];
            Valor2_Crit1 = Areas[Escolha2];
            break;
        case 3: 
            Valor1_Crit1 = PIBs[Escolha1];
            Valor2_Crit1 = PIBs[Escolha2];
            break;
        case 4: 
            Valor1_Crit1 = PontosTuristicos[Escolha1];
            Valor2_Crit1 = PontosTuristicos[Escolha2];
            break;
        case 5:
            Valor1_Crit1 = Densidades[Escolha1];
            Valor2_Crit1 = Densidades[Escolha2];
            break;
    }

    switch (Criterio2) {
        case 1: 
            Valor1_Crit2 = Populacoes[Escolha1];
            Valor2_Crit2 = Populacoes[Escolha2];
            break;
        case 2: 
            Valor1_Crit2 = Areas[Escolha1];
            Valor2_Crit2 = Areas[Escolha2];
            break;
        case 3: 
            Valor1_Crit2 = PIBs[Escolha1];
            Valor2_Crit2 = PIBs[Escolha2];
            break;
        case 4: 
            Valor1_Crit2 = PontosTuristicos[Escolha1];
            Valor2_Crit2 = PontosTuristicos[Escolha2];
            break;
        case 5:
            Valor1_Crit2 = Densidades[Escolha1];
            Valor2_Crit2 = Densidades[Escolha2];
            break;
    }

    // Soma dos atributos
    float Soma1 = Valor1_Crit1 + Valor1_Crit2;
    float Soma2 = Valor2_Crit1 + Valor2_Crit2;

    // Exibe os valores
    printf("\nResultado da comparação:\n");
    printf("Jogador 1: %s, %s (%d habitantes, %.2f km², R$ %.2f bilhões, %d pontos turísticos)\n", 
           Paises[Escolha1], Cidades[Escolha1], Populacoes[Escolha1], Areas[Escolha1], PIBs[Escolha1], PontosTuristicos[Escolha1]);
    printf("Jogador 2: %s, %s (%d habitantes, %.2f km², R$ %.2f bilhões, %d pontos turísticos)\n", 
           Paises[Escolha2], Cidades[Escolha2], Populacoes[Escolha2], Areas[Escolha2], PIBs[Escolha2], PontosTuristicos[Escolha2]);

    printf("\nSoma dos atributos:\n");
    printf("Jogador 1: %.2f\n", Soma1);
    printf("Jogador 2: %.2f\n", Soma2);

    // Verifica quem venceu
    if (Soma1 > Soma2) {
        printf("\nJogador 1 venceu!\n");
    } else if (Soma2 > Soma1) {
        printf("\nJogador 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}

