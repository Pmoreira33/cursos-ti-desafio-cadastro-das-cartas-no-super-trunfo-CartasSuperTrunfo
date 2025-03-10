#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        //Declaração das variavéis e seus tipos
        
        char estado[20],estado1[20];
char codigo_cidade[10],codigo_cidade1[10];
char nome_cidade[10],nome_cidade1[10];
float populacao,populacao1;
float area_km,area_km1;
float pib,percapita,pib1,densidade1,percapita1;
int num_pontos_turisticos,num_pontos_turisticos1;

//Cadastrar  as informações das cartas

    printf("*****Cadastro das Cartas***** \n");
    printf("Digite os Dados  das carta 01: \n");
    printf("Digite o estado : \n");
    scanf(" %s", &estado);

    printf("Digite o código da carta: ");  //cadastre o codigo da cidade
    scanf("%s", &codigo_cidade);

    printf("Digite o nome da cidade: ");  //cadastre o nome da cidade
    scanf("%s", &nome_cidade);

    printf("Digite a população da cidade: "); //informação sobre a população
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: "); //informar a area da cidade
    scanf("%f", &area_km);

    printf("Digite o PIB da cidade: ");  //informa o PIB
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: "); //informar pontos turisticos
    scanf("%d", &num_pontos_turisticos);

    printf("####### Digite os Dados  das carta 02:###### \n");

    printf("Digite o estado : \n");
    scanf(" %s", &estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", &codigo_cidade1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome_cidade1);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &area_km1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &num_pontos_turisticos1);


   
    percapita=pib/populacao;   //calculo dos atributos
    percapita1=pib1/populacao1;  //calculo dos atributos



    printf("\nDados informados:\n");
     
  if (percapita1 > percapita)    //inicio da logica dos atributos e comparação
    {
    printf("***Carta Vencedora***\n");     
    printf(" %s %s  %s \n",codigo_cidade1,nome_cidade1,estado1);
    printf("PIB da cidade: R$ %.2f \n", pib1);        
    }else{                                                  //informa a carta vencedora

    printf("***Carta Vencedora***\n");     
    printf(" %s  %s  %s\n",codigo_cidade,nome_cidade,estado);
    printf("PIB da cidade: R$ %.2f\n", pib);      

    }
   


return 0;


}