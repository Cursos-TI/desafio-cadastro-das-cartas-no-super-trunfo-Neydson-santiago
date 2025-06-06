#include <stdio.h>

// Desafio Super Trunfo - Países Tema 1 - Cadastro das Cartas
int main() {
    // Definição de variáveis: população, área, PIB, número de pontos turísticos.
    int populacaoa1,populacaoa2,turisticosa1,turisticosa2;
    float areaa1,areaa2,piba1,piba2;

    // Cadastro das Cartas:
    // Solicitando ao usuário que insira as informações de cada cidade: população, área, pib e numero e pontos turisticos
    printf("Digite a população da cidade A1: \n");
    scanf("%d", &populacaoa1);

    printf("Digite a area da cidade A1(exemplo - 22.50): \n");
    scanf("%f", &areaa1);

    printf("Digite o pib da cidade A1(exemplo - 22.50): \n");
    scanf("%f", &piba1);

    printf("Digite a quantidade de numeros turisticos da cidade A1: \n");
    scanf("%d", &turisticosa1);

        printf("Digite a população da cidade A2: \n");
    scanf("%d", &populacaoa2);

    printf("Digite a area da cidade A2(exemplo - 22.50): \n");
    scanf("%f", &areaa2);

    printf("Digite o pib da cidade A2(exemplo - 22.50): \n");
    scanf("%f", &piba2);

    printf("Digite a quantidade de numeros turisticos da cidade A2: \n");
    scanf("%d", &turisticosa2);
    
    // Exibição dos Dados das Cartas:
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha, pula 2 linhas pra o outro cartão.

    printf("Cartão da Cidade A1 \n População: %d \n Area: %.2f \n Pib: %.2f \n Numero de pontos Turisticos: %d \n\n", populacaoa1,areaa1,piba1,turisticosa1);
    printf("Cartão da Cidade A2 \n População: %d \n Area: %.2f \n Pib: %.2f \n Numero de pontos Turisticos: %d \n\n", populacaoa2,areaa2,piba2,turisticosa2);

    return 0;
}