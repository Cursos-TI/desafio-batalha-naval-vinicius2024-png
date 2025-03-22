#include <stdio.h>

int main() {
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10][10];

    // Preenchendo o array linha com zeros
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            linha[i][j] = 0;
        }
    }

    // Substituindo três zeros por 3 na vertical (coluna F)
    for (int i = 0; i < 3; i++) { 
        linha[i][5] = 3; // Coluna F (índice 5)
    }

    // Substituindo três zeros por 3 na horizontal, começando na coluna B
    for (int j = 1; j < 4; j++) { 
        linha[7][j] = 3; // Linha 8 (índice 7) e colunas B, C, D (índices 1, 2 e 3)
    }

    printf("*TABULEIRO  BATALHA NAVAL* \n");
    printf("   "); // Espaço para alinhar os cabeçalhos
    for (int i = 0; i < 10; i++) {
        printf(" %c", coluna[i]);
    }
    printf("\n");

    // Exibindo o array linha com rótulos nas linhas
    for (int i = 0; i < 10; i++) {
        printf("  %d ", i + 1); // Número da linha 
        for (int j = 0; j < 10; j++) {
            printf("%d ", linha[i][j]);
        }
        printf("\n");
    }

    return 0;
}