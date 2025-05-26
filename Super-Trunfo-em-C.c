#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    //Desafio niível novato / aventureiro / mestre
    //Criar um Super Trunfo com duas cartas

    //adiciona caracteres especiais
    setlocale(LC_ALL, "");


    //variaveis carta 1
    char estado_1[30] = "";
    int codigoCarta_1 = 0;
    char nomeCidade_1[30] = "";
    unsigned long int populacao_1 = 0;
    float area_1 = 0;
    float pib_1 = 0;
    int pontosTuristicos_1 = 0;
    float densidadePopulacional_1 = 0;
    float pibPerCapita_1 = 0;
    float superPoder_1 = 0;

    //variaveis carta 2
    char estado_2[30] = "";
    int codigoCarta_2 = 0;
    char nomeCidade_2[30] = "";
    unsigned long int populacao_2 = 0;
    float area_2 = 0;
    float pib_2 = 0;
    int pontosTuristicos_2 = 0;
    float densidadePopulacional_2 = 0;
    float pibPerCapita_2 = 0;
    float superPoder_2 = 0;

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

    //Calculo do Super Poder carta 1
    superPoder_1 = populacao_1 + area_1 + pib_1 + pontosTuristicos_1 + pibPerCapita_1 + (1.0 / densidadePopulacional_1);


    //Imprime os dados da primeira carta
    printf("\nCARTA 1");
    printf("\nEstado: %s", estado_1);
    printf("Codigo: %d\n", codigoCarta_1);
    printf("Cidade: %s", nomeCidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: R$%.2f\n", pib_1);
    printf("Densidade Populacional: %.2f hab/km²", densidadePopulacional_1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos_1);
    printf("Super Poder: %.2f\n", superPoder_1);

    
    
    //Inserir dados da segunda carta
    printf("\nCadastre a carta 2:");
    
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

    //Calculo do Super Poder carta 2
    superPoder_2 = populacao_2 + area_2 + pib_2 + pontosTuristicos_2 + pibPerCapita_2 + (1.0 / densidadePopulacional_2);

    //Imprime os dados da segunda carta
    printf("\nCARTA 2");
    printf("\nEstado: %s", estado_2);
    printf("Codigo: %d\n", codigoCarta_2);
    printf("Cidade: %s", nomeCidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: R$%.2f\n", pib_2);
    printf("Densidade Populacional: %.2f hab/km²", densidadePopulacional_2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos_2);
    printf("Super Poder: %.2f\n", superPoder_2);

    //Comparando carta vencedora
    int populacaoVencedora = populacao_1 > populacao_2;
    int areaVencedora = area_1 > area_2;
    int pibVencedor = pib_1 > pib_2;
    int pontosTuristicosVencedor = pontosTuristicos_1 > pontosTuristicos_2;
    int densidadePopulacionalVencedor = densidadePopulacional_1 < densidadePopulacional_2;
    int pibPerCapitaVencedor = pibPerCapita_1 > pibPerCapita_2;
    int superPoderVencedor = superPoder_1 > superPoder_2;
    


    //Mostando a carta vencedora
    printf("\nComparacao de Cartas:");
    printf("\nPopulacao: Carta %d venceu (%d)", populacaoVencedora +1, populacaoVencedora);
    printf("\nArea: Carta %d venceu (%d)", areaVencedora +1, areaVencedora);
    printf("\nPIB: Carta %d venceu (%d)", pibVencedor + 1, pibVencedor);
    printf("\nPontos Turisticos: Carta %d venceu (%d)", pontosTuristicosVencedor +1, pontosTuristicosVencedor);
    printf("\nDensidade Populacional: Carta %d venceu (%d)", densidadePopulacionalVencedor + 1, densidadePopulacionalVencedor);
    printf("\nPIB per Capita: Carta %d venceu (%d)", pibPerCapitaVencedor + 1, pibPerCapitaVencedor);
    printf("\nSuper Poder: Carta %d venceu (%d)", superPoderVencedor + 1, superPoderVencedor);



    return 0;
}
