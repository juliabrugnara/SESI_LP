#include <stdio.h>

int main() {
    int vet[10], soma = 0;
    float media;
    
    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        soma += vet[i];
    }
    
    // Converte (cast) a soma para float para ter precisão decimal
    media = (float)soma / 10;
    printf("A media dos valores e: %.2f\n", media);
    
    return 0;
}