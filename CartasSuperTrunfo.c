#include <stdio.h>

int main() {

    char codigo_da_carta[20];
    char estado[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Bem vindo ao Super trunfo\n\n");

    printf("Escreva o codigo da carta:");
    scanf("%s", &codigo_da_carta);

    printf("Escreva o nome do estado: ");
    scanf("%s", &estado);

    printf("Escreva o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Escreva a população da cidade: ");
    scanf("%d", &populacao);
    

    printf("Escreva a área da cidade: ");
    scanf("%f", &area);

    printf("Escreva o PIB da cidade:");
    scanf("%f", &pib);

    printf("Escreva o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    printf("O codigo da carta é: %s\n", codigo_da_carta);
    printf("O seu estado é: %s\n", estado);
    printf("A sua cidade é: %s\n", cidade);
    printf("A população da cidade é de: %d habitantes \n", populacao);
    printf("A área da cidade é de: %.2f(km²)\n", area);
    printf("O PIB da cidade é %.2f Bilhões de Reais\n", pib);
    printf("A cidade tem %d pontos turísticos\n", pontos_turisticos);

    printf("\n\n");
    printf("Obrigado por jogar Super Trunfo!\n");

    return 0;




}
