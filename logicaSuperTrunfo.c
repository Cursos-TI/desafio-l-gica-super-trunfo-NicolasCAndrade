#include <stdio.h>

int main() {
    /* Carta 1 */
    char nomedacidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    float densidade_populacional1;
    float pib_per_capita1;

    /* Carta 2 */
    char nomedacidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    float densidade_populacional2;
    float pib_per_capita2;

    int escolha1, escolha2;

    // --- Cadastro das Cartas ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome da cidade: ");
    scanf("%19s", nomedacidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    
    densidade_populacional1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    pib_per_capita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome da cidade: ");
    scanf("%19s", nomedacidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);

    densidade_populacional2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pib_per_capita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;
    
    printf("\n--- Atributos das Cidades ---\n");
    printf("%s: Populacao: %lu | Area: %.2f | PIB: %.2f | Densidade: %.2f | PIB per Capita: %.2f\n", 
           nomedacidade1, populacao1, area1, pib1, densidade_populacional1, pib_per_capita1);
    printf("%s: Populacao: %lu | Area: %.2f | PIB: %.2f | Densidade: %.2f | PIB per Capita: %.2f\n", 
           nomedacidade2, populacao2, area2, pib2, densidade_populacional2, pib_per_capita2);

    // --- Menu Dinâmico com Duas Escolhas ---
    printf("\n--- Escolha DOIS Atributos para Comparar ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per Capita\n");
    
    do {
        printf("Primeira escolha (1-5): ");
        scanf("%d", &escolha1);
        printf("Segunda escolha (1-5): ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5) {
            printf("Escolhas invalidas. Por favor, escolha dois numeros diferentes de 1 a 5.\n");
        }
    } while (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5);

    // --- Lógica de Comparação Aninhada e Ternária ---
    char *vencedor = "Empate";
    int atributo_vencedor = 0;

    // Compara o primeiro atributo
    switch (escolha1) {
        case 1: // População
            if (populacao1 > populacao2) vencedor = nomedacidade1;
            else if (populacao2 > populacao1) vencedor = nomedacidade2;
            else atributo_vencedor = escolha2; // Empate, passa para o segundo atributo
            break;
        case 2: // Área
            if (area1 > area2) vencedor = nomedacidade1;
            else if (area2 > area1) vencedor = nomedacidade2;
            else atributo_vencedor = escolha2;
            break;
        case 3: // PIB
            if (pib1 > pib2) vencedor = nomedacidade1;
            else if (pib2 > pib1) vencedor = nomedacidade2;
            else atributo_vencedor = escolha2;
            break;
        case 4: // Densidade Populacional (menor vence)
            if (densidade_populacional1 < densidade_populacional2) vencedor = nomedacidade1;
            else if (densidade_populacional2 < densidade_populacional1) vencedor = nomedacidade2;
            else atributo_vencedor = escolha2;
            break;
        case 5: // PIB per Capita
            if (pib_per_capita1 > pib_per_capita2) vencedor = nomedacidade1;
            else if (pib_per_capita2 > pib_per_capita1) vencedor = nomedacidade2;
            else atributo_vencedor = escolha2;
            break;
    }
    
    // Se houve empate no primeiro atributo, compara o segundo
    if (atributo_vencedor != 0) {
        switch (atributo_vencedor) {
            case 1:
                vencedor = (populacao1 > populacao2) ? nomedacidade1 : (populacao2 > populacao1) ? nomedacidade2 : "Empate";
                break;
            case 2:
                vencedor = (area1 > area2) ? nomedacidade1 : (area2 > area1) ? nomedacidade2 : "Empate";
                break;
            case 3:
                vencedor = (pib1 > pib2) ? nomedacidade1 : (pib2 > pib1) ? nomedacidade2 : "Empate";
                break;
            case 4:
                vencedor = (densidade_populacional1 < densidade_populacional2) ? nomedacidade1 : (densidade_populacional2 < densidade_populacional1) ? nomedacidade2 : "Empate";
                break;
            case 5:
                vencedor = (pib_per_capita1 > pib_per_capita2) ? nomedacidade1 : (pib_per_capita2 > pib_per_capita1) ? nomedacidade2 : "Empate";
                break;
        }
    }
    
    // Exibição do resultado
    printf("\n--- Resultado Final ---\n");
    if (vencedor[0] == 'E') {
        printf("A rodada terminou em empate apos a comparacao dos dois atributos!\n");
    } else {
        printf("O grande vencedor da rodada e: %s\n", vencedor);
    }

    return 0;
}