#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[50];
    char codigocarta1[50];
    char nomecidade1[50];
    unsigned long int populacao1;
    float areacidade1;
    float pibcidade1;
    int numeropontosturisticoscidade1;
    float densidadePopulacional1;
    float  pibPerCapita1;
    float superPoderCarta01;

    char estado2[50];
    char codigocarta2[50];
    char nomecidade2[50];
    unsigned long int populacao2;
    float areacidade2;
    float pibcidade2;
    int numeropontosturisticoscidade2;
    float densidadePopulacional2;
    float  pibPerCapita2;
    float superPoderCarta02;

    //Aqui é onde vai ser a entrada de dados da carta 01
    printf("Digite o Estado da carta 01: \n");
    scanf("%s", estado1);

    printf("Digite o Código da carta 01: \n");
    scanf("%s", codigocarta1);

    printf("Digite o Nome da Cidade 01: \n");
    scanf("%s", nomecidade1);

    printf("Digite a População da Cidade 01: \n");
    scanf("%u", &populacao1);

    printf("Digite a Área em km2 da Cidade 01: \n");
    scanf("%f", &areacidade1);

    printf("Digite o PIB da Cidade 01: \n");
    scanf("%f", &pibcidade1);

    printf("Digite o Número de Pontos Turísticos da Cidade 01: \n");
    scanf("%d", &numeropontosturisticoscidade1);

    densidadePopulacional1 = (double) populacao1 / areacidade1;
    pibPerCapita1 = (double) pibcidade1 / (double)populacao1;

    superPoderCarta01 = (double)populacao1 + (double)areacidade1 + (double)pibcidade1 + (double) numeropontosturisticoscidade1 + (double) pibPerCapita1 + (double)1/densidadePopulacional1;

    //Aqui é onde vai ser a entrada de dados da carta 02
    printf("Digite o Estado da carta 02: \n");
    scanf("%s", estado2);

    printf("Digite o Código da carta 02: \n");
    scanf("%s", codigocarta2);

    printf("Digite o Nome da Cidade 02: \n");
    scanf("%s", nomecidade2);

    printf("Digite a População da Cidade 02: \n");
    scanf("%u", &populacao2);

    printf("Digite a Área em km2 da Cidade 02: \n");
    scanf("%f", &areacidade2);

    printf("Digite o PIB da Cidade 02: \n");
    scanf("%f", &pibcidade2);

    printf("Digite o Número de Pontos Turísticos da Cidade 02: \n");
    scanf("%d", &numeropontosturisticoscidade2);

    densidadePopulacional2 = (double) populacao2 / areacidade2;
    pibPerCapita2 = (double) pibcidade2 / (double)populacao2;

    superPoderCarta02 = (double)populacao2 + (double)areacidade2 + (double)pibcidade2 + (double) numeropontosturisticoscidade2 + (double) pibPerCapita2 + (double)1/densidadePopulacional2;




    //Isso vai mostrar os dados informados da carta 01
    printf("DADOS DA CARTA 01: \n");
    printf("Estado da Carta 01: %s\n", estado1);
    printf("Código da Carta 01: %s\n", codigocarta1);
    printf("Nome da Cidade 01: %s\n", nomecidade1);
    printf("População da Cidade 01: %d\n", populacao1);
    printf("Área da Cidade 01: %.2f \n", areacidade1);
    printf("O PIB da Cidade 01: %.2f \n", pibcidade1);
    printf("Números de Pontos Turísticos da Cidade 01: %d \n", numeropontosturisticoscidade1);
    printf("A Densidade Populacional da Cidade 01 : %.2f \n", densidadePopulacional1);
    printf("O PIB per capita da Cidade 01: %.2f \n",pibPerCapita1);
    printf("O valor de Super Poder da Carta 01 : %.2f\n", superPoderCarta01);

    //Isso vai mostrar os dados informados da carta 02
    printf("DADOS DA CARTA 02: \n");
    printf("Estado da Carta 02: %s\n", estado2);
    printf("Código da Carta 02: %s\n", codigocarta2);
    printf("Nome da Cidade 02: %s\n", nomecidade2);
    printf("População da Cidade 02: %d\n", populacao2);
    printf("Área da Cidade 02: %.2f \n", areacidade2);
    printf("O PIB da Cidade 02: %.2f \n", pibcidade2);
    printf("Números de Pontos Turísticos da Cidade 02: %d \n", numeropontosturisticoscidade2);
    printf("A Densidade Populacional da Cidade 02 : %.2f \n", densidadePopulacional2);
    printf("O PIB per capita da Cidade 02: %.2f \n",pibPerCapita2);
    printf("O valor de Super Poder da Carta 02 : %.2f\n", superPoderCarta02);

    //Comparação das Cartas
    printf("Comparação das Cartas:\n");
    printf("A população da Carta 01 é maior que a população da Carta02 ? %d\n", populacao1 > populacao2);
    printf("A área da Carta 01 é maior que a área da Carta 02 ? %d\n", areacidade1 > areacidade2);
    printf("O PIB da Carta 01 é maior que o Pib da Carta 02? %d\n", pibcidade1 > pibcidade2);
    printf("A quantidade de pontos turisticos da Carta 01 é maior que a quantidade de pontos turisticos da Carta 02? %d\n", numeropontosturisticoscidade1 > numeropontosturisticoscidade2);
    printf("A densidade populacional da Carta 01 é maior do que a densidade populacionalda Carta 02 ? %d\n",densidadePopulacional1 > densidadePopulacional2);
    printf("O pib per capita da Carta 01 é maior que o pib per capita da Carta 02 ? %d\n", pibPerCapita1 > pibPerCapita2);
    printf("O super poder da Carta 01 é maior do que o super poder da Carta 02 ? %d\n", superPoderCarta01 > superPoderCarta02);

    //Comparação de um atributo
    printf("COMPARAÇÃO DE CARTAS (Atributo:PIB) :\n");
    printf("Carta 1 - %s ",nomecidade1);
    printf(": %.2f\n",pibcidade1);
    printf("Carta 2 - %s ",nomecidade2);
    printf(": %.2f\n",pibcidade2);

    if (pibcidade1 > pibcidade2) {
        printf("Carta 1 venceu!");
    }else {
        printf("Carta 2 venceu! ");
    }

    return 0;
}
