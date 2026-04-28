#include <stdio.h>

int main() {
    int vet[6], maior;
    
    printf("Digite 6 numeros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);
        // Se for o primeiro laço, ele é o maior. Senão, compara.
        if (i == 0 || vet[i] > maior) {
            maior = vet[i];
        }
    }
    
    printf("O maior valor e: %d\n", maior);
    
    return 0;
}