#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Alexandre de Mello Soares

int main() {

// Declarando variveis da CARTA 1
    char estado; //variável "estado" tipo char
    char codigo[30]; //variável "codigo" tipo char
    char cidade[30]; //variável "cidade" tipo char
    int populacao; //variável "populacao" tipo inteiro
    float area; //variável "area" tipo float
    float pib; //variável "pib" tipo float
    int pontoturistico; //variável "pontoturistico" tipo int

// Declarando variveis da CARTA 2
    char estado_C2; //variável "estado_C2" tipo char
    char codigo_C2[30]; //variável "codigo_C2" tipo char
    char cidade_C2[30]; //variável "cidade_C2" tipo char
    int populacao_C2; //variável "populacao_C2" tipo inteiro
    float area_C2; //variável "area_C2" tipo float
    float pib_C2; //variável "pib_C2" tipo float
    int pontoturistico_C2; //variável "pontoturistico_C2" tipo int

    printf("PREENCHA OS DADOS DA CARTA 1:\n");
    
        printf("Digite a primeira letra do seu estado de A a H (Ex: para BAHIA Digite B):\n"); //solicitando dados de entrada
        scanf(" %c", &estado); //gravando dados na variavel estado

        printf("Digite o codigo da cidade seguido de um numero de 01 a 04 (Ex: B01, A02):\n"); //solicitando dados de entrada
        scanf("%s", codigo); //gravando dados na variavel codigo

        printf("Digite o nome da cidade:\n"); //solicitando dados de entrada
        scanf("%s", cidade); //gravando dados na variavel cidade

        printf("Digite a populacao:\n"); //solicitando dados de entrada
        scanf("%d", &populacao); //gravando dados na variavel populacao

        printf("Digite a area:\n"); //solicitando dados de entrada
        scanf("%f", &area); //gravando dados na variavel area

        printf("Digite o PIB:\n"); //solicitando dados de entrada
        scanf("%f", &pib); //gravando dados na variavel pib

        printf("Digite a quantidade de pontos turisticos da cidade:\n"); //solicitando dados de entrada
        scanf("%d", &pontoturistico); //gravando dados na variavel pontoturistico

    printf("PREENCHA OS DADOS DA CARTA 2:\n");
    
        printf("Digite a primeira letra do seu estado de A a H (Ex: para BAHIA Digite B):\n"); //solicitando dados de entrada
        scanf(" %c", &estado_C2); //gravando dados na variavel estado carta2

        printf("Digite o codigo da cidade seguido de um numero de 01 a 04 (Ex: B01, A02):\n"); //solicitando dados de entrada
        scanf("%s", codigo_C2); //gravando dados na variavel codigo carta2

        printf("Digite o nome da cidade:\n"); //solicitando dados de entrada
        scanf("%s", cidade_C2); //gravando dados na variavel cidade carta2

        printf("Digite a populacao:\n"); //solicitando dados de entrada
        scanf("%d", &populacao_C2);  //gravando dados na variavel populacao carta2

        printf("Digite a area:\n"); //solicitando dados de entrada
        scanf("%f", &area_C2); //gravando dados na variavel area carta2

        printf("Digite o PIB:\n"); //solicitando dados de entrada
        scanf("%f", &pib_C2); //gravando dados na variavel pib carta2

        printf("Digite a quantidade de pontos turisticos da cidade:\n"); //solicitando dados de entrada
        scanf("%d", &pontoturistico_C2);  //gravando dados na variavel pontoturistico carta2

    printf("\nDADOS DA CARTA 1:\n"); //impressão de dados na tela - CARTA 1
        printf("Estado: %c\n", estado);
        printf("Codigo da cidade: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("Populacao: %d\n", populacao);
        printf("Area: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Pontos turisticos: %d\n", pontoturistico);

    printf("\nDADOS DA CARTA 2:\n"); //impressão de dados na tela - CARTA 2
        printf("Estado: %c\n", estado_C2);
        printf("Codigo da cidade: %s\n", codigo_C2);
        printf("Cidade: %s\n", cidade_C2);
        printf("Populacao: %d\n", populacao_C2);
        printf("Area: %.2f\n", area_C2);
        printf("PIB: %.2f\n", pib_C2);
        printf("Pontos turisticos: %d\n", pontoturistico_C2);
      


    return 0;
}
