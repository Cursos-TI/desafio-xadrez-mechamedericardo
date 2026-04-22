#include <stdio.h>

/* -------- FUNÇÕES RECURSIVAS -------- */

// Torre → movimento horizontal (Direita)
void moverTorre(int casas) {
    if (casas <= 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha → movimento horizontal (Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo → recursivo + ideia de diagonal
void moverBispo(int casas) {
    if (casas <= 0) return;

    printf("Cima Direita\n");
    moverBispo(casas - 1);
}


int main() {

    int i, j;

    // -------- TORRE --------
    printf("Movimento da Torre:\n");
    moverTorre(5);


    // -------- BISPO (recursivo + loops aninhados) --------
    printf("\nMovimento do Bispo:\n");

    for (i = 0; i < 5; i++) {          // movimento vertical
        for (j = 0; j < 1; j++) {      // movimento horizontal
            printf("Cima Direita\n");
        }
    }


    // -------- RAINHA --------
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);


    // -------- CAVALO (loops complexos) --------
    printf("\nMovimento do Cavalo:\n");

    int cima = 2;
    int direita = 1;

    for (i = 0; i < 3; i++) {

        if (i < cima) {
            printf("Cima\n");
            continue;
        }

        if (i == cima) {
            for (j = 0; j < direita; j++) {
                printf("Direita\n");
                break;
            }
        }
    }

    return 0;
}