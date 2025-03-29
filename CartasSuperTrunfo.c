#include <stdio.h>


int main() {
//variaveis carta 1
    int hab_C1,  pontos_turis_C1;
    float area_C1, PIB_C1;
    char nome_C1[50], Cod_C1[50];
    char estado1;
//variaveis carta 2
    int hab_C2,  pontos_turis_C2;
    float area_C2, PIB_C2;
    char nome_C2[50], Cod_C2[50];
    char estado2;
//codigo de entrada.
//carta1-----------------------------------------
    printf("---->Carta 1<---- \n");

    printf("Digite o Estado \n:"); // uma letra de 'A' a 'H'
    scanf(" %c", &estado1);

    printf("Digite o Codigo Ex(S01) \n:");
    scanf("%s", &Cod_C1);

    printf("Digite o Nome da cidade \n:");
    scanf("%s", &nome_C1 );

    printf("Digite a Populaçao \n:");
    scanf("%d", &hab_C1);

    printf("Digite a Área \n:");
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
    scanf("%s", &Cod_C2);

    printf("Digite o Nome da cidade \n:");
    scanf("%s", &nome_C2 );

    printf("Digite a Populaçao \n:");
    scanf("%d", &hab_C2);

    printf("Digite a Área \n:");
    scanf("%f", &area_C2);

    printf("Digite o PIB \n:");
    scanf("%f", &PIB_C2 );

    printf("Digite o Numero de pontos turisticos \n:");
    scanf("%d", &pontos_turis_C2);
//saida
//carta1----------------------------------------------------------
    printf("---->Carta1<----\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", Cod_C1);
    printf("Nome da cidade: %s\n", nome_C1);
    printf("Populaçao: %d\n", hab_C1);
    printf("Área: %f\n", area_C1);
    printf("PIB: %f\n", PIB_C1);
    printf("Numero de pontos turisticos: %d\n", pontos_turis_C1);
//carta2----------------------------------------------------------
    printf("---->Carta2<----\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", Cod_C2);
    printf("Nome da cidade: %s\n", nome_C2);
    printf("Populaçao: %d\n", hab_C2);
    printf("Área: %f\n", area_C2);
    printf("PIB: %f\n", PIB_C2);
    printf("Numero de pontos turisticos: %d\n", pontos_turis_C2);



return 0;

}


