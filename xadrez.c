#include <stdio.h>

int main() {

    int i;

    // =========================
    // TORRE - usando FOR
    // move 5 casas para direita
    // =========================
    printf("Movimento da Torre:\n");

    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }


    // =========================
    // BISPO - usando WHILE
    // move 5 casas na diagonal
    // =========================
    printf("\nMovimento do Bispo:\n");

    i = 1;

    while(i <= 5) {
        printf("Cima Direita\n");
        i++;
    }


    // =========================
    // RAINHA - usando DO WHILE
    // move 8 casas para esquerda
    // =========================
    printf("\nMovimento da Rainha:\n");

    i = 1;

    do {
        printf("Esquerda\n");
        i++;
    } while(i <= 8);


    return 0;
}