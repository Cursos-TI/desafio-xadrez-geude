#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void mover_bispo(int bispo_mov) {
    printf("Movimentos do Bispo:\n");
    for (int i = 1; i <= bispo_mov; i++) {
        printf("Diagonal Superior Direita - Passo %d\n", i);
    }
    printf("\n");
}

void mover_torre(int torre_mov) {
    printf("Movimentos da Torre:\n");
    for (int i = 1; i <= torre_mov; i++) {
        printf("Direita - Passo %d\n", i);
    }
    printf("\n");
}

void mover_rainha(int rainha_mov) {
    printf("Movimentos da Rainha:\n");
    for (int i = 1; i <= rainha_mov; i++) {
        printf("Esquerda - Passo %d\n", i);
    }
    printf("\n");
}

void mover_cavalo() {
    printf("Movimentos do Cavalo:\n");
    int movimentos[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    for (int i = 0; i < 8; i++) {
        printf("Movimento em L: (%d, %d)\n", movimentos[i][0], movimentos[i][1]);
    }
    printf("\n");
}

int main() {
    int bispo_mov, torre_mov, rainha_mov;
    
    // Nível Novato - Movimentação das Peças
    printf("Digite o número de movimentos do Bispo: ");
    scanf("%d", &bispo_mov);
    
    printf("Digite o número de movimentos da Torre: ");
    scanf("%d", &torre_mov);
    
    printf("Digite o número de movimentos da Rainha: ");
    scanf("%d", &rainha_mov);
    
    // Chamada das funções para exibir os movimentos
    mover_bispo(bispo_mov);
    mover_torre(torre_mov);
    mover_rainha(rainha_mov);
    
    // Nível Aventureiro - Movimentação do Cavalo
    mover_cavalo();
    
    return 0;
}