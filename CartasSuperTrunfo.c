#include <stdio.h>

/* Desafio Novato */

int main()
{
    /* Carta 1 */
    int n_populacao, ponto_turistico;
    char nome_estado[50], nome_cidade[50], cod_carta[50];
    float area_km, pib;

    printf("Digite a sigla do estado: \n");
    scanf("%s", nome_estado);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%i", &n_populacao);

    printf("Digite o valor da área (em km²) da cidade: \n");
    scanf("%f", &area_km);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &ponto_turistico);

    printf("\n Carta \n Estado: %s\n Cód. da Carta: %s\n Nome da cidade: %s\n População: %i\n Área em KM²: %fkm²\n PIB:R$ %f\n Núm. de Pontos Turísticos: %i\n", nome_estado, cod_carta, nome_cidade, n_populacao, area_km, pib, ponto_turistico);

    /* Carta 2 */
    printf("\n Digite a sigla do estado: \n");
    scanf("%s", nome_estado);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%i", &n_populacao);

    printf("Digite o valor da área (em km²) da cidade: \n");
    scanf("%f", &area_km);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &ponto_turistico);

    printf("\n Estado: %s\n Cód. da Carta: %s\n Nome da cidade: %s\n População: %i\n Área em KM²: %fkm²\n PIB:R$ %f\n Núm. de Pontos Turísticos: %i\n", nome_estado, cod_carta, nome_cidade, n_populacao, area_km, pib, ponto_turistico);
}
