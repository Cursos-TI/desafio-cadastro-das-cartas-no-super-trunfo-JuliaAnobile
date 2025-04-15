#include <stdio.h>

int main () {
     //carta1
     char Estado1;
     char Código1[50];
     char Nome1[50];
     int População1;
     float Área1;
     float PIB1;
     int Turismo1;
     float PIB_per_capita1;
     float Densidade_populacional1;

  printf("Digite os dados da primeira carta\n");
    
  printf("Estado (A-H): ");
  scanf("%c", &Estado1);

  printf("Código da carta (Ex: A01): ");
  scanf("%s", &Código1);

  printf("Digite o nome da cidade: ");
  scanf("%s", &Nome1);

  printf("Digite a população: ");
  scanf("%d", &População1);
  
  printf("Digite a área (km²): ");
  scanf("%f", &Área1);
  
  printf("Digite o PIB (em bilhões reais): ");
  scanf("%f", &PIB1);
  
  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &Turismo1);

  Densidade_populacional1 = Área1 / População1;
  PIB_per_capita1 = PIB1 / (float)População1;


  //densidade populacional = populacao / area da cidade
  //per per capita = pib / populacao

//printf para imprimir os resultados

printf("o estado é:%c\n" ,Estado1);

printf("codigo é:%s\n" ,Código1);

printf("nome da cidade é:%s\n" ,Nome1);

printf("a populacao é:%d\n" ,População1);

printf("area é:%.2f metros km\n",Área1);

printf("o PIB é:%f\n" ,PIB1);

printf("numeros de pontos turisticos é:%d\n" ,Turismo1);

printf("Densidade Populacional é: %.1f", Densidade_populacional1);

printf("PIB per capita é: %.1f", PIB_per_capita1);



  //carta2
  char Estado2;
  char Código2[50];
  char Nome2[50];
  int População2;
  float Área2;
  float PIB2;
  int Turismo2;
  float PIB_per_capita2;
  float Densidade_populacional2;

  printf("Digite os dados da segunda carta\n");
    
  printf("Estado (A-H): ");
  scanf("%c", &Estado2);

  printf("Código da carta (Ex: A01): ");
  scanf("%s", &Código2);

  printf("Digite o nome da cidade: ");
  scanf("%s", &Nome2);

  printf("Digite a população: ");
  scanf("%d", &População2);
  
  printf("Digite a área (km²): ");
  scanf("%f", &Área2);
  
  printf("Digite o PIB (em bilhões reais): ");
  scanf("%f", &PIB2);
  
  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &Turismo2);

  Densidade_populacional2 = Área2 / População2;
  PIB_per_capita2 = PIB2 / (float)População2;
 

  //densidade populacional = populacao / area da cidade
  //per per capita = pib / populacao

//printf para imprimir os resultados

printf("SEGUE ABAIXO AS INFORMAÇÕES DAS SUAS CARTAS\n");

printf("\n");

printf("Carta 1\n");
printf("Estado: %c\n", Estado1);
printf("Código: %s\n", Código1);
printf("Nome: %s\n", Nome1);
printf("População: %d\n", População1);
printf("Área: %.2f km²\n", Área1);
printf("PIB: %.2f bilhões\n", PIB1);
printf("Número de pontos turísticos: %d\n", Turismo1);
printf("Densidade Populacional é: %.1f", Densidade_populacional2);   
printf("PIB per capita é: %.1f", PIB_per_capita2);

printf("\n");

printf("Carta 2\n");
printf("Estado: %c\n", Estado2);
printf("Código: %s\n", Código2);
printf("Nome: %s\n", Nome2);
printf("População: %d\n", População2);
printf("Área: %.2f km²\n", Área2);
printf("PIB: %.2f bilhões\n", PIB2);
printf("Número de pontos turísticos: %d\n", Turismo2);
printf("Densidade Populacional é: %.1f", Densidade_populacional2);   
printf("PIB per capita é: %.1f", PIB_per_capita2);

printf("\n");







  return 0;
 }

