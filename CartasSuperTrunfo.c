#include <stdio.h>
#include <stdlib.h>

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

    char estado1[50], estado2[50];
    char codigocarta1[50], codigocarta2[50];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    float areacidade1, areacidade2;
    float pibcidade1, pibcidade2;
    int numeropontosturisticoscidade1, numeropontosturisticoscidade2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    
    // Entrada de dados para a carta 01
    printf("Digite o Estado da carta 01: ");
    scanf(" %[^\n]s", estado1);
    
    printf("Digite o Código da carta 01: ");
    scanf(" %[^\n]s", codigocarta1);

    printf("Digite o nome da Cidade 01: ");
    scanf(" %[^\n]s", nomecidade1);
    
    printf("Digite a População da Cidade 01: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área em km² da Cidade 01: ");
    scanf("%f", &areacidade1);

    printf("Digite o PIB da Cidade 01: ");
    scanf("%f", &pibcidade1);

    printf("Digite o Número de Pontos Turísticos da Cidade 01: ");
    scanf("%d", &numeropontosturisticoscidade1);

    densidadePopulacional1 = (areacidade1 > 0) ? (populacao1 / areacidade1) : 0;
    pibPerCapita1 = (populacao1 > 0) ? (pibcidade1 / populacao1) : 0;

    // Entrada de dados para a carta 02
    printf("Digite o Estado da carta 02: ");
    scanf(" %[^\n]s", estado2);

    printf("Digite o Código da carta 02: ");
    scanf(" %[^\n]s", codigocarta2);

    printf("Digite o nome da Cidade 02: ");
    scanf(" %[^\n]s", nomecidade2);

    printf("Digite a População da Cidade 02: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área em km² da Cidade 02: ");
    scanf("%f", &areacidade2);

    printf("Digite o PIB da Cidade 02: ");
    scanf("%f", &pibcidade2);

    printf("Digite o Número de Pontos Turísticos da Cidade 02: ");
    scanf("%d", &numeropontosturisticoscidade2);

    densidadePopulacional2 = (areacidade2 > 0) ? (populacao2 / areacidade2) : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pibcidade2 / populacao2) : 0;

      // Menu interativo para escolher atributos
      char primeiroAtributo, segundoAtributo;
      int resultado1 = 0, resultado2 = 0;
  
      printf("\nEscolha o primeiro atributo:\n");
      printf("A. Pontos Turísticos\nB. Densidade Populacional (MENOR VENCE)\nC. População\n");
      printf("Escolha: ");
      scanf(" %c", &primeiroAtributo);
  
      switch (primeiroAtributo) {
          case 'A': case 'a':
              printf("Atributo 1 (%c): %s = %d, %s = %d\n", primeiroAtributo, nomecidade1, numeropontosturisticoscidade1, nomecidade2, numeropontosturisticoscidade2);
              resultado1 = numeropontosturisticoscidade1 > numeropontosturisticoscidade2;
              break;
          case 'B': case 'b':
              printf("Atributo 1 (%c): %s = %.2f, %s = %.2f\n", primeiroAtributo, nomecidade1, densidadePopulacional1, nomecidade2, densidadePopulacional2);
              resultado1 = densidadePopulacional1 < densidadePopulacional2; // MENOR vence
              break;
          case 'C': case 'c':
              printf("Atributo 1 (%c): %s = %lu, %s = %lu\n", primeiroAtributo, nomecidade1, populacao1, nomecidade2, populacao2);
              resultado1 = populacao1 > populacao2;
              break;
          default:
              printf("Opção inválida!\n");
              return 1;
      }
  
      printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
      printf("A. Pontos Turísticos\nB. Densidade Populacional (MENOR VENCE)\nC. População\n");
      printf("Escolha: ");
      scanf(" %c", &segundoAtributo);
  
      if (primeiroAtributo == segundoAtributo) {
          printf("Erro: Você escolheu o mesmo atributo duas vezes!\n");
          return 1;
      }
  
      switch (segundoAtributo) {
          case 'A': case 'a':
              printf("Atributo 2 (%c): %s = %d, %s = %d\n", segundoAtributo, nomecidade1, numeropontosturisticoscidade1, nomecidade2, numeropontosturisticoscidade2);
              resultado2 = numeropontosturisticoscidade1 > numeropontosturisticoscidade2;
              break;
          case 'B': case 'b':
              printf("Atributo 2 (%c): %s = %.2f, %s = %.2f\n", segundoAtributo, nomecidade1, densidadePopulacional1, nomecidade2, densidadePopulacional2);
              resultado2 = densidadePopulacional1 < densidadePopulacional2; // MENOR vence
              break;
          case 'C': case 'c':
              printf("Atributo 2 (%c): %s = %lu, %s = %lu\n", segundoAtributo, nomecidade1, populacao1, nomecidade2, populacao2);
              resultado2 = populacao1 > populacao2;
              break;
          default:
              printf("Opção inválida!\n");
              return 1;
      }
  
      printf("\nPontuação Final: %s = %d pontos, %s = %d pontos\n", nomecidade1, resultado1 + resultado2, nomecidade2, 2 - (resultado1 + resultado2));
  
      if (resultado1 + resultado2 > 1) {
          printf("%s venceu!\n", nomecidade1);
      } else if (resultado1 + resultado2 < 1) {
          printf("%s venceu!\n", nomecidade2);
      } else {
          printf("Empate!\n");
      }
  

    return 0;
}
