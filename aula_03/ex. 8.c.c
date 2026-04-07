#include <stdio.h>
int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num); // PQ: O 'num' e o numero fixo que o usuario escolheu.
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i); // PQ: O 'i' e quem muda de 1 ate 10.
    }
    return 0;
}
