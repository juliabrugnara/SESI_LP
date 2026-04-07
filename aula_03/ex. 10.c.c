#include <stdio.h>
int main() {
    int a, b;
    printf("Digite o inicio e o fim: ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) { // PQ: O inicio e 'a' e o fim e 'b'.
        printf("%d ", i);
    }
    return 0;
}