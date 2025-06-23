#include <stdio.h>

/*
    Simulação de movimentos de peças de xadrez:
    - Torre: 5 casas para a direita (for)
    - Bispo: 5 casas na diagonal para cima e à direita (while)
    - Rainha: 8 casas para a esquerda (do-while)
*/

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    int casas_bispo = 5;
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= casas_bispo) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    int casas_rainha = 8;
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casas_rainha);

    return 0;
}
