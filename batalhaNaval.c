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
    int tabuleiro[5][5] = {0};

    // Navio vertical
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][1] = 3;
        printf("Navio Vertical em (%d, 1)\n", i);
    }

    // Navio horizontal
    for (int i = 0; i < 4; i++) {
        tabuleiro[3][i] = 3;
        printf("Navio Horizontal em (3, %d)\n", i);
    }
}