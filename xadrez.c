#include <stdio.h>

// =========================
// TORRE - RECURSIVIDADE
// =========================
void moverTorre(int casas) {

    if(casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}


// =========================
// RAINHA - RECURSIVIDADE
// =========================
void moverRainha(int casas) {

    if(casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}


// =========================
// BISPO - RECURSIVIDADE
// + LOOPS ANINHADOS
// =========================
void moverBispo(int casas) {

    if(casas == 0)
        return;

    for(int vertical = 0; vertical < 1; vertical++) {

        for(int horizontal = 0; horizontal < 1; horizontal++) {

            printf("Cima Direita\n");

        }
    }

    moverBispo(casas - 1);
}


int main() {

    printf("Movimento da Torre:\n");
    moverTorre(5);


    printf("\nMovimento do Bispo:\n");
    moverBispo(5);


    printf("\nMovimento da Rainha:\n");
    moverRainha(8);


    // =========================
    // CAVALO - LOOPS COMPLEXOS
    // =========================

    printf("\nMovimento do Cavalo:\n");

    int vertical, horizontal;

    for(vertical = 1; vertical <= 2; vertical++) {

        printf("Cima\n");

        for(horizontal = 1; horizontal <= 1; horizontal++) {

            if(vertical < 2)
                continue;

            printf("Direita\n");
            break;
        }
    }

    return 0;
}