#include <stdio.h>

int main() {
    float n1, n2, n3, m;
    printf("Notas: ");
    scanf("%f %f %f", &n1, &n2, &n3); // Lê as 3 de uma vez (separe por espaço ao digitar)
    
    m = (n1 + n2 + n3) / 3;
    printf("Media: %.2f - ", m);

    // Lógica em "escadinha" usando ternários: (condição ? se_verdade : se_falso)
    printf("Status: %s\n", (m >= 7 ? "APROVADO" : (m >= 3 ? "RECUPERACAO" : "REPROVADO")));

    return 0;
}