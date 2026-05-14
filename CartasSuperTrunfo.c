#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2, percapita1, percapita2;
    int qtd_pontos_turisticos1, qtd_pontos_turisticos2;
    float superpoder1, superpoder2;
    
   
    printf("Escreva os dados da Carta 1:\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &qtd_pontos_turisticos1);

    printf("\nEscreva os dados da Carta 2:\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &qtd_pontos_turisticos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

    superpoder1 = (populacao1 + area1 + pib1 + qtd_pontos_turisticos1 + percapita1 + (1.0 / densidade1));
    superpoder2 = (populacao2 + area2 + pib2 + qtd_pontos_turisticos2 + percapita2 + (1.0 / densidade2));

    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", qtd_pontos_turisticos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", percapita1);
    printf("Superpoder: %.2f\n", superpoder1);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", qtd_pontos_turisticos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", percapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    printf("\n Comparação das cartas:\n");

    printf("População: Carta 1 venceu? %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu? %d\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 venceu? %d\n", qtd_pontos_turisticos1 > qtd_pontos_turisticos2);
    printf("Densidade: Carta 1 venceu? %d\n", densidade1 < densidade2);
    printf("PIB per capita: Carta 1 venceu? %d\n", percapita1 > percapita2);
    printf("Superpoder: Carta 1 venceu? %d\n", superpoder1 > superpoder2);

    return 0;
}