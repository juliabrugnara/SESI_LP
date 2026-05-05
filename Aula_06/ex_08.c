#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];

    printf("Matriz A:\n");
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++) scanf("%d", &A[i][j]);

    printf("Matriz B:\n");
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++) scanf("%d", &B[i][j]);

    // Cálculo da multiplicação (Linha x Coluna)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0; // Zera a posição antes de somar
            for (int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz Resultante C:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}