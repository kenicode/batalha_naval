#include <stdio.h>

#define COLUNA 10 // Definindo o número de colunas
#define LINHA 10 // Definindo o número de linhas

int main () {
    // Inicializa o campo de batalha com 0
    int batalha [COLUNA] [LINHA] = {0}; //campo de batalha

    // Barco 1: vertical na coluna 2, linhas 5 a 8
    for (int i = 5; i < 8; i++) {
        batalha[i][2] = 3;
    }
    // Barco 2: horizontal na linha 5, colunas 5 a 7
    for (int i = 5; i < 8; i++) {
        batalha[5][i] = 3;
    }
    // Barco 3: diagonal principal de [1][1] a [3][3]
    for (int i = 1; i < 4; i++) {
        batalha[i][i] = 3;
    }
    // Barco 4: diagonal secundária de [0][9] a [2][7]
    for (int i = 0; i < 3; i++) {
        batalha[i][LINHA - 1 - i] = 3;
    }

    // Impressão do campo de batalha
    for (int i = 0; i < COLUNA; i++) {
        for (int j = 0; j < LINHA; j++) {
            printf("%d ", batalha[i][j]);
        }
        printf("\n");
    }

    return 0;
}
