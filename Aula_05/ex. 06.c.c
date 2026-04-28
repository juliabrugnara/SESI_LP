#include <stdio.h>

int main() {
    int vet[10], positivos = 0;
    
    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] > 0) {
            positivos++;
        }
    }
    
    printf("Quantidade de numeros positivos: %d\n", positivos);
    
    return 0;
}