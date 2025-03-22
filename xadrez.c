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

// Função para movimentar a Rainha de forma iterativa (substituindo recursão)
void mover_rainha(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Esquerda\n");
    }
}

// Função para movimentar o Bispo de forma iterativa (substituindo recursão)
void mover_bispo(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
}

// Função para movimentar o Cavalo usando loops aninhados
void mover_cavalo() {
    int movimentos_verticais = 2;  // O cavalo se move 2 casas para cima
    int movimentos_horizontais = 1;  // O cavalo se move 1 casa para a direita

    // Loop para os movimentos verticais
    for (int i = 0; i < movimentos_verticais; i++) {
        if (i == 0) {
            printf("Cima\n");  // Primeira casa para cima
            continue;
        } else {
            printf("Cima\n");  // Segunda casa para cima
        }

        if (i == 1) {
            break;  // Após mover 2 casas para cima, o cavalo move para a direita
        }
    }

    // Loop para o movimento horizontal (direita)
    for (int j = 0; j < movimentos_horizontais; j++) {
        printf("Direita\n");
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    mover_torre(MOVIMENTO_TORRE);

    // Movimento do Bispo (iterativo agora)
    printf("\nMovimento do Bispo:\n");
    mover_bispo(MOVIMENTO_BISPO);

    // Movimento da Rainha (iterativo agora)
    printf("\nMovimento da Rainha:\n");
    mover_rainha(MOVIMENTO_RAINHA);

    // Movimento do Cavalo
    printf("\nMovimento do Cavalo:\n");
    mover_cavalo();

    return 0;
}
