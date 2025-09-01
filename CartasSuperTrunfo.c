#include <stdio.h>

int main(){
    //Declarações de variáveis
    int num_carta1,num_carta2;
    char estado1, cod_carta1[30], nome_cidade1[30];
    char estado2, cod_carta2[30], nome_cidade2[30];
    unsigned int populacao1, populacao2; //Trocamos de int para unsigned int
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
    
    //Atribuimos mais 2 variáveis do tipo float para os calculos de Densidade populacional e PIB per capita.
    //Isso pra carta 01
    float pibper_capita_c1 = (pib1 * 1000000000) / populacao1;
    float dens_populacional_c1 = (float) populacao1 / area1;
    double dens_pop_invertida1 = 1.0 / dens_populacional_c1; //Calculando Densidade Populacional
    //Somando os atributos da carta 01
    float super_poder1 = populacao1 + area1 + pib1 + numero_pontos_turisticos1 + pibper_capita_c1 + dens_pop_invertida1;

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

    //Atribuimos mais 2 variáveis do tipo float para os calculos de Densidade populacional e PIB per capita.
    //Isso pra carta 02
    float pibper_capita_c2 = (pib2 * 1000000000) / populacao2;
    float dens_populacional_c2 = (float) populacao2 / area2;
    double dens_pop_invertida2 = 1.0 / dens_populacional_c2; //Calculando Densidade Populacional
    //Somando os atributos da carta 02
    float super_poder2 = populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pibper_capita_c2 + dens_pop_invertida2;


    //Carta 02 Registrada
    printf("=====CARTA 02 REGISTRADA!=====\n");

     //Imprimindo os dados das cartas 01 e 02
    printf("=====DADOS CARTA 01!=====\n");

    printf("Número: %i\nEstado: %c\n", num_carta1, estado1);
    printf("Código: %s\nNome da cidade: %s\n", cod_carta1, nome_cidade1);
    printf("População: %i\nÁrea: %f km²\n", populacao1, area1);
    printf("PIB: %.2f Bilhões de reais\nNúmero de pontos turísticos: %i\n", pib1, numero_pontos_turisticos1);
    printf("Densidade Populacional: %f\n", dens_populacional_c1);
    printf("PIB per Capita: %.2f\n", pibper_capita_c1);
    printf("Seu super poder é de: %f\n", super_poder1);

    printf("=====DADOS CARTA 02!=====\n");

    printf("Número: %i\nEstado: %c\n", num_carta2, estado2);
    printf("Código: %s\nNome da cidade: %s\n", cod_carta2, nome_cidade2);
    printf("População: %i\nÁrea: %f km²\n", populacao2, area2);
    printf("PIB: %.2f Bilhões de reais\nNúmero de pontos turísticos: %i\n", pib2, numero_pontos_turisticos2);
    printf("Densidade Populacional: %f\n", dens_populacional_c2);
    printf("PIB per Capita: %.2f\n", pibper_capita_c2);
    printf("Seu super poder é de: %f\n", super_poder2);

    printf("=====COMPARAÇÃO ENTRE AS CARTAS | (0) Perdeu! - (1) Ganhou!=====\n");

    //Atribuindo variáveis que irão receber os resultados das comparações
    int densi_maior, densi_menor;
    int poder_maior, poder_menor;

    densi_maior = dens_pop_invertida1 > dens_pop_invertida2;
    densi_menor = dens_pop_invertida1 < dens_pop_invertida2;

    poder_maior = super_poder1 > super_poder2;
    poder_menor = super_poder1 < super_poder2;

    //Comparando as cartas
    printf("A densidade Pop. Invertida de carta 01 foi maior? (%d) --> (%f)\n", densi_maior, dens_pop_invertida1);
    printf("A densidade Pop. Invertida de carta 02 foi maior? (%d) --> (%f)\n", densi_menor, dens_pop_invertida2);
    printf("Super poder de carta 01 foi maior? (%d)\n", poder_maior);
    printf("Super poder de carta 02 foi maior? (%d)\n", poder_menor);

    return 0;
}