#include <stdio.h>
#include <string.h>
//Nivél Novato.
int main() {
    printf("Cartas Super Trunfo - Cadastro de Cidades\n");

    printf("Carta 1\n");
// Declaração das variáveis
    char Estado;
    printf("Digite a Letra do Estado: ");
    scanf(" %c", &Estado); // espaço antes do %c para ignorar enter anterior
    printf("A letra do Estado é: %c\n", Estado);

    char CodigoDaCarta[10];
    printf("Digite o codigo da carta: ");
    scanf("%9s", CodigoDaCarta);
    printf("O Codigo da Carta é: %s\n", CodigoDaCarta);

    char NomeDaCidade[40];
    printf("Digite o nome da cidade: ");
    getchar(); // Limpa o buffer antes de fgets
    fgets(NomeDaCidade, sizeof(NomeDaCidade), stdin);

    NomeDaCidade[strcspn(NomeDaCidade, "\n")] = 0;
    printf("O nome da cidade é: %s\n", NomeDaCidade);

    int Populacao;
    printf("Digite o numero da população: ");
    scanf("%d", &Populacao);
    printf("O numero da população é: %d\n", Populacao);
//Tive dificuldade de separaras declarações aqui.
    float Area;
    printf("Digite a area da cidade: ");
    scanf("%f\n", &Area);
    printf("A area da cidade é: %f\n", Area);

    float PIB;
    printf("Digite o PIB da cidade: ");
    scanf("%f\n", &PIB);
    printf("O PIB da cidade é: %f Bilhoes de reais", PIB);

    int NumeroDePontosTuristicos;
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d\n", &NumeroDePontosTuristicos);
    printf("O numero de pontos turisticos é: %d\n", NumeroDePontosTuristicos);



     printf("Carta 2\n");
    // Declaração das variáveis
        char Estado2;
        printf("Digite a Letra do Estado: ");
        scanf(" %c", &Estado); // espaço antes do %c para ignorar enter anterior
        printf("A letra do Estado é: %c\n", Estado);

        char CodigoDaCarta2[10];
        printf("Digite o codigo da carta: ");
        scanf("%9s", CodigoDaCarta);
        printf("O Codigo da Carta é: %s\n", CodigoDaCarta);

        char NomeDaCidade2[40];
        printf("Digite o nome da cidade: ");
        getchar(); // Limpa o buffer antes de fgets
        fgets(NomeDaCidade, sizeof(NomeDaCidade), stdin);

        NomeDaCidade[strcspn(NomeDaCidade, "\n")] = 0;
        printf("O nome da cidade é: %s\n", NomeDaCidade);

        int Populacao2;
        printf("Digite o numero da população: ");
        scanf("%d", &Populacao);
        printf("O numero da população é: %d\n", Populacao);

        float Area2;
        printf("Digite a area da cidade: ");
        scanf("%f\n", &Area);
        printf("A area da cidade é: %f\n", Area);

        float PIB2;
        printf("Digite o PIB da cidade: ");
        scanf("%f\n", &PIB);
        printf("O PIB da cidade é: %f Bilhoes de reais", PIB);

        int NumeroDePontosTuristicos2;
        printf("Digite o numero de pontos turisticos: ");
        scanf("%d\n", &NumeroDePontosTuristicos);
        printf("O numero de pontos turisticos é: %d\n", NumeroDePontosTuristicos);

