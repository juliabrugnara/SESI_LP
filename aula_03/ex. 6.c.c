#include <stdio.h>

int main() {
    // PQ: Começamos no 1 (primeiro impar) e pulamos de 2 em 2 (i += 2).
    for(int i = 1; i <= 20; i += 2) {
        printf("%d ", i);
    }
    return 0;
}