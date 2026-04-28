#include <stdio.h>

int main() {
    int numeros[10] = {1, 2, 3, 2, 2, 2, 5, 2, 2, 4};
    int dominante = -1;

    for (int i = 0; i < 10; i++) {
        int contagem = 0;
        for (int j = 0; j < 10; j++) {
            if (numeros[i] == numeros[j]) contagem++;
        }
        if (contagem > 5) {
            dominante = numeros[i];
            break;
        }
    }

    if (dominante != -1) printf("Valor dominante: %d\n", dominante);
    else printf("Nao existe valor dominante.\n");
    
    return 0;
}