#include <stdio.h>

int main() {
    int idades[15];
    int jovem = 0, adulto = 0, idoso = 0;

    printf("--- Pesquisa de Idades ---\n");

    for (int i = 0; i < 15; i++) {
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]); // %d é usado para números inteiros

        // Classificação baseada nos intervalos pedidos
        if (idades[i] <= 17) {
            jovem++; // Se for ate 17, entra no grupo jovem
        } 
        else if (idades[i] >= 18 && idades[i] <= 59) {
            adulto++; // Entre 18 e 59 (inclusive)
        } 
        else {
            idoso++; // Qualquer valor 60 ou mais
        }
    }

    // Lógica para descobrir qual o maior grupo
    printf("\n--- Resultados ---\n");
    printf("Jovens: %d | Adultos: %d | Idosos: %d\n", jovem, adulto, idoso);

    if (jovem >= adulto && jovem >= idoso) {
        printf("O grupo com mais pessoas e: Jovens\n");
    } else if (adulto >= idoso) {
        printf("O grupo com mais pessoas e: Adultos\n");
    } else {
        printf("O grupo com mais pessoas e: Idosos\n");
    }

    return 0;
}