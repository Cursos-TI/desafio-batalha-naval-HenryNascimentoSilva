#include <stdio.h>
/*
 * A função nivelNovato simula o posicionamento de dois navios simples
 * em um tabuleiro 5x5. É o nível introdutório, usado para praticar
 * o uso de vetores bidimensionais e coordenadas.
 */
void nivelNovato() {
    int tabuleiro[5][5] = {0}; // Criação de uma matriz 5x5 inicializada com 0

    // Posicionamento de um navio vertical (3 células)
    // Aqui fixamos a coluna 1 e variamos a linha de 0 a 2
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][1] = 3; // 3 representa célula ocupada por navio
        printf("Navio Vertical em (%d, 1)\n", i);
    }

    // Posicionamento de um navio horizontal (4 células)
    // Aqui fixamos a linha 3 e variamos a coluna de 0 a 3
    for (int i = 0; i < 4; i++) {
        tabuleiro[3][i] = 3;
        printf("Navio Horizontal em (3, %d)\n", i);
    }
}
/*
 * A função nivelAventureiro aumenta a complexidade:
 * - Cria um tabuleiro 10x10
 * - Posiciona 4 navios: 1 vertical, 1 horizontal e 2 diagonais
 * - Exibe toda a matriz com 0 (vazio) e 3 (navio)
 */
void nivelAventureiro() {
    int tabuleiro[10][10] = {0}; // Tabuleiro maior, inicializado com 0

    // Navio vertical: coluna 2, linhas 0 a 3
    for (int i = 0; i < 4; i++)
        tabuleiro[i][2] = 3;

    // Navio horizontal: linha 5, colunas 0 a 4
    for (int i = 0; i < 5; i++)
        tabuleiro[5][i] = 3;

    // Navio diagonal ↘ (principal): (2,2), (3,3), (4,4)
    for (int i = 0; i < 3; i++)
        tabuleiro[6 + i][6 + i] = 3;

    // Navio diagonal ↙ (secundária): (2,6), (3,5), (4,4)
    for (int i = 0; i < 3; i++)
        tabuleiro[2 + i][6 - i] = 3;

    // Exibição do tabuleiro completo
    printf("\nTabuleiro Aventureiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
/*
 * Cada função abaixo representa uma habilidade especial.
 * Usamos uma matriz 5x5 para representar padrões:
 * - 0 = área não afetada
 * - 1 = área atingida
 * Os padrões são desenhados manualmente ou com loops para clareza.
 */

/// CONE: usa loops para formar um triângulo simétrico apontando para cima
void habilidadeCone() {
    int matriz[5][5] = {0};

    // Percorremos até a linha 2 (3 linhas do cone)
    for (int i = 0; i < 3; i++) {
        // A cada linha, o cone cresce para os lados
        for (int j = 2 - i; j <= 2 + i; j++) {
            matriz[i][j] = 1;
        }
    }

    printf("\nCone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

/// CRUZ: desenha uma cruz central com uma linha e uma coluna
void habilidadeCruz() {
    int matriz[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        matriz[2][i] = 1; // linha do meio
        matriz[i][2] = 1; // coluna do meio
    }

    printf("\nCruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

/// OCTAEDRO: forma semelhante a um losango com centro mais grosso
void habilidadeOctaedro() {
    int matriz[5][5] = {0};

    matriz[0][2] = 1;
    matriz[1][1] = matriz[1][2] = matriz[1][3] = 1;
    matriz[2][2] = 1;
    matriz[3][2] = 1;

    printf("\nOctaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", matriz[i][j]);
        printf("\n");
    }
}


int main() {
    printf("===== Nível Novato =====\n");
    nivelNovato();

    printf("\n===== Nível Aventureiro =====\n");
    nivelAventureiro();

    printf("\n===== Nível Mestre =====\n");
    habilidadeCone();
    habilidadeCruz();
    habilidadeOctaedro();

    return 0;
}
