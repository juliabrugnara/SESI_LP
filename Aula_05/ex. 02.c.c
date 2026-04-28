#include <stdio.h>

int main() {
    int vet[10];
    
    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    
    printf("Numeros pares: ");
    for(int i = 0; i < 10; i++) {
        if(vet[i] % 2 == 0) {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
    
    return 0;
}
