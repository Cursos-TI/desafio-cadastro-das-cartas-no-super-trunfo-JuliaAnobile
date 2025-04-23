#include <stdio.h>
#include <string.h>

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

     // Estado
    printf("Estado (A-Z): ");
    scanf(" %c", &Estado1); // espaço antes de %c ignora espaços anteriores

    // Limpa o buffer
    while (getchar() != '\n'); // descarta o ENTER que sobrou

    // Código da carta
    printf("Código da carta: ");
    scanf("%[^\n]", Código1); // lê até o ENTER

    getchar(); // limpa o ENTER

    // Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", Nome1); // lê até o ENTER

    getchar(); // limpa o ENTER

    // População
    printf("Digite a população: ");
    scanf("%d", &População1);

     // Limpa o buffer
     while (getchar() != '\n'); // descarta o ENTER que sobrou

    // Área
    printf("Digite a área (km²): ");
    scanf("%f", &Área1);

    // PIB
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

     // Limpa o buffer
     while (getchar() != '\n'); // descarta o ENTER que sobrou

    // Pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Turismo1);

    Densidade_populacional1 = Área1 / População1;
    PIB_per_capita1 = PIB1 / (float)População1;

     // Exibe os dados
     printf("\n--- DADOS DA CIDADE 1 ---\n");
     printf("Estado: %c\n", Estado1);
     printf("Código da carta: %s\n", Código1);
     printf("Nome da cidade: %s\n", Nome1);
     printf("População: %d\n", População1);
     printf("Área: %.2f km²\n", Área1);
     printf("PIB: %.2f bilhões\n", PIB1);
     printf("Pontos turísticos: %d\n", Turismo1);
     printf("Densidade Populacional é: %f\n", Densidade_populacional1);
     printf("PIB per capita é: %f\n", PIB_per_capita1);


  //Entrou um número → você vai ler string depois? → limpa o buffer
  //Entrou um caractere → você vai ler string ou outro caractere depois? → limpa o buffer

  //densidade populacional = populacao / area da cidade
  //per per capita = pib / populacao



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

  // Estado
 printf("Estado (A-Z): ");
 scanf(" %c", &Estado2); // espaço antes de %c ignora espaços anteriores

 // Limpa o buffer
 while (getchar() != '\n'); // descarta o ENTER que sobrou

 // Código da carta
 printf("Código da carta: ");
 scanf("%[^\n]", Código2); // lê até o ENTER

 getchar(); // limpa o ENTER

 // Nome da cidade
 printf("Digite o nome da cidade: ");
 scanf("%[^\n]", Nome2); // lê até o ENTER

 getchar(); // limpa o ENTER

 // População
 printf("Digite a população: ");
 scanf("%d", &População2);

  // Limpa o buffer
  while (getchar() != '\n'); // descarta o ENTER que sobrou

 // Área
 printf("Digite a área (km²): ");
 scanf("%f", &Área2);

 // PIB
 printf("Digite o PIB: ");
 scanf("%f", &PIB2);

  // Limpa o buffer
  while (getchar() != '\n'); // descarta o ENTER que sobrou

 // Pontos turísticos
 printf("Digite o número de pontos turísticos: ");
 scanf("%d", &Turismo2);

 Densidade_populacional2 = Área2 / População2;
 PIB_per_capita2 = PIB2 / (float)População2;

  // Exibe os dados
  printf("\n--- DADOS DA CIDADE 2 ---\n");
  printf("Estado: %c\n", Estado2);
  printf("Código da carta: %s\n", Código2);
  printf("Nome da cidade: %s\n", Nome2);
  printf("População: %d\n", População2);
  printf("Área: %.2f km²\n", Área2);
  printf("PIB: %.2f bilhões\n", PIB2);
  printf("Pontos turísticos: %d\n", Turismo2);
  printf("Densidade Populacional é: %f\n", Densidade_populacional2);
  printf("PIB per capita é: %f\n", PIB_per_capita2);



  return 0;
 }

