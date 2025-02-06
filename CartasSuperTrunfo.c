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
        char estado;
        char codigo_cidade[10];
        char nome_cidade[10];
        int populacao;
        float area_km;
        float pib;
        int num_pontos_turisticos;

    //Cadastrar  as informações das cartas
    //Entrada de Dados

    printf("*****Cadastro das Cartas***** \n");
    printf("Digite os Dados  das carta: \n");
    printf("Digite o estado : ");
        scanf(" %c", &estado);

        printf("Digite o código da carta: ");
        scanf("%s", codigo_cidade);

        printf("Digite o nome da cidade: ");
        scanf("%s", nome_cidade);

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao);

        printf("Digite a área da cidade em km²: ");
        scanf("%f", &area_km);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &num_pontos_turisticos);
        //Informações a ser apresentada ao clientes
        printf("\nDados informados:\n");
        printf("Estado : %c\n", estado);
        printf("Código da carta: %c%s\n",estado, codigo_cidade);
        printf("Nome da cidade: %s\n", nome_cidade);
        printf("População da cidade: %d habitantes\n", populacao);
        printf("Área da cidade: %.2f km²\n", area_km);
        printf("PIB da cidade: R$ %.2f\n", pib);
        printf("Número de pontos turísticos da cidade: %d\n", num_pontos_turisticos);


        return 0;
}
