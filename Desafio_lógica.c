#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //CARTA 1
    char estado_carta1;
    char codigo_carta_carta1[50], nome_da_cidade_carta1[50];
    unsigned long int populacao_carta1, resultado1, resultado2;
    int pontos_turisticos_carta1, escolhamenu, comparacao1, comparacao2;
    float area_em_km_carta1, pib_carta1;
    float pib_per_capita_carta1, densidade_populacional_carta1;

    printf("Escolha a inicial: \n");
    scanf("%c", &estado_carta1);

    printf("Escolha o código da carta entre 01 e 04: \n");
    scanf(" %s", codigo_carta_carta1);

    printf("Escolha o nome da cidade: \n");
    scanf(" %s", nome_da_cidade_carta1);

    printf("Digite a quantida da população: \n");
    scanf("%lu", &populacao_carta1);

    printf("Número de pontos turísticos: \n");
    scanf("%i", &pontos_turisticos_carta1);

    printf("Digite a área em km: \n");
    scanf("%f", &area_em_km_carta1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_carta1);

    pib_per_capita_carta1 = (float) pib_carta1 / populacao_carta1;
    densidade_populacional_carta1 = (float) populacao_carta1 / area_em_km_carta1;


    printf("CARTA 1\n");
    printf("Inicial do Estado é: %c\nCódigo da carta é: %s\n", estado_carta1, codigo_carta_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta1);
    printf("População: %lu\n", populacao_carta1);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos_carta1);
    printf("A área em KM é: %.2f\nO PIB é: %.2f\n", area_em_km_carta1, pib_carta1);
    printf("O PIB per capita é: %.1f\nDensidade populacional: %.1f\n", pib_per_capita_carta1, densidade_populacional_carta1);


    //Carta 2

    char estado_carta2;
    char codigo_carta_carta2[50], nome_da_cidade_carta2[50];
    unsigned long int populacao_carta2;
    int pontos_turisticos_carta2;
    float area_em_km_carta2, pib_carta2;
    float pib_per_capita_carta2, densidade_populacional_carta2;

    printf("Escolha a inicial do segundo Estado: \n");
    scanf(" %c", &estado_carta2);  
    
    printf("Escolha um código para carta de 01 a 04 junto com a inicial do Estado: \n");
    scanf(" %s", codigo_carta_carta2);  
    
    printf("Escolha um nome para a cidade: \n");
    scanf(" %s", nome_da_cidade_carta2);  
    
    printf("Digite a quantidade da população: \n");
    scanf("%lu", &populacao_carta2);  
    
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%i", &pontos_turisticos_carta2);
    
    printf("Digite a área em km² da sua cidade: \n");
    scanf("%f", &area_em_km_carta2);
    
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib_carta2);

    densidade_populacional_carta2 = (float) populacao_carta2 / area_em_km_carta2;
    pib_per_capita_carta2 = (float) pib_carta2 / populacao_carta2;

    printf("CARTA 2\n");
    printf("Estado: %c\nCódigo da carta: %s\n", estado_carta2, codigo_carta_carta2);
    printf("Nome da sua cidade: %s\n", nome_da_cidade_carta2);
    printf("População: %lu\n", populacao_carta2);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos_carta2);
    printf("Área em KM²: %.2f\nPIB: R$ %.2f\n", area_em_km_carta2, pib_carta2);
    printf("A densidade populacional é: %.1f\nO PIB per capita é: %.1f\n", densidade_populacional_carta2, pib_per_capita_carta2);

    //Criação do menu interativo

    printf("Menu do Super Trunfo\n");
    printf("1. Iniciar combate\n");
    printf("2. Regras\n");
    printf("3. Sair do jogo\n");
    scanf("%d", &escolhamenu);


    switch (escolhamenu)
    {
    case 1:
        printf("Escolha o primeiro atributo de comparação:\n");
        printf("1. População\n");
        printf("2. Pontos turísticos\n");
        printf("3. Área\n");
        printf("4. P.I.B.\n");
        printf("5. P.I.B. per capita\n");
        printf("6. Densidade populacional\n");
        scanf("%d", &comparacao1);

        switch (comparacao1)
        {
        case 1:
            printf("ATRIBUTO POPULAÇÃO ESCOLHIDO!\n");
            printf("População %s: %lu  VS População %s: %lu\n", nome_da_cidade_carta1, populacao_carta1, nome_da_cidade_carta2, populacao_carta2);
            resultado1 = populacao_carta1 > populacao_carta2 ? 1 : 0;
            break;

        case 2:
            printf("PONTOS TURÍSTICOS!\n");
            printf("Pontos turísticos %s: %d  VS  Pontos turísticos %s: %d\n", nome_da_cidade_carta1, pontos_turisticos_carta1, nome_da_cidade_carta2, pontos_turisticos_carta2);
            resultado1 = pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 0;
            break;

        case 3:
            printf("Área!\n");
            printf("Área %s: %f  VS  Área %s: %f\n", nome_da_cidade_carta1, area_em_km_carta1, nome_da_cidade_carta2, area_em_km_carta2);
            resultado1 = area_em_km_carta1 > area_em_km_carta2 ? 1 : 0;
            break;

        case 4:
            printf("P.I.B.!\n");
            printf("P.I.B. %s: %2.f  VS  P.I.B. %s: %2.f\n", nome_da_cidade_carta1, pib_carta1, nome_da_cidade_carta2, pib_carta2);
            resultado1 = pib_carta1 > pib_carta2 ? 1 : 0;
            break;
        
        case 5:
            printf("P.I.B. per capita!\n");
            printf("P.I.B. per capita %s: %2.f  VS  P.I.B. per capita %s: %2.f\n", nome_da_cidade_carta1, pib_per_capita_carta1, nome_da_cidade_carta2, pib_per_capita_carta2);
            resultado1 = pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 0;
            break;

        case 6:
            printf("Densidade populacional!\n");
            printf("Densidade populacional %s: %f  VS  Densidade populacional %s: %f\n", nome_da_cidade_carta1, densidade_populacional_carta1, nome_da_cidade_carta2, densidade_populacional_carta2);
            resultado1 = densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 0;
            break;
            
        default:
            printf("Atributo inválido!\n");
            break;
        }
        break;



    case 2:
        printf("Regras\n");
        printf("1- O jogador deve cadastrar os atributos das suas cartas\n");
        printf("2- Você escolherá o atributo que irá se comparado entre as duas cartas\n");
        printf("3- A grande maioria dos atributos têm uma comparação simples de qual é o maior, com excessão da densidade populacional, que vence a carta com a menor\n");
        break;




    case 3:
        printf("Finalizando jogo!\n");
        break;



    
    default:
        printf("Opção inválida! Escolha uma das alternativas do menu.\n");
        break;
    }


    printf("Escolha o segundo atributo!\n");
    printf("1. População\n");
    printf("2. Pontos turísticos\n");
    printf("3. Área\n");
    printf("4. P.I.B.\n");
    printf("5. P.I.B. per capita\n");
    printf("6. Densidade populacional\n");
    scanf("%d", &comparacao2);


    if (comparacao1 == comparacao2)
    {
        printf("Você escolheu o mesmo atributo!\n");
    }else
    {
        switch (comparacao2)
        {
        case 1:
            printf("ATRIBUTO POPULAÇÃO ESCOLHIDO!\n");
            printf("População %s: %lu  VS População %s: %lu\n", nome_da_cidade_carta1, populacao_carta1, nome_da_cidade_carta2, populacao_carta2);
            resultado2 = populacao_carta1 > populacao_carta2 ? 1 : 0;
            break;

        case 2:
            printf("PONTOS TURÍSTICOS!\n");
            printf("Pontos turísticos %s: %d  VS  Pontos turísticos %s: %d\n", nome_da_cidade_carta1, pontos_turisticos_carta1, nome_da_cidade_carta2, pontos_turisticos_carta2);
            resultado2 = pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 0;
            break;

        case 3:
            printf("Área!\n");
            printf("Área %s: %f  VS  Área %s: %f\n", nome_da_cidade_carta1, area_em_km_carta1, nome_da_cidade_carta2, area_em_km_carta2);
            resultado2 = area_em_km_carta1 > area_em_km_carta2 ? 1 : 0;
            break;

        case 4:
            printf("P.I.B.!\n");
            printf("P.I.B. %s: %2.f  VS  P.I.B. %s: %2.f\n", nome_da_cidade_carta1, pib_carta1, nome_da_cidade_carta2, pib_carta2);
            resultado2 = pib_carta1 > pib_carta2 ? 1 : 0;
            break;
        
        case 5:
            printf("P.I.B. per capita!\n");
            printf("P.I.B. per capita %s: %2.f  VS  P.I.B. per capita %s: %2.f\n", nome_da_cidade_carta1, pib_per_capita_carta1, nome_da_cidade_carta2, pib_per_capita_carta2);
            resultado2 = pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 0;
            break;

        case 6:
            printf("Densidade populacional!\n");
            printf("Densidade populacional %s: %f  VS  Densidade populacional %s: %f\n",nome_da_cidade_carta1, densidade_populacional_carta1, nome_da_cidade_carta2, densidade_populacional_carta2);
            resultado2 = densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 0;
            break;
            
        default:
            printf("Atributo inválido!\n");
            break;
        }
    
    }
    
    
    if (resultado1 && resultado2)
    {
        printf("%s venceu a rodada!\n", nome_da_cidade_carta1);
    }else if (resultado1 != resultado2)
    {
        printf("A rodada terminou empatada com %s e %s tendo ganho 1 disputa cada! \n", nome_da_cidade_carta1, nome_da_cidade_carta2);
    }else
    {
        printf("%s venceu a rodada!\n", nome_da_cidade_carta2);
    }
    
    
    



    
    
    return 0;
    
}