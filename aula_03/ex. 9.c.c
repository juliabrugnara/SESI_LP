#include <stdio.h>
int main() {
    int n;
    printf("Contar ate quanto? ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) { // PQ: O limite do laço agora e a variavel 'n'.
        printf("%d ", i);
    }
    return 0;
}