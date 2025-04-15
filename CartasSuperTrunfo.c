#include <stdio.h>

int main () {
     //carta1
  char estado;
  char codigo da carta [3];
  char nome_cidade [20];
  int populacao;
  float area;
  float PIB;
  int pontos_turisticos;
  float densidade_populacional;
  float PIB_per_capita;

  printf("estado (M-Z): ");
  scanf("%c", &estado);

  printf("codigo: ");
  scanf("%s", &codigo);

  printf("Nome da cidade: ");
  scanf("%s", &nome_cidade);

  printf("populacao: ");
  scanf("%d", &populacao);

  printf("area: ");
  scanf("%f", &area);
  
  printf("PIB: ");
  scanf("%f", &PIB);

  printf("Números de pontos turisticos: ");
  scanf("%d", &pontos_turisticos);

  densidade_populacional = populacao / area;
   
  
  PIB_per_capita = PIB / populacao;

  printf("PIB per capita é: %.1f", PIB_per_capita);

  //densidade populacional = populacao / area da cidade
  //per per capita = pib / populacao

//printf para imprimir os resultados

printf("o estado é:%c\n" ,estado);

printf("codigo é:%s\n" ,codigo);

printf("nome da cidade é:%s\n" ,nome_cidade);

printf("a populacao é:%d\n" ,populacao);

printf("area é:%.2f metros km\n",area);

printf("o PIB é:%f\n" ,PIB);

printf("numeros de pontos turisticos é:%d\n" ,pontos_turisticos);

printf("Densidade Populacional é: %.1f", densidade_populacional);

printf("PIB per capita é: %.1f", PIB_per_capita);



  //carta2
  char estado;
  char codigo da carta [4];
  char nome_cidade [20];
  int populacao;
  float area;
  float PIB;
  int pontos_turisticos;
  float densidade_populacional;
  float PIB_per_capita;

  printf("estado (M-Z): ");
  scanf("%c", &estado);

  printf("codigo: ");
  scanf("%s", &codigo);

  printf("Nome da cidade: ");
  scanf("%s", &nome_cidade);

  printf("populacao: ");
  scanf("%d", &populacao);

  printf("area: ");
  scanf("%f", &area);
  
  printf("PIB: ");
  scanf("%f", &PIB);

  printf("Números de pontos turisticos: ");
  scanf("%d", &pontos_turisticos);

  densidade_populacional = populacao / area;

  
  PIB_per_capita = PIB / populacao;

 

  //densidade populacional = populacao / area da cidade
  //per per capita = pib / populacao

//printf para imprimir os resultados

printf("o estado é:%c\n" ,estado);

printf("codigo é:%s\n" ,codigo);

printf("nome da cidade é:%s\n" ,nome_cidade);

printf("a populacao é:%d\n" ,populacao);

printf("area é:%.2f metros km\n",area);

printf("o PIB é:%f\n" ,PIB);

printf("numeros de pontos turisticos é:%d\n" ,pontos_turisticos);

printf("Densidade Populacional é: %.1f", densidade_populacional);   

printf("PIB per capita é: %.1f", PIB_per_capita);





  return 0;
 }

