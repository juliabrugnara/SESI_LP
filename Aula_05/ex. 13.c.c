#include <stdio.h>

#define TAM 10

int main() {
    int vet[TAM];
    int maior_contagem = 0, moda = 0;
    
    printf("Digite %d numeros:\n", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }
    
    // Compara cada elemento com todo o resto do vetor
    for(int i = 0; i < TAM; i++) {
        int contagem = 0;
        
        for(int j = 0; j < TAM; j++) {
            if(vet[j] == vet[i]) {
                contagem++;
            }
        }
        
        if(contagem > maior_contagem) {
            maior_contagem = contagem;
            moda = vet[i];
        }
    }
    
    printf("O numero que mais se repete e o %d, aparecendo %d vez(es).\n", moda, maior_contagem);
    
    return 0;
}