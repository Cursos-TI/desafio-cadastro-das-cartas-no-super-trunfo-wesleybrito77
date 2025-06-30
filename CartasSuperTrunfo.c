#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
/******************************************************************************

trabalho iniciante linguagem C

*******************************************************************************/
#include <stdio.h>

int main()
{
// variaveis de dados da carta 1
   char carta_1[10]="00";
   char estado_1[10]="letra";
   int codigo_1=0;
  char cidade_1[60]= "cidade";
  int população_1=0;
  float area_1=1;
  int pib_1=0;
  int pontos_turisticos_1=0;
  
 // variaveis de dados da carta 2
  char carta_2[10]="00";
   char estado_2[10]="letra";
   int codigo_2=00;
  char cidade_2[60]= "cidade";
  int população_2=00;
  float area_2=00.0;
  int pib_2=00;
  int pontos_turisticos_2=00;
  
 
  printf("digite o numero da carta entre 01 a 03: ");
  scanf(" %s",carta_1);
  printf("digite a letra do estado de A a H :");
  scanf("%s",estado_1);
  printf("digite o nome da cidade :");
  scanf("%s",cidade_1);
  printf("digite a população :");
  scanf("%d",&população_1);
  printf("digite a área :");
  scanf("%f",&area_1);
  printf("digite o PIB :");
  scanf("%d",&pib_1);
  printf("digite o numero de pontos turisticos :");
  scanf("%d",&pontos_turisticos_1);
printf("***************************************\n\n");

  printf("digite o numero da carta entre 01 a 03: ");
  scanf(" %s",carta_2);
  printf("digite a letra do estado de A a H :");
  scanf("%s",estado_2);
  printf("digite o nome da cidade :");
  scanf("%s",cidade_2);
  printf("digite a população :");
  scanf("%d",&população_2);
  printf("digite a área :");
  scanf("%f",&area_2);
  printf("digite o PIB :");
  scanf("%d",&pib_2);
  printf("digite o numero de pontos turisticos :");
  scanf("%d",&pontos_turisticos_2);
  printf("-----------------------\n\n");

  printf("Carta 1\n");
  printf("Estado:%s\n",estado_1);
  printf("Codigo:%s",estado_1);
  printf("%s\n",carta_1);
  printf("Cidade :%s\n",cidade_1);
  printf("População :%d\n",população_1);
  printf("Área :%.2f\n",area_1);
  printf("PIB :%d\n",pib_1);
  printf("pontos turisticos :%d\n",pontos_turisticos_1);
  printf("-----------------------\n\n");
  
  printf("Carta 2\n");
  printf("Estado:%s\n",estado_2);
  printf("Codigo:%s",estado_2);
  printf("%s\n",carta_2);
  printf("Cidade :%s\n",cidade_2);
  printf("População :%d\n",população_2);
  printf("Área :%.2f\n",area_2);
  printf("PIB :%d\n",pib_2);
  printf("pontos turisticos :%d\n",pontos_turisticos_2);
  printf("-----------------------\n\n");
  

  
    return 0;
}