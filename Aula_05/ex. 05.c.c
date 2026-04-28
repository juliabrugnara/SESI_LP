#include <stdio.h>

int main() {
    int vet[6], menor;
    
    printf("Digite 6 numeros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);
        // Se for o primeiro laço, ele é o menor. Senão, compara.
        if (i == 0 || vet[i] < menor) {
            menor = vet[i];
        }
    }
    
    printf("O menor valor e: %d\n", menor);
    
    return 0;
}