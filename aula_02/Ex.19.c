/* 19) CC!lculo de Frete
Leia o peso de uma encomenda:
AtC) 5kg -> R$10
5 a 20kg -> R$20
Acima de 20kg -> R$50 */

#include <stdio.h>

int main() {
	float peso;

	printf("Peso da encomenda (kg): ");
	scanf("%f", &peso);

	if (peso <= 5) {
		printf("Valor do frete: R$ 10.00\n");
	}
	// Como o 'if' de cima jC! testou atC) 5kg,
	// aqui o C ja entende que o peso C) maior que 5.
	else if (peso <= 20) {
		printf("Valor do frete: R$ 20.00\n");
	}
	else {
		printf("Valor do frete: R$ 50.00\n");
	}

	return 0;
}