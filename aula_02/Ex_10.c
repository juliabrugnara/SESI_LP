#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);

    if (imc < 18.5) printf("Abaixo do peso\n");
    else if (imc <= 24.9) printf("Normal\n");
    else if (imc <= 29.9) printf("Sobrepeso\n");
    else printf("Obesidade\n");

    return 0;
}