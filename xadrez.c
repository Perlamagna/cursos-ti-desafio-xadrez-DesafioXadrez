#include <stdio.h>

int main() {

    int i;

    // =========================
    // TORRE - FOR
    // =========================
    printf("Movimento da Torre:\n");

    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }


    // =========================
    // BISPO - WHILE
    // =========================
    printf("\nMovimento do Bispo:\n");

    i = 1;
    while(i <= 5) {
        printf("Cima Direita\n");
        i++;
    }


    // =========================
    // RAINHA - DO WHILE
    // =========================
    printf("\nMovimento da Rainha:\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= 8);


    // =========================
    // CAVALO - LOOPS ANINHADOS
    // =========================
    printf("\nMovimento do Cavalo:\n");

    int baixo = 2;
    int esquerda = 1;

    for(i = 1; i <= baixo; i++) { // movimento vertical
        printf("Baixo\n");

        int j = 1;

        while(j <= esquerda && i == baixo) { 
            // só executa depois das duas casas para baixo
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}