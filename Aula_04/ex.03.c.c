// 3 - Um sistema armazenou 12 valores inteiros. classifique-os como ordem crescente, decrescente ou desordenada.

#include <stdio.h>

int main() {
    int vet[12];
    int crescente = 1, decrescente = 1; // 1 significa "Verdadeiro" em C

    printf("Digite 12 numeros:\n");
    for(int i = 0; i < 12; i++) scanf("%d", &vet[i]);

    for(int i = 0; i < 11; i++) { // Vamos ate 11 para nao estourar o array ao olhar vet[i+1]
        if(vet[i] < vet[i+1]) decrescente = 0; // Se o atual for menor que o proximo, nao e decrescente
        if(vet[i] > vet[i+1]) crescente = 0;   // Se o atual for maior que o proximo, nao e crescente
    }

    if(crescente) printf("Ordem Crescente\n");
    else if(decrescente) printf("Ordem Decrescente\n");
    else printf("Desordenada\n");

    return 0;
}