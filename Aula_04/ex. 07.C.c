#include <stdio.h>

int main() {
    float saques[10] = {100, 600, 250, 1200, 50, 800, 300, 450, 700, 150};
    float total = 0, maior = 0;
    int acima_500 = 0;

    for (int i = 0; i < 10; i++) {
        total += saques[i];
        if (saques[i] > maior) maior = saques[i];
        if (saques[i] > 500) acima_500++;
    }

    printf("Total sacado: R$ %.2f\n", total);
    printf("Maior saque: R$ %.2f\n", maior);
    printf("Quantidade de saques acima de R$ 500: %d\n", acima_500);
    
    return 0;
}