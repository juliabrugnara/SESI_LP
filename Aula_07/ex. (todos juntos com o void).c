#include <stdio.h>
int adicao(int a, int b) {
	return a + b;
}

int subtracao(int a, int b) {
	return a - b;
}

int multiplicacao(int a, int b) {
	return a * b;
}

int divisao(int a, int b) {
	if (b == 0) {
		printf("\nErro: Divisão por zero não permitida!");
		return 0;
	}
	return a / b;
}

void imprimirValores(char *operacao, int valor) {
	printf("\nA %s dos dois valores: %i", operacao, valor);
}

int main() {
	int n1, n2;
	int calcular = 0;

	printf("Digite o primeiro valor: ");
	scanf("%i", &n1);

	printf("Digite o segundo valor: ");
	scanf("%i", &n2);

	calcular = adicao(n1, n2);
	imprimirValores("Adicao", calcular);

	calcular = subtracao(n1, n2);
	imprimirValores("Subtracao", calcular);

	calcular = multiplicacao(n1, n2);
	imprimirValores("Multiplicacao", calcular);

	calcular = divisao(n1, n2);
	imprimirValores("Divisao", calcular);

	printf("\n");
	return 0;
}