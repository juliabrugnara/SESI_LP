#include <stdio.h>
int main() {
    int num, soma = 0;
    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
        soma += num; // PQ: Vai guardando a soma dos numeros digitados.
    } while(num != 0); // PQ: O laço so para quando 'num' for EXATAMENTE 0.
    printf("Soma total: %d", soma);
    return 0;
}