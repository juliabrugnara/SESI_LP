#include <stdio.h>

int main() {
    int vet[8], soma = 0;
    
    printf("Digite 8 numeros:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%d", &vet[i]);
        soma += vet[i]; // Acumula o valor na variável soma
    }
    
    printf("A soma de todos os elementos e: %d\n", soma);
    
    return 0;
}