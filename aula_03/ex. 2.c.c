#include <stdio.h>

int main() {
    int i = 1; // PQ: No while, a variavel deve ser criada antes.
    
    // PQ: Ele testa a condicao ANTES de entrar no bloco.
    while(i <= 10) {
        printf("%d ", i);
        i++; // PQ: Somamos +1 para que o laco nao seja infinito.
    }
    return 0;
}