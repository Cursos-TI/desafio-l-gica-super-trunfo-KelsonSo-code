#include <stdio.h>

int main(){

    // Estrutura Carta A
    char estado[20] = "Pernambuco"; // Nome do estado em que a cidade pertence
    char nome[30] = "Recife"; // Nome da cidade
    char codCarta[3] = "R01"; // Código postal da cidade
    int populacao = 1230200; // População da cidade
    float area = 21321.52; // Área em km2
    float pib = 545214546; // PIB da cidade
    int numTur = 75; // Número de pontos turísticos
    float densiPop = populacao / area; //densidade demográfica população / área
    float pibPerCa = pib / populacao; // PIB per capita




    // Estrutura Carta B
    char estado2[20] = "Paraíba"; // Nome do estado em que a cidade pertence
    char nome2[30] = "João Pessoa"; // Nome da cidade
    char codCarta2[3] = "J03"; // Código postal da cidade
    int populacao2 = 1154321; // População da cidade
    float area2 = 3265135456; // Área em km2
    float pib2 = 455665421; // PIB da cidade
    int numTur2 = 62; // Número de pontos turísticos
    float densiPop2 = populacao2 / area2; //densidade demográfica população / área
    float pibPerCa2 = pib2 / populacao2; // PIB per capita


    // Estrutura para print das duas cartas na tela

    if (pib > pib2)
    {   
        printf("PIB %s: %f \n", nome, pib);
        printf("PIB %s: %f \n", nome2, pib2);
        printf("A carta de %s venceu!\n", nome);
    } else {
        if(pib == pib2){
            printf("PIB %s: %f \n", nome, pib);
            printf("PIB %s: %f \n", nome2, pib2);
            printf("O Resultado deu empate!");
        } else {
            printf("PIB %s: %f \n", nome, pib);
            printf("PIB %s: %f \n", nome2, pib2);
            printf("A carta de %s venceu!\n", nome2);
        }
    }
    
    


    return 0;
}