#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    printf("Preencha a matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            // Lógica: se i + j for 4, o elemento pertence à diagonal secundária
            if (i + j == 4) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nA soma da diagonal secundária é: %d\n", soma);
    return 0;
}