#include <stdio.h>
int main() {
    int soma = 0;
    for(int i = 1; i <= 100; i++) {
        if(i % 2 != 0) { // PQ: != significa "diferente". Se o resto por 2 for diferente de 0, é impar.
            soma += i; // PQ: Acumulamos o valor do número ímpar na variável soma.
        }
    }
    printf("A soma dos impares e: %d", soma);
    return 0;
}