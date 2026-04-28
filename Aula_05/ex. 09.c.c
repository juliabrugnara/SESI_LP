#include <stdio.h>

int main() {
    int vet[10];
    
    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] < 0) {
            vet[i] = 0; // Substituição
        }
    }
    
    printf("Vetor atualizado: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    
    return 0;
}