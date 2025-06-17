#include <stdio.h>

int main(void){

    printf("Desafio Jogo de Xadrez\n");

/*
COMANDO PARA COMMIT NO GIT:
git add xadrez.c
git commit -m "Implementação inicial do nível novato: movimentos da Torre, Bispo e Rainha com for, while e do-while"
*/

#include <stdio.h>

int main() {
    // Movimento da torre (linha reta horizontal)
    // Utiliza a estrutura de repetição FOR
    int casas_torre = 5; // número de casas a mover
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // separador visual entre movimentos

    // Movimento do bispo (diagonal para cima e à direita)
    // Utiliza a estrutura de repetição WHILE
    int casas_bispo = 5; // número de casas a mover
    int j = 0;
    printf("Movimento do Bispo:\n");
    while (j < casas_bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n"); // separador visual entre movimentos

    // Movimento da rainha (movimento linear para a esquerda)
    // Utiliza a estrutura de repetição DO-WHILE
    int casas_rainha = 8; // número de casas a mover
    int k = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);

    return 0;
}
