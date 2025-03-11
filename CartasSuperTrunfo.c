#include <stdio.h>

int main() {
    char estado1, estado2, codigoCarta1[50], codigoCarta2[50], nomeCidade1[50], nomeCidade2[50];
    int numeroDePontos1, numeroDePontos2;
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


     // Mostrar os valores da carta 1:
    printf("CARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigoCarta1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos: %d \n", numeroDePontos1);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPerCapita1);

    // CARTA 2
    printf("CARTA 2: \n");
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

     // Mostrar os valores da carta 2:
    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigoCarta2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos: %d \n", numeroDePontos2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);

    // Cálculo de Densidade Populacional e PIB per Capita
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + pib1 + numeroDePontos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + numeroDePontos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

   // Exibição dos Resultados das Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) + 1, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) + 1, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) + 1, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (numeroDePontos1 > numeroDePontos2) + 1, (numeroDePontos1 > numeroDePontos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) + 1, (densidadePopulacional1 < densidadePopulacional2)); // Menor valor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) + 1, (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) + 1, (superPoder1 > superPoder2));


    printf("\nComparação de cartas (Atributo: PIB):\n");

    printf("A carta 1 - %s (%c): %.2f\n", nomeCidade1, estado1, pib1);
    printf("A carta 2 - %s (%c): %.2f\n", nomeCidade2, estado2, pib2);

    if (pib1 > pib2) {
        printf("A carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("A carta 2 (%s) venceu!\n", nomeCidade2);
    }


    return 0;
}