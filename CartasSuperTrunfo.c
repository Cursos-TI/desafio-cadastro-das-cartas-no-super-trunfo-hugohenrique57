#include <stdio.h>


int main() {
//variaveis carta 1
    int hab_C1,  pontos_turis_C1;
    float area_C1, PIB_C1;
    char nome_C1[50], Cod_C1[20];
    char estado1;
//variaveis carta 2
    int hab_C2,  pontos_turis_C2;
    float area_C2, PIB_C2;
    char nome_C2[50], Cod_C2[20];
    char estado2;
//codigo de entrada.
//carta1
    printf("---->Carta 1<---- \n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", &Cod_C1);
    printf("Nome da cidade: ");
    scanf("%s", &nome_C1 );
    printf("Populaçao: ");
    scanf("%d", &hab_C1);
    printf("Área: ");
    scanf("%f", &area_C1);
    printf("PIB: ");
    scanf("%f", &PIB_C1 );
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turis_C1);
    printf("\n")
//carta2
    printf("---->Carta 2<----\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", &Cod_C2);
    printf("Nome da cidade: ");
    scanf("%s", &nome_C2 );
    printf("Populaçao: ");
    scanf("%d", &hab_C2);
    printf("Área: ");
    scanf("%f", &area_C2);
    printf("PIB: ");
    scanf("%f", &PIB_C2 );
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turis_C2);
//saida
//carta1
    printf("---->Carta1<----");
    printf("Estado: %c", estado1);
    printf("Codigo: %s", Cod_C1);
    printf("Nome da cidade: %s", nome_C1);
    printf("Populaçao: %d", hab_C1);
    printf("Área: %f", area_C1);
    printf("PIB: %f", PIB_C1);
    printf("Numero de pontos turisticos: %d", pontos_turis_C1);
//carta2
    printf("---->Carta2<----");
    printf("Estado: %c", estado2);
    printf("Codigo: %s", Cod_C2);
    printf("Nome da cidade: %s", nome_C2);
    printf("Populaçao: %d", hab_C2);
    printf("Área: %f", area_C2);
    printf("PIB: %f", PIB_C2);
    printf("Numero de pontos turisticos: %d", pontos_turis_C2);



return 0;

}

