#include <stdio.h>

int main() {
    
    char carta[20];       
    char codigo[20];          
    char estado[20];     
    char cidade[20];    
    double populacao;     
    float areakm;           
    float pib;            
    int pontosturisticos; 

    char carta1[20];
    char codigo1[20];
    char estado1[20];
    char cidade1[20];
    double populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;

  
    printf("=== Cadastro 1 ===\n");
    printf("Carta: ");
    scanf("%s\n", carta[20]);

    printf("Codigo: ");
    scanf("%s\n", codigo[20]);

    printf("Estado: ");
    scanf("%s\n", estado[20]);

    printf("Cidade: ");
    scanf("%s\n", cidade[20]);

    printf("Populacao: ");
    scanf("%lf\n", &populacao);

    printf("Area em km²: ");
    scanf("%f", &areakm);

    printf("PIB: ");
    scanf("%f\n", &pib);

    printf("Pontos turisticos: ");
    scanf("%d\n", &pontosturisticos );

    printf("\n=== Cadastro 2 ===\n");
    printf("Carta: ");
    scanf("%s", carta1[20]);

    printf("Codigo: ");
    scanf("%s", codigo1[20]);

    printf("Estado: ");
    scanf("%s\n", estado1[20]);

    printf("Cidade: ");
    scanf("%s\n", cidade1[20]);

    printf("Populacao: ");
    scanf("%lf\n", &populacao1);

    printf("Area em km²: ");
    scanf("%f\n", &areakm1);

    printf("PIB: ");
    scanf("%f\n", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d\n", &pontosturisticos1);

   
    return 0;
}
