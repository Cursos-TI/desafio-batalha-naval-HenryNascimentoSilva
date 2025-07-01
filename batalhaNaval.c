#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    nivelNovato();
    return 0;
}

void nivelNovato() {
    // Tabuleiro 5x5
    int tabuleiro[5][5];

    // Navio 1: vertical 
    int x1 = 0, y1 = 1;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x1 + i][y1] = 3;
        printf("Navio Vertical em (%d, %d)\n", x1 + i, y1);
    }

    // Navio 2: horizontal
    int x2 = 3, y2 = 0;
    for (int i = 0; i < 4; i++) {
        tabuleiro[x2][y2 + i] = 3;
        printf("Navio Horizontal em (%d, %d)\n", x2, y2 + i);
    }
}
