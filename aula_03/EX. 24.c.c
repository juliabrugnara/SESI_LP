#include <stdio.h>
int main() {
    int n, divisores = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) divisores++; // PQ: Conta quantas vezes o resto foi zero.
    }

    // PQ: Numeros primos so podem ser divididos por 1 e por eles mesmos (total 2 divisores).
    if(divisores == 2) printf("%d e primo.", n);
    else printf("%d nao e primo.", n);
    
    return 0;
}