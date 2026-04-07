//5) Mostre todos os numeros pares de 1 ate 20.//
#include <stdio.h>

int main() {
    // PQ: Começamos no 2 (primeiro par) e pulamos de 2 em 2 (i += 2).
    for(int i = -10; i <= 20; i += 2) {
        printf("%d ", i);
    }
    return 0;
}