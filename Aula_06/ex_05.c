#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma[3] = {0, 0, 0}; // Vetor para guardar a soma das 3 linhas, iniciando em zero

    // Passo 1: Leitura dos dados e cálculo das somas
    printf("Digite os 9 valores para a matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            // Soma o valor recém-digitado na posição correspondente à linha 'i'
            soma[i] = soma[i] + matriz[i][j]; 
        }
    }

    // Passo 2: Exibir os resultados
    printf("\nResultado das somas por linha:\n");
    for (int i = 0; i < 3; i++) {
        printf("Soma da linha %d: %d\n", i, soma[i]);
    }

    return 0;
}