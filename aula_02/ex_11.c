#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite dois numeros com espaço entre eles: ");
    scanf("%d %d", &n1, &n2);

    if (n1 % n2 == 0) printf("%d e multiplo de %d\n", n1, n2);
    else printf("%d nao e multiplo de %d\n", n1, n2);

    return 0;
}