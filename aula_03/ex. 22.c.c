#include <stdio.h>
int main() {
    int n;
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
        if(n <= 0) printf("Invalido! Tente de novo.\n");
        // PQ: O 'do while' e perfeito para validacao: ele pede o dado e so libera se estiver certo.
    } while(n <= 0); 
    
    printf("Voce digitou o numero: %d", n);
    return 0;
}
