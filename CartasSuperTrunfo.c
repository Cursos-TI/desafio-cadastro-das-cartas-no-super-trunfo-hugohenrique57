#include <stdio.h>


int main() {
//variaveis carta 1
    int pontos_turis_C1;

    float area_C1, PIB_C1, densi_populacional1; //densidade populacional: Populaçao / Area (km²)

    float PIB_per_capita1; //PIB per Capta : PIB / Populaçao

    char nome_C1[50], Cod_C1[10], estado1;

    unsigned long int populacao1;

    float superpoder1;

//variaveis carta 2
    int pontos_turis_C2;

    float area_C2, PIB_C2, densi_populacional2;

    float PIB_per_capita2;

    char nome_C2[50], Cod_C2[10], estado2;

    unsigned long int populacao2;

     float superpoder2;

//Entrada de dados
//carta1-----------------------------------------
    printf("---->Carta 1<---- \n");

    printf("Digite o Estado \n:"); // uma letra de 'A' a 'H'
    scanf(" %c", &estado1);

    printf("Digite o Codigo Ex(S01) \n:");
    scanf("%s", Cod_C1);

    printf("Digite o Nome da cidade \n:");
    scanf("%s", nome_C1 );

    printf("Digite o numero de habitantes \n:");
    scanf("%lu", &populacao1);

    printf("Digite a Área (KM²) \n:");
    scanf("%f", &area_C1);

    printf("Digite o PIB \n:");
    scanf("%f", &PIB_C1 );

    printf("Digite o Numero de pontos turisticos \n:");
    scanf("%d", &pontos_turis_C1);

    
//carta2----------------------------------------
    printf("---->Carta 2<----\n");

    printf("Digite o Estado \n:"); // uma letra de 'A' a 'H'
    scanf(" %c", &estado2);

    printf("Digite o Codigo \n:");
    scanf("%s", Cod_C2);

    printf("Digite o Nome da cidade \n:");
    scanf("%s", nome_C2 );

    printf("Digite o numero de habitantes \n:");
    scanf("%lu", &populacao2);

    printf("Digite a Área(KM²)\n:");
    scanf("%f", &area_C2);

    printf("Digite o PIB \n:");
    scanf("%f", &PIB_C2 );

    printf("Digite o Numero de pontos turisticos \n:");
    scanf("%d", &pontos_turis_C2);
//exibiçao de dados
//carta1----------------------------------------------------------
    printf("---->Carta1<----\n");

    printf("Estado: %c\n", estado1);

    printf("Codigo: %s\n", Cod_C1);

    printf("Nome da cidade: %s\n", nome_C1);

    printf("Populaçao: %lu\n", populacao1);

    printf("Área(KM²): %.3f\n", area_C1);

    printf("PIB: %.2f\n", PIB_C1);

    printf("Numero de pontos turisticos: %d\n", pontos_turis_C1);

    densi_populacional1 = (float)  populacao1 / area_C1;
    printf("Densidade Populacional: %.2f\n", densi_populacional1);

    PIB_per_capita1 =  PIB_C1 / (float) populacao1;
    printf("PIB per Capta: %.2f (R$) \n",PIB_per_capita1);

    superpoder1 = (float) populacao1 + area_C1 + PIB_C1 + (float) pontos_turis_C1 + densi_populacional1 + PIB_per_capita1;
    printf("superpoder: %.2f\n", superpoder1);
//carta2----------------------------------------------------------
    printf("---->Carta2<----\n");

    printf("Estado: %c\n", estado2);

    printf("Codigo: %s\n", Cod_C2);

    printf("Nome da cidade: %s\n", nome_C2);

    printf("Populaçao: %lu\n", populacao2);

    printf("Área(KM²): %.3f\n", area_C2);

    printf("PIB: %.2f\n", PIB_C2);

    printf("Numero de pontos turisticos: %d\n", pontos_turis_C2);

    densi_populacional2 = (float) populacao2 / area_C2;
    printf("Densidade Populaciona2: %.2f\n", densi_populacional2);

    PIB_per_capita2 =  PIB_C2 / (float) populacao2;
    printf("PIB per Capta: %.2f (R$) \n",PIB_per_capita2);

    superpoder2 = (float) populacao2 + area_C2 + PIB_C2 + (float) pontos_turis_C2 + densi_populacional2 + PIB_per_capita2;
    printf("superpoder2: %.2f\n", superpoder2);
//comparacao----------------------------------------------------------------------
 
    printf("--------Comparando Cartas--------\n");

    printf("                             ----> carta 1 vence: (1) ---- carta 2 vence: (0) <---- \n");

    printf("Populaçao: %d\n", populacao1 > populacao2);

    printf("Área(KM²): %d\n", area_C1 > area_C2);

    printf("PIB: %d\n", PIB_C1 > PIB_C2);

    printf("Numero de pontos turisticos: %d\n", pontos_turis_C1 > pontos_turis_C2);

    printf("Densidade Populaciona2: %d\n", densi_populacional1 > densi_populacional2);

    printf("PIB per Capta: %d\n",  PIB_per_capita1 >  PIB_per_capita2 );

    printf("Super poder: %d\n", superpoder1 > superpoder2);

    return 0;

}


