#include <stdio.h>

int main() {
    int matriz[5][5];

    printf("Digite os valores da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
            // Se for negativo, vira zero
            if (matriz[i][j] < 0) {
                matriz[i][j] = 0;
            }
        }
    }

    printf("\nMatriz corrigida (sem negativos):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}