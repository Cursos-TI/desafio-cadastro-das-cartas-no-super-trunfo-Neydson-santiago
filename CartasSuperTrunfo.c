#include <stdio.h>

// Desafio Super Trunfo - Países Tema 1 - Cadastro das Cartas
int main() {
    // Definição de variáveis: população, área, PIB, número de pontos turísticos.
    int turisticosa1,turisticosa2;
    float areaa1,areaa2,piba1,piba2,densidadea1,densidadea2,pibpercapa1,pibpercapa2,supera1,supera2;
    unsigned long int populacaoa1,populacaoa2;

    // Cadastro das Cartas:
    // Solicitando ao usuário que insira as informações de cada cidade: população, área, pib e numero e pontos turisticos
    printf("Digite a populacao da cidade A1: \n");
    scanf("%lu", &populacaoa1);

    printf("Digite a area da cidade A1(exemplo - 22.50): \n");
    scanf("%f", &areaa1);

    printf("Digite o pib da cidade A1(exemplo - 22.50): \n");
    scanf("%f", &piba1);

    printf("Digite a quantidade de numeros turisticos da cidade A1: \n");
    scanf("%d", &turisticosa1);

    printf("Digite a populacao da cidade A2: \n");
    scanf("%lu", &populacaoa2);

    printf("Digite a area da cidade A2(exemplo - 22.50): \n");
    scanf("%f", &areaa2);

    printf("Digite o pib da cidade A2(exemplo - 22.50): \n");
    scanf("%f", &piba2);

    printf("Digite a quantidade de numeros turisticos da cidade A2: \n");
    scanf("%d", &turisticosa2);

    // Calculo das novas variaveis:
    // Densidade e pib per capita.

    densidadea1 = populacaoa1/areaa1;
    densidadea2 = populacaoa2/areaa2;
    pibpercapa1 = piba1/populacaoa1;
    pibpercapa2 = piba2/populacaoa2;

    // Exibição dos Dados das Cartas:
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha, pula 2 linhas pra o outro cartão.

    printf("Cartao da Cidade A1 \n Populacao: %lu \n Area: %.2f \n Pib: %.2f \n Numero de pontos Turisticos: %d \n Densidade Populacional: %.2f \n Pib Per Capita: %.2f \n\n", populacaoa1,areaa1,piba1,turisticosa1,densidadea1,pibpercapa1);
    printf("Cartao da Cidade A2 \n Populacao: %lu \n Area: %.2f \n Pib: %.2f \n Numero de pontos Turisticos: %d \n Densidade Populacional: %.2f \n Pib Per Capita: %.2f \n\n", populacaoa2,areaa2,piba2,turisticosa2,densidadea2,pibpercapa2);

    // Calculo do Super Poder das Cartas:
       supera1 = areaa1+piba1+pibpercapa1+(float)populacaoa1+(1/densidadea1);
       supera2 = areaa2+piba2+pibpercapa2+(float)populacaoa2+(1/densidadea2);
    
    // Comparação dos Dados das Cartas:
    // Comparando os valores inseridos para cada atributo da cidade, printando quem foi vencedor e testando se houve empate
    // Comparação da Area:
        if(areaa1>areaa2){
            printf("O Cartão A1 venceu em area!!! \n");
        }else if(areaa1<areaa2){
            printf("O Cartão A2 venceu em area!!! \n");
        }else{
            printf("O Cartão A1 e A2 empataram em area!!! \n");
        }
    // Comparação do Pib:
        if(piba1>piba2){
            printf("O Cartão A1 venceu em PIB!!! \n");
        }else if(piba1<piba2){
            printf("O Cartão A2 venceu em PIB!!! \n");
        }else{
            printf("O Cartão A1 e A2 empataram em PIB!!! \n");
        }
    // Comparação da Densidade Populacional:
        if(densidadea1<densidadea2){
            printf("O Cartão A1 venceu em Densidade Populacional!!! \n");
        }else if(densidadea1>densidadea2){
            printf("O Cartão A2 venceu em Densidade Populacional!!! \n");
        }else{
            printf("O Cartão A1 e A2 empataram em Densidade Populacional!!! \n");
        }
    // Comparação do Pib Per Capita:
        if(pibpercapa1>pibpercapa2){
            printf("O Cartão A1 venceu em PIB Per Capita!!! \n");
        }else if(pibpercapa1<pibpercapa2){
            printf("O Cartão A2 venceu em PIB Per Capita!!! \n");
        }else{
            printf("O Cartão A1 e A2 empataram em PIB Per Capita!!! \n");
        }
    // Comparação da População:
        if(populacaoa1>populacaoa2){
            printf("O Cartão A1 venceu em População!!! \n");
        }else if(populacaoa1<populacaoa2){
            printf("O Cartão A2 venceu em População!!! \n");
        }else{
            printf("O Cartão A1 e A2 empataram em População!!! \n");
        }
    // Comparação do Super Poder:
        if(supera1>supera2){
            printf("O Cartão A1 venceu em Super Poder!!! \n");
        }else if(supera1<supera2){
            printf("O Cartão A2 venceu em Super Poder!!! \n");
        }else{
            printf("O Cartão A1 e A2 empataram em Super Poder!!! \n");
        }
    return 0;
}