#include <stdio.h>

int main() {
    // Carta 1
    char estado1[2], codigo1[4], nomedacidade1[20];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1, pib1;
    float densidade_populacional1, pib_per_capita1;

    // Carta 2
    char estado2[2], codigo2[4], nomedacidade2[20];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2, pib2;
    float densidade_populacional2, pib_per_capita2;

    printf("----- Cadastro da Carta 1 -----\n");
    printf("Digite o Estado (A-H): "); scanf("%1s", estado1);
    printf("Digite o Código: "); scanf("%3s", codigo1);
    printf("Digite o nome da cidade: "); scanf("%19s", nomedacidade1);
    printf("Digite o Número de Pontos Turísticos: "); scanf("%d", &pontosturisticos1);
    printf("Digite a população: "); scanf("%lu", &populacao1);
    printf("Digite a Área (em km²): "); scanf("%f", &area1);
    printf("Digite o PIB: "); scanf("%f", &pib1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\n----- Cadastro da Carta 2 -----\n");
    printf("Digite o Estado (A-H): "); scanf("%1s", estado2);
    printf("Digite o Código: "); scanf("%3s", codigo2);
    printf("Digite o nome da cidade: "); scanf("%19s", nomedacidade2);
    printf("Digite o Número de Pontos Turísticos: "); scanf("%d", &pontosturisticos2);
    printf("Digite a população: "); scanf("%lu", &populacao2);
    printf("Digite a Área (em km²): "); scanf("%f", &area2);
    printf("Digite o PIB: "); scanf("%f", &pib2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    int opcao;

    do {
        printf("\n----- MENU DE COMPARAÇÃO -----\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional (MENOR vence)\n");
        printf("5 - PIB per Capita\n");
        printf("6 - Comparação aninhada: População > PIB > Área\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Comparando POPULAÇÃO...\n");
                if (populacao1 > populacao2)
                    printf("Carta 1 (%s) venceu!\n", nomedacidade1);
                else if (populacao2 > populacao1)
                    printf("Carta 2 (%s) venceu!\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 2:
                printf("Comparando ÁREA...\n");
                if (area1 > area2)
                    printf("Carta 1 (%s) venceu!\n", nomedacidade1);
                else if (area2 > area1)
                    printf("Carta 2 (%s) venceu!\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 3:
                printf("Comparando PIB...\n");
                if (pib1 > pib2)
                    printf("Carta 1 (%s) venceu!\n", nomedacidade1);
                else if (pib2 > pib1)
                    printf("Carta 2 (%s) venceu!\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 4:
                printf("Comparando DENSIDADE POPULACIONAL (MENOR vence)...\n");
                if (densidade_populacional1 < densidade_populacional2)
                    printf("Carta 1 (%s) venceu!\n", nomedacidade1);
                else if (densidade_populacional2 < densidade_populacional1)
                    printf("Carta 2 (%s) venceu!\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 5:
                printf("Comparando PIB PER CAPITA...\n");
                if (pib_per_capita1 > pib_per_capita2)
                    printf("Carta 1 (%s) venceu!\n", nomedacidade1);
                else if (pib_per_capita2 > pib_per_capita1)
                    printf("Carta 2 (%s) venceu!\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 6:
                printf("Comparação aninhada: População > PIB > Área\n");
                if (populacao1 > populacao2)
                    printf("Carta 1 (%s) venceu pela População\n", nomedacidade1);
                else if (populacao2 > populacao1)
                    printf("Carta 2 (%s) venceu pela População\n", nomedacidade2);
                else {
                    if (pib1 > pib2)
                        printf("Carta 1 (%s) venceu pelo PIB\n", nomedacidade1);
                    else if (pib2 > pib1)
                        printf("Carta 2 (%s) venceu pelo PIB\n", nomedacidade2);
                    else {
                        if (area1 > area2)
                            printf("Carta 1 (%s) venceu pela Área\n", nomedacidade1);
                        else if (area2 > area1)
                            printf("Carta 2 (%s) venceu pela Área\n", nomedacidade2);
                        else
                            printf("Empate total!\n");
                    }
                }
                break;

            case 0:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
