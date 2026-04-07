#include <stdio.h>
int main() {
    int num, qtd = 0;
    printf("Digite numeros (negativo para parar):\n");
    while(1) { // PQ: while(1) cria um laço "infinito" que só para com o comando 'break'.
        scanf("%d", &num);
        if(num < 0) break; // PQ: Se o número for menor que 0, o 'break' sai do laço na hora.
        qtd++; // PQ: Só conta se o número for positivo.
    }
    printf("Foram digitados %d numeros positivos.", qtd);
    return 0;
}