#include <stdio.h>

// Definição de constantes para número de casas
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO_VERTICAL 2
#define MOVIMENTO_CAVALO_HORIZONTAL 1

// Função recursiva para movimentar a Torre para a direita
void mover_torre(int casas) {
    if (casas == 0) return;  // Condição de parada
    printf("Direita\n");
    mover_torre(casas - 1);  // Chamada recursiva reduzindo o número de casas
}

// Função recursiva para movimentar a Rainha para a esquerda
void mover_rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função recursiva para movimentar o Bispo na diagonal superior direita
void mover_bispo(int casas) {
    if (casas == 0) return;

    printf("Cima, Direita\n");

    // Chamada recursiva para continuar o movimento diagonal
    mover_bispo(casas - 1);
}

// Função para movimentar o Cavalo usando loops aninhados
void mover_cavalo() {
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {  // Movimento para cima
        printf("Cima\n");
    }

    for (int j = 0; j < 1; j++) {  // Movimento para a direita
        printf("Direita\n");
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    mover_torre(MOVIMENTO_TORRE);

    // Movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo:\n");
    mover_bispo(MOVIMENTO_BISPO);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    mover_rainha(MOVIMENTO_RAINHA);

    // Movimento do Cavalo
    printf("\n");
    mover_cavalo();

    return 0;
}
