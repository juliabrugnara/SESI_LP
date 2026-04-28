#include <stdio.h>

int main() {
    int vet[5];
    
    printf("Digite 5 numeros:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }
    
    printf("Valores informados: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    
    return 0;
}