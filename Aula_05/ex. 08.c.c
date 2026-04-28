#include <stdio.h>

int main() {
    int vet[10], soma = 0;
    float media;
    
    printf("Digite 10 numeros:\n");
    // Primeiro laço: armazena e soma
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        soma += vet[i];
    }
    
    media = (float)soma / 10;
    printf("Media: %.2f\n", media);
    
    printf("Valores maiores que a media: ");
    // Segundo laço: verifica quem é maior que a média e imprime
    for(int i = 0; i < 10; i++) {
        if (vet[i] > media) {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
    
    return 0;
}