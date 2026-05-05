#include <stdio.h>

int main() {
    int matriz[4][4];
    int maior, menor;

    // Passo 1: Leitura dos dados
    printf("Digite os 16 valores para a matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Passo 2: Inicializar maior e menor com o primeiro elemento da matriz
    maior = matriz[0][0];
    menor = matriz[0][0];

    // Passo 3: Percorrer a matriz comparando os valores
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // Verifica se o elemento atual é maior que o registrado
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            // Verifica se o elemento atual é menor que o registrado
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    // Passo 4: Exibir os resultados
    printf("\nResultados");
    printf("\nMaior valor encontrado: %d", maior);
    printf("\nMenor valor encontrado: %d\n", menor);

    return 0;
}