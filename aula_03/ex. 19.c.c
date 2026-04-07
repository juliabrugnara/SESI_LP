#include <stdio.h>
int main() {
    int num, maior = -999999; // PQ: Começamos com um valor bem baixo para qualquer número ser maior que ele.
    do {
        printf("Digite um numero (999 para parar): ");
        scanf("%d", &num);
        if(num != 999 && num > maior) {
            maior = num; // PQ: Se o novo número for maior que o que tínhamos, ele vira o novo recordista.
        }
    } while(num != 999);
    printf("O maior numero digitado foi: %d", maior);
    return 0;
}