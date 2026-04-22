#include <stdio.h>

int main() {

    int i;

    // -------- TORRE (for) --------
    printf("Movimento da Torre:\n");

    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }


    // -------- BISPO (while) --------
    printf("\nMovimento do Bispo:\n");

    i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }


    // -------- RAINHA (do-while) --------
    printf("\nMovimento da Rainha:\n");

    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);


    // -------- CAVALO (loops aninhados) --------
    printf("\nMovimento do Cavalo:\n");

    // for → controla os 2 passos para baixo
    for (i = 0; i < 2; i++) {

        printf("Baixo\n");

        // while → executa só uma vez para ir para a esquerda
        if (i == 1) { // só no final do movimento
            int j = 0;
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}