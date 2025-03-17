#include <stdio.h>

int main() {
    char estado1, estado2, codigoCarta1[50], codigoCarta2[50], nomeCidade1[50], nomeCidade2[50];
    int numeroDePontos1, numeroDePontos2, opcao1, opcao2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;
    unsigned long int populacao1, populacao2;

    // CARTA 1
    printf("CARTA 1: \n");
    printf("Digite uma letra de um estado de A a H: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos: \n");
    scanf("%d", &numeroDePontos1);

    // CARTA 2
    printf("\nCARTA 2: \n");
    printf("Digite uma letra de um estado de A a H: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos: \n");
    scanf("%d", &numeroDePontos2);

    // Cálculo de Densidade Populacional e PIB per Capita
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + pib1 + numeroDePontos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + numeroDePontos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Escolha dos Atributos
    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo para comparação (diferente do primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    // Impedir que os atributos escolhidos sejam iguais
    if (opcao1 == opcao2) {
        printf("Erro! Você deve escolher atributos diferentes.\n");
        return 1;
    }

    // Variáveis para armazenar os valores escolhidos
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;

    // Associação das escolhas do usuário com os valores reais
    switch (opcao1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = numeroDePontos1; valor2_attr1 = numeroDePontos2; break;
        case 5: valor1_attr1 = densidadePopulacional1; valor2_attr1 = densidadePopulacional2; break;
        case 6: valor1_attr1 = pibPerCapita1; valor2_attr1 = pibPerCapita2; break;
        case 7: valor1_attr1 = superPoder1; valor2_attr1 = superPoder2; break;
    }

    switch (opcao2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = numeroDePontos1; valor2_attr2 = numeroDePontos2; break;
        case 5: valor1_attr2 = densidadePopulacional1; valor2_attr2 = densidadePopulacional2; break;
        case 6: valor1_attr2 = pibPerCapita1; valor2_attr2 = pibPerCapita2; break;
        case 7: valor1_attr2 = superPoder1; valor2_attr2 = superPoder2; break;
    }

    // Soma dos atributos escolhidos
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    // Exibição dos resultados
    printf("\n========== RESULTADO ==========\n");
    printf("Carta 1: %s\nCarta 2: %s\n\n", nomeCidade1, nomeCidade2);

    printf("Atributo 1: %.2f vs %.2f\n", valor1_attr1, valor2_attr1);
    printf("Atributo 2: %.2f vs %.2f\n", valor1_attr2, valor2_attr2);
    printf("Soma dos Atributos: %.2f vs %.2f\n\n", soma1, soma2);

    if (soma1 > soma2) {
        printf("A Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("A Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
