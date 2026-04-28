#include <stdio.h>

int main() {
    float temps[7] = {25.5, 28.0, 30.2, 22.1, 19.5, 24.0, 27.8};
    float soma = 0, media, quente, frio;
    int acima_media = 0;

    quente = frio = temps[0];

    for (int i = 0; i < 7; i++) {
        soma += temps[i];
        if (temps[i] > quente) quente = temps[i];
        if (temps[i] < frio) frio = temps[i];
    }

    media = soma / 7;

    for (int i = 0; i < 7; i++) {
        if (temps[i] > media) acima_media++;
    }

    printf("Media: %.1f\nMais quente: %.1f\nMais frio: %.1f\nDias acima da media: %d\n", media, quente, frio, acima_media);
    return 0;
}