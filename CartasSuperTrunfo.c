#include <stdio.h>
#include <stdlib.h>

/*
  Super Trunfo Cidades Iniciante
  Objetivo: Usuário deve cadastrar 2 cartas e o programa deve apresentar as duas
  cartas.
    */

int main() {

  // Declaração de variáveis da carta 1
  char estado_1[20];
  char codigo_carta_1[20];
  char nome_cidade_1[50];
  unsigned long long int populacao_1;
  float area_1;
  float pib_1;
  int pontos_turisticos_1;

  // Declaração de variáveis da carta 2
  char estado_2[20];
  char codigo_carta_2[20];
  char nome_cidade_2[50];
  unsigned long long int populacao_2;
  float area_2;
  float pib_2;
  int pontos_turisticos_2;

  // Preenchimento das variáveis da carta 1
  printf("Digite o estado da carta 1:\n");
  scanf(" %s", estado_1);

  printf("Digite o código da carta 1:\n");
  scanf(" %s", codigo_carta_1);

  printf("Digite o nome da cidade da carta 1:\n");
  scanf(" %s", nome_cidade_1);

  printf("Digite a população da carta 1:\n");
  scanf(" %llu", &populacao_1);

  printf("Digite a área da carta 1: \n");
  scanf(" %f", &area_1);

  printf("Digite o PIB da carta 1:\n");
  scanf(" %f", &pib_1);

  printf("Digite o número de pontos turísticos da carta 1:\n");
  scanf(" %d", &pontos_turisticos_1);

  // Preenchimento das variáveis da carta 2
  printf("Digite o estado da carta 2:\n");
  scanf(" %s", estado_2);

  printf("Digite o código da carta 2:\n");
  scanf(" %s", codigo_carta_2);

  printf("Digite o nome da cidade da carta 2:\n");
  scanf(" %s", nome_cidade_2);

  printf("Digite a população da carta 2:\n");
  scanf(" %llu", &populacao_2);

  printf("Digite a área da carta 2:\n");
  scanf(" %f", &area_2);

  printf("Digite o PIB da carta 2:\n");
  scanf(" %f", &pib_2);

  printf("Digite o número de pontos turísticos da carta 2:\n");
  scanf(" %d", &pontos_turisticos_2);

  // Adição de Densidade Populacional e PIB per Capita
  float densidade_populacional_1;
  float pib_per_capita_1;
  float densidade_populacional_2;
  float pib_per_capita_2;

  // Calculo de Densidade Populacional e PIB per Capita
  densidade_populacional_1 = (float)populacao_1 / area_1;
  pib_per_capita_1 = (pib_1 * 1000000000.0) / (float)populacao_1;
  densidade_populacional_2 = (float)populacao_2 / area_2;
  pib_per_capita_2 = (pib_2 * 1000000000.0) / (float)populacao_2;

  // Adição de Super Poder e inverso da densidade populacional
  float super_poder_1;
  float super_poder_2;
  float inverso_densidade_populacional_1;
  float inverso_densidade_populacional_2;

  // Calculo do Inverso da Densidade Populacional
  inverso_densidade_populacional_1 = area_1 / (float)populacao_1;
  inverso_densidade_populacional_2 = area_2 / (float)populacao_2;

  // Calculo do Super Poder, é a soma de todos os atributos da carta, porém no
  // lugar da densidade populacional é usado o inverso da densidade populacional
  super_poder_1 = populacao_1 + area_1 + pib_1 + pontos_turisticos_1 +inverso_densidade_populacional_1 + pib_per_capita_1;
  super_poder_2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2 +inverso_densidade_populacional_2 + pib_per_capita_2;

  // Apresentação da primeira carta
  printf("Carta %s%s:\n", estado_1, codigo_carta_1);
  printf("Nome da cidade: %s\n", nome_cidade_1);
  printf("População: %llu habitantes\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Pontos turísticos: %d\n", pontos_turisticos_1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
  printf("Super Poder: %.2f\n", super_poder_1);

  // Imprimir um tracejado entre as cartas
  printf("--------------------------------------------------\n");

  // Apresentação da segunda carta
  printf("Carta %s%s:\n", estado_2, codigo_carta_2);
  printf("Nome da cidade: %s\n", nome_cidade_2);
  printf("População: %llu habitantes\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Pontos turísticos: %d\n", pontos_turisticos_2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
  printf("Super Poder: %.2f\n", super_poder_2);

  // Imprimir quebra de linha em branco segui do de quebra de linha tracejada
  printf("\n");
  printf("--------------------------------------------------\n");
  printf("\n");

  // Pressione enter para Comparar as cartas
  printf("Pressione enter para comparar as cartas\n");
  while (getchar() != '\n')
    ;        // Limpa o buffer do teclado
  getchar(); // Aguarda o enter do usuário

  // Calculo de comparações dos atributos para saber qual carta venceu
  // População: Maior ganha
  // Área: Maior ganha
  // PIB: Maior ganha
  // Pontos Turísticos: Maior ganha
  // Densidade Populacional: Menor ganha
  // PIB per Capita: Maior ganha
  // Super Poder: Maior ganha

  int populacao_venceu;
  int area_venceu;
  int pib_venceu;
  int pontos_turisticos_venceu;
  int densidade_populacional_venceu;
  int pib_per_capita_venceu;
  int super_poder_venceu;

  populacao_venceu = populacao_1 > populacao_2;
  area_venceu = area_1 > area_2;
  pib_venceu = pib_1 > pib_2;
  pontos_turisticos_venceu = pontos_turisticos_1 > pontos_turisticos_2;
  densidade_populacional_venceu = inverso_densidade_populacional_1 < inverso_densidade_populacional_2;
  pib_per_capita_venceu = pib_per_capita_1 > pib_per_capita_2;
  super_poder_venceu = super_poder_1 > super_poder_2;

  // Resultado do calculo de comparação

  printf("População: %d (%llu Habitantes)\n", populacao_venceu, populacao_venceu ? populacao_1 : populacao_2);
  printf("Área: %d (%.2f km²)\n", area_venceu, area_venceu ? area_1 : area_2);
  printf("PIB: %d (%.2f Bilhões de Reais)\n", pib_venceu, pib_venceu ? pib_1 : pib_2);
  printf("Pontos turísticos: %d (%d)\n", pontos_turisticos_venceu, pontos_turisticos_venceu ? pontos_turisticos_1 : pontos_turisticos_2);
  printf("Densidade Populacional: %d (%.2f hab/km²)\n", densidade_populacional_venceu, densidade_populacional_venceu ? densidade_populacional_1 : densidade_populacional_2);
  printf("PIB per Capita: %d (%.2f Reais)\n", pib_per_capita_venceu,pib_per_capita_venceu ? pib_per_capita_1 : pib_per_capita_2);
  printf("Super Poder: %d (Vencedor: %.2f)\n", super_poder_venceu, super_poder_venceu ? super_poder_1 : super_poder_2);

  // Imprimir quebra de linha em branco segui do de quebra de linha tracejada
  printf("\n");
  printf("--------------------------------------------------\n");
  printf("\n");

  // Mostrar a carta vencedora apresentando o estado, o código da carta e o nome
  // da cidade
  if (super_poder_1 > super_poder_2) {
    printf("A carta vencedora é a: %s%s - %s\n", estado_1, codigo_carta_1,
           nome_cidade_1);
  } else {
    printf("A carta vencedora é a: %s%s - %s\n", estado_2, codigo_carta_2,
           nome_cidade_2);
  }

  return 0;
}
