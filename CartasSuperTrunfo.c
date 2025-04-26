#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char codigo1[41], codigo2[41];
    char Cidade1[42], Cidade2[43];
    int Populacao1, Populacao2;
    int Turisticos1, Turisticos2;
    float area1, area2;
    float PIB1, PIB2;

    printf("Vamos cadastrar a primeira carta: \n");

    printf("Digite o nome de um Estado de A a H: \n");
    scanf(" %s", &Estado1);

    printf("Digite o codigo da carta 1: \n");
    scanf("%40s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%41s", Cidade1);

    printf("Digite o numero da população: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Area em km²: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno Bruto: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero dos pontos turisticos: \n");
    scanf("%d", &Turisticos1);

    printf("Agora vamos cadastrar a segunda carta: \n");

    printf("Digite o nome de um Estado de A a H: \n");
    scanf(" %s", &Estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf("%40s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%42s", Cidade2);

    printf("Digite o numero da população: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o produto interno Bruto: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero dos pontos turisticos: \n");
    scanf("%d", &Turisticos2);

    printf("Carta 01 \n");
    printf("Estado: %c \n", Estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Pontos turisticos: %d \n", Turisticos1);
    printf("Área em km²: %f\n", area1);
    printf("Produto interno bruto: %f \n", PIB1);

    printf("Carta 02 \n");
    printf("Estado: %c \n", Estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Pontos turisticos: %d \n", Turisticos2);
    printf("Área em km²: %f\n", area2);
    printf("Produto interno bruto: %f \n", PIB2);

    return 0;
}