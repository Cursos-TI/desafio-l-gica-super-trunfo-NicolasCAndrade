#include <stdio.h>

int main()
{

    /*Carta 1 */

    char estado1[2];
    char codigo1[4];
    char nomedacidade1[20];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float superpoder1;

    /*Adicionei Densidade Populacional e PIB per Capita */

    float densidade_populacional1;
    float pib_per_capita1;

    printf("Carta 1 \n");

    printf("Digite o Estado (A-H): \n");
    scanf("%1s", estado1);

    printf("Digite o Código: \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nomedacidade1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    /*Calculos da Densidade e do PIB*/

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("A Densidade Populacional é: %.3f\n", densidade_populacional1);
    printf("O PIB per Capita é: %.2f\n", pib_per_capita1);

    /*Carta 2 */

    char estado2[2];
    char codigo2[4];
    char nomedacidade2[20];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float superpoder2;

    /*Adicionei Densidade Populacional e PIB per Capita */

    float densidade_populacional2;
    float pib_per_capita2;

    printf("Carta 2 \n");

    printf("Digite o Estado (A-H): \n");
    scanf("%1s", estado2);

    printf("Digite o Código: \n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nomedacidade2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    /*Calculos da Densidade e do PIB*/

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("A Densidade Populacional é: %.3f\n", densidade_populacional2);
    printf("O PIB per Capita é: %.2f\n", pib_per_capita2);

    /*Tirei a partes dos resultados anteriores*/

    /*Escolhi usar todos os atributos para poder praticar */

    /*Resultado da Comparação População*/

    printf("Resultado da rodada População: \n");

    if (populacao1 > populacao2)
    {
        printf("A Carta 1 (%s) venceu!\n", nomedacidade1);
    }
    else
    {
        printf("A Carta 2 (%s) venceu!\n", nomedacidade2);
    }

    /*Resultado da Comparação Área*/

    printf("Resultado da rodada Área: \n");

    if (area1 > area2)
    {
        printf("A Carta 1 (%s) venceu!\n", nomedacidade1);
    }
    else
    {
        printf("A Carta 2 (%s) venceu!\n", nomedacidade2);
    }

    /*Resultado da Comparação PIB*/

    printf("Resultado da rodada PIB: \n");

    if (pib1 > pib2)
    {
        printf("A Carta 1 (%s) venceu!\n", nomedacidade1);
    }
    else
    {
        printf("A Carta 2 (%s) venceu!\n", nomedacidade2);
    }

    /*Resultado da Comparação Densidade Populacional*/

    printf("Resultado da rodada Densidade Populacional: \n");

    if (densidade_populacional1 < densidade_populacional2)
    {
        printf("A Carta 1 (%s) venceu!\n", nomedacidade1);
    }
    else
    {
        printf("A Carta 2 (%s) venceu!\n", nomedacidade2);
    }

    /*Resultado da Comparação PIB per Capita*/

    printf("Resultado da rodada PIB per Capita: \n");

    if (pib_per_capita1 > pib_per_capita2)
    {
        printf("A Carta 1 (%s) venceu!\n", nomedacidade1);
    }
    else
    {
        printf("A Carta 2 (%s) venceu!\n", nomedacidade2);
    }
 
    return 0;
}