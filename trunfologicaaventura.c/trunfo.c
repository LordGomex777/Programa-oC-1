#include <stdio.h>

int main(){
    //variaveis carta 1:

    char pais[20];
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    float densidade;
    float pibpercapita;
    int pontosturisticos;
    float SuperPoder1;

    //Variaveis carta 2:

    char pais2[20];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float pibpercapita2 ;
    int pontosturisticos2;
    float SuperPoder2;

    //Dados da carta 1:

    printf("cadastro carta: 1\n");
    printf("Digite o nome do pais: \n");
    scanf("%s", pais);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    printf("Informe a area(km2): \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);
    densidade = populacao/area;
    pibpercapita = pib/populacao;
    SuperPoder1 = populacao + area + pib + pontosturisticos + pibpercapita + densidade;

    //Dados da carta 2:

    printf("cadastro carta: 2\n");
    printf("Digite o nome do pais: \n");
    scanf("%s", pais2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Informe a area(km2): \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);
    densidade2 = populacao2/area2;
    pibpercapita2 = pib2/populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + densidade2;

    //Exibicao dos dados da carta 1:
    
    printf("\nCarta 1:\n");
    printf("Pais: %s\n", pais);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %f\n", densidade);
    printf("PIB per capita: %f\n", pibpercapita);
    printf("Super Poder: %.2f\n", SuperPoder1);

    //Exibicao dos dados da carta 2:

    printf("\nCarta 2:\n");
    printf("Pais: %s\n", pais2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB per capita: %f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    //Menu batalha carta 1 e 2:

    int opcao;

    printf("Escolha um atributo para batalhar: \n");
    
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Densidade populacional\n");
    printf("5. Pontos turisticos\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Populacao: %d vs %d\n", populacao, populacao2);
        if (populacao > populacao2){
        printf("Resultado: Carta 1 %s venceu!\n", pais);
        } else if (populacao < populacao2){
        printf("Resultado: Carta 2 %s venceu!\n", pais2);
        } else{
        printf("Empate!");
        }
        break;
    case 2:
        printf("Area: %f vs %f\n", area, area2);
        if (area > area2){
        printf("Resultado: Carta 1 %s venceu!\n", pais);
        } else if (area < area2){
        printf("Resultado: Carta 2 %s venceu!\n", pais2);
        } else{
        printf("Empate!\n");
        }
        break;
    case 3:
        printf("PIB: %f vs %f\n", pib, pib2);
        if (pib > pib2){
        printf("Resultado: Carta 1 %s venceu!\n", pais);
        } else if (pib < pib2){
        printf("Resultado: Carta 2 %s venceu!\n", pais2);
        } else {
        printf("Empate!\n");
        }
        break;
    case 4:
        printf("Desnidade populacional: %f vs %f\n", densidade, densidade2);
        if (densidade < densidade2){
        printf("Resultado: Carta 1 %s venceu!\n", pais);
        } else if (densidade > densidade2){
        printf("Resultado: Carta 2 %s venceu!\n", pais2);
        } else {
        printf("Empate!\n");
        }
        break;
    case 5:
        printf("Pontos turisticos: %d vs %d\n", pontosturisticos, pontosturisticos2);
    if (pontosturisticos > pontosturisticos2){
        printf("Resultado: Carta 1 %s venceu!\n", pais);
        } else if (pontosturisticos < pontosturisticos2){
        printf("Resultado: Carta 2 %s venceu!\n", pais2);
        } else{
        printf("Empate!\n");
        }
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
return 0;

}