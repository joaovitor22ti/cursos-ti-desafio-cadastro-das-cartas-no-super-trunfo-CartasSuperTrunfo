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

     // Menu interativo para escolher o atributo de comparação
     int opcao;
     printf("\nEscolha o atributo para comparar:\n");
     printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade demográfica\n");
     printf("Digite sua opção: ");
     scanf("%d", &opcao);
 
     printf("\nComparação de Cartas:\n");
     switch (opcao) {
         case 1:
             printf("População: %lu vs %lu\n", populacao1, populacao2);
             printf("%s venceu!\n", (populacao1 > populacao2) ? nomecidade1 : (populacao1 < populacao2) ? nomecidade2 : "Empate");
             break;
         case 2:
             printf("Área: %.2f km2 vs %.2f km2\n", areacidade1, areacidade2);
             printf("%s venceu!\n", (areacidade1 > areacidade2) ? nomecidade1 : (areacidade1 < areacidade2) ? nomecidade2 : "Empate");
             break;
         case 3:
             printf("PIB: %.2f vs %.2f\n", pibcidade1, pibcidade2);
             printf("%s venceu!\n", (pibcidade1 > pibcidade2) ? nomecidade1 : (pibcidade1 < pibcidade2) ? nomecidade2 : "Empate");
             break;
         case 4:
             printf("Número de pontos turísticos: %d vs %d\n", numeropontosturisticoscidade1, numeropontosturisticoscidade2);
             printf("%s venceu!\n", (numeropontosturisticoscidade1 > numeropontosturisticoscidade2) ? nomecidade1 : (numeropontosturisticoscidade1 < numeropontosturisticoscidade2) ? nomecidade2 : "Empate");
             break;
         case 5:
             printf("Densidade demográfica: %.2f vs %.2f\n", densidadePopulacional1, densidadePopulacional2);
             printf("%s venceu!\n", (densidadePopulacional1 < densidadePopulacional2) ? nomecidade1 : (densidadePopulacional1 > densidadePopulacional2) ? nomecidade2 : "Empate");
             break;
         default:
             printf("Opção inválida!\n");
     }

    return 0;
}
