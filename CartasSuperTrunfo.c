#include <stdio.h>

int main(){

char estado;
char codigo[4];
char cidade[50];

int populacao;
float area;
float pib;
int pontos_turisticos;

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

printf("\n--- CARTA CADASTRADA ---\n");

printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km2\n", area);
printf("PIB: %.2f\n", pib);
printf("Pontos Turisticos: %d\n", pontos_turisticos);

return 0;
}
