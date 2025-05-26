#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    //Desafio niível novato
    //Criar um Super Trunfo com duas cartas

    //adiciona caracteres especiais
    setlocale(LC_ALL, "");


    //variaveis carta 1
    char estado_1[30] = "";
    int codigoCarta_1 = 0;
    char nomeCidade_1[30] = "";
    int populacao_1 = 0;
    float area_1 = 0;
    float pib_1 = 0;
    int pontosTuristicos_1 = 0;
    float densidadePopulacional_1 = 0;
    float pibPerCapita_1 = 0;

    //variaveis carta 2
    char estado_2[30] = "";
    int codigoCarta_2 = 0;
    char nomeCidade_2[30] = "";
    int populacao_2 = 0;
    float area_2 = 0;
    float pib_2 = 0;
    int pontosTuristicos_2 = 0;
    float densidadePopulacional_2 = 0;
    float pibPerCapita_2 = 0;

    //Inserir dados da primeira carta
    printf("Cadastre a carta 1:");
    
    printf("\nEstado: ");
    fgets(estado_1, sizeof(estado_1), stdin);
    
    printf("\nCodigo: ");
    scanf(" %d", &codigoCarta_1);
    getchar();
    
    printf("\nNome da Cidade: ");
    fgets(nomeCidade_1, sizeof(nomeCidade_1), stdin);
    
    printf("\nPopulacao: ");
    scanf(" %d", &populacao_1);
    
    printf("\nArea (em km²): ");
    scanf(" %f", &area_1);
    
    printf("\nPIB: ");
    scanf(" %f", &pib_1);
    
    printf("\nNumero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos_1);
    getchar();


    //Calculo de Densidade Populacional e PIB carta 1
    densidadePopulacional_1 = populacao_1 / area_1;
    pibPerCapita_1 = pib_1 / populacao_1; 

    //Imprime os dados da primeira carta
    printf("CARTA 1");
    printf("\nEstado: %s", estado_1);
    printf("Codigo: %d\n", codigoCarta_1);
    printf("Cidade: %s", nomeCidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: R$%.2f\n", pibPerCapita_1);
    printf("Densidade Populacional: %.f hab/km²", densidadePopulacional_1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos_1);

    
    
    //Inserir dados da segunda carta
    printf("Cadastre a carta 2:");
    
    printf("\nEstado: ");
    fgets(estado_2, sizeof(estado_2), stdin);
    
    printf("\nCodigo: ");
    scanf(" %d", &codigoCarta_2);
    getchar();
    
    printf("\nNome da Cidade: ");
    fgets(nomeCidade_2, sizeof(nomeCidade_2), stdin);
    
    printf("\nPopulacao: ");
    scanf(" %d", &populacao_2);
    
    printf("\nArea (em km²): ");
    scanf(" %f", &area_2);
    
    printf("\nPIB: ");
    scanf(" %f", &pib_2);
    
    printf("\nNumero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos_2);

    //Calculo de Densidade Populacional e PIB carta 2
    densidadePopulacional_2 = populacao_2 / area_2;
    pibPerCapita_2 = pib_2 / populacao_2; 

    //Imprime os dados da segunda carta
    printf("CARTA 2");
    printf("\nEstado: %s", estado_2);
    printf("Codigo: %d\n", codigoCarta_2);
    printf("Cidade: %s", nomeCidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: R$%.2f\n", pibPerCapita_2);
    printf("Densidade Populacional: %.f hab/km²", densidadePopulacional_2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos_2);



    return 0;
}
