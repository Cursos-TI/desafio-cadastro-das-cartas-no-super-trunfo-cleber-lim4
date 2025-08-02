#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //Declarações de variáveis
    int num_carta1,num_carta2;
    char estado1, cod_carta1[30], nome_cidade1[30];
    char estado2, cod_carta2[30], nome_cidade2[30];
    int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;

    //Registrando a primeira carta
    printf("======REGISTRO DE CARTAS - SUPER TRUNFO=====\n");

    printf("Número da carta: \n");
    scanf("%i", &num_carta1);

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da carta: \n");
    scanf("%s", &cod_carta1);

    printf("Nome da cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("População: \n");
    scanf("%i", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%i", &numero_pontos_turisticos1);

    //Carta 01 Registrada e registrando carta 02
    printf("=====CARTA 01 REGISTRADA!=====\n");

    printf("Número da carta: \n");
    scanf("%i", &num_carta2);

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código da carta: \n");
    scanf("%s", &cod_carta2);

    printf("Nome da cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("População: \n");
    scanf("%i", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%i", &numero_pontos_turisticos2);

    //Carta 02 Registrada
    printf("=====CARTA 02 REGISTRADA!=====\n");

     //Imprimindo os dados das cartas 01 e 02
    printf("=====DADOS CARTA 01!=====\n");

    printf("Número: %i\nEstado: %c\n", num_carta1, estado1);
    printf("Código: %s\nNome da cidade: %s\n", cod_carta1, nome_cidade1);
    printf("População: %i\nÁrea: %f km²\n", populacao1, area1);
    printf("PIB: %.2f Bilhões de reais\nNúmero de pontos turísticos: %i\n", pib1, numero_pontos_turisticos1);

    printf("=====DADOS CARTA 02!=====\n");

    printf("Número: %i\nEstado: %c\n", num_carta2, estado2);
    printf("Código: %s\nNome da cidade: %s\n", cod_carta2, nome_cidade2);
    printf("População: %i\nÁrea: %f km²\n", populacao2, area2);
    printf("PIB: %.2f Bilhões de reais\nNúmero de pontos turísticos: %i\n", pib2, numero_pontos_turisticos2);

    return 0;
}
