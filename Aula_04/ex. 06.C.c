#include <stdio.h>

int main() {
    int numeros[10] = {12, 7, 5, 8, 20, 33, 42, 1, 10, 15};
    int p = 0, i_cnt = 0;

    printf("Pares: ");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
            p++;
        }
    }

    printf("\nImpares: ");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
            i_cnt++;
        }
    }
    printf("\nTotal Pares: %d, Total Impares: %d\n", p, i_cnt);
    return 0;
}