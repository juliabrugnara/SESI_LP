#include <stdio.h>
int main() {
    int n;
    long fat = 1; // PQ: Começa em 1 porque 0 anularia a multiplicação.
    printf("Calcular fatorial de: ");
    scanf("%d", &n);
    for(int i = n; i >= 1; i--) { // PQ: Fatorial multiplica de tras para frente (ex: 5*4*3*2*1).
        fat = fat * i;
    }
    printf("Fatorial: %ld", fat);
    return 0;
}
