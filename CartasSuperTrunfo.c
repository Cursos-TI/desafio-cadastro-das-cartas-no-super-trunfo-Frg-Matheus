#include <stdio.h>

/* Desafio Advanced */

int main()
{
    int ponto_turistico;
    char nome_estado[50], nome_cidade[50], cod_carta[50], enter;
    float area, pib, densidade, pib_per_capita, populacao;

    printf("Digite a sigla do estado: ");
    scanf("%s", nome_estado);
    
    printf("Digite o código da carta: ");
    scanf("%s", cod_carta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%f", &populacao);

    printf("Digite o valor da área (em km²) da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &ponto_turistico);

// ** CÁLCULOS **

    densidade = (populacao / area);
    pib_per_capita = (pib / populacao);

    printf("\n Carta 1 \n");
    printf("Estado: %s\n", nome_estado);
    printf("Cód. da Carta: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %i\n", populacao);
    printf("Área em KM²: %.0fkm²\n", area);
    printf("PIB: R$%.0f\n", pib);
    printf("Núm. de Pontos Turísticos: %i\n", ponto_turistico);

// ** Aparece Direto **
    printf("Densidade: %.3f \n", densidade);  
    printf("PIB per Capita: %.3f \n", pib_per_capita, '\n');  
// ---------------------------------------------------------------------------------------------------- //

printf("\n Para preencher a segunda carta digite 'ENTER' \n");  
scanf("%s", enter);

// ---------------------------------------------------------------------------------------------------- //
    // ** Carta 2 **
    printf("Digite a sigla do estado: ");
    scanf("%s", nome_estado);
    
    printf("Digite o código da carta: ");
    scanf("%s", cod_carta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%f", &populacao);

    printf("Digite o valor da área (em km²) da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &ponto_turistico);

// ** CÁLCULOS **

    densidade = (populacao / area);
    pib_per_capita = (pib / populacao);

    printf("\n Carta 2 \n");
    printf("Estado: %s\n", nome_estado);
    printf("Cód. da Carta: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %i\n", populacao);
    printf("Área em KM²: %.0fkm²\n", area);
    printf("PIB: R$%.0f\n", pib);
    printf("Núm. de Pontos Turísticos: %i\n", ponto_turistico);

// ** Aparece Direto **
    printf("Densidade: %.3f\n ", densidade);  
    printf("PIB per Capita: %.3f\n ", pib_per_capita);  
}
