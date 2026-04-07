#include <stdio.h>
int main() {
    int soma = 0; // PQ: Criamos uma "caixa" acumuladora começando em 0.
    for(int i = 1; i <= 10; i++) {
        soma = soma + i; // PQ: Pega o valor que ja estava na soma e adiciona o novo 'i'.
    }
    printf("A soma de 1 a 10 e: %d", soma);
    return 0;
}
