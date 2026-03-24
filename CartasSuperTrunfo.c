#include <stdio.h>

int main(){

    char estado;
    char codigo[4];
    char cidade[50];

    int populacao;
    float area;
    float pib;
    float densidade;
    float pib_per_capita;
    int pontos_turisticos;

    //Carta 2 

    char estado2;
    char codigo2[4];
    char cidade2[50];

    int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float pib_per_capita2;
    int pontos_turisticos2;
    

  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade);

  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao);

  printf("Digite a area da cidade (km2): ");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos);

densidade = (float) populacao / area;
pib_per_capita = pib / (float) populacao;

printf("\nCarta 1:\n");

printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km2\n", area);
printf("PIB: %.2f bilhoes de reais\n", pib);
printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);

printf("Densidade Populacional: %.2f hab/km2\n", densidade);
printf("PIB per Capita: %.2f reais\n", pib_per_capita);


  // Carta 2

printf("\nCarta 2\n");

  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a area da cidade (km2): ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  densidade2 = (float) populacao2 / area2;
  pib_per_capita2 = pib2 / (float) populacao2;

printf("\nCarta 2:\n");

printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km2\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  return 0;

}
