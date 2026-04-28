#include <stdio.h>
#include <limits.h> // Para usar o INT_MIN (menor inteiro possível)

int main() {
    int vet[6];
    int maior = INT_MIN, seg_maior = INT_MIN;
    
    printf("Digite 6 numeros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);
        
        if (vet[i] > maior) {
            seg_maior = maior; // O antigo maior vira o segundo maior
            maior = vet[i];    // O novo valor assume a liderança
        } else if (vet[i] > seg_maior && vet[i] != maior) {
            // Garante que o segundo maior seja estritamente menor que o maior
            seg_maior = vet[i];
        }
    }
    
    if (seg_maior == INT_MIN) {
        printf("Nao ha um segundo maior distinto (todos os valores podem ser iguais).\n");
    } else {
        printf("O segundo maior valor e: %d\n", seg_maior);
    }
    
    return 0;
}