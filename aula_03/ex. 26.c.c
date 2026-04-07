#include <stdio.h>
int main() {
    int n;
    printf("Digite o tamanho do lado: ");
    scanf("%d", &n);

    // PQ: Precisamos de dois lacos (Aninhados). 
    for(int i = 0; i < n; i++) {       // O de fora faz as LINHAS
        for(int j = 0; j < n; j++) {   // O de dentro faz os asteriscos da COLUNA
            printf("* ");
        }
        printf("\n"); // PQ: Pula a linha toda vez que terminar uma fileira.
    }
    return 0;
}