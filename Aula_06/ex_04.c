#include <stdio.h>

int main() {
    int matriz[4][4];
    int contagem = 0;

    // Passo 1: Leitura dos dados para preencher a matriz
    printf("Digite os 16 valores para a matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Passo 2: Percorrer a matriz para fazer a contagem
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // Verifica se o número atual é maior que 10
            if (matriz[i][j] > 10) {
                contagem++; // Incrementa o contador
            }
        }
    }

    // Passo 3: Exibir o resultado final
    printf("\nQuantidade de números maiores que 10: %d\n", contagem);

    return 0;
}