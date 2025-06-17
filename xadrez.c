#include <stdio.h>

int main(void){

    printf("Desafio Jogo de Xadrez\n");

    // Movimento da torre com for
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do bispo com while
    int casas_bispo = 5;
    int j = 0;
    while (j < casas_bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da rainha com do-while
    int casas_rainha = 8;
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);

    return 0;
}
