#include <stdio.h>

int main() {
	float n1, n2;
	char op;
	printf("Numero 1, Operacao (+, -, *, /), Numero 2: ");
	scanf("%f %c %f", &n1, &op, &n2);

	switch(op) {
	case '+':
		printf("Resultado: %.2f\n", n1 + n2);
		break;
	case '-':
		printf("Resultado: %.2f\n", n1 - n2);
		break;
	case '*':
		printf("Resultado: %.2f\n", n1 * n2);
		break;
	case '/':
		if(n2 != 0) printf("Resultado: %.2f\n", n1 / n2);
		else printf("Erro: Divisao por zero!\n");
		break;
	default:
		printf("Operacao invalida.\n");
	}
	return 0;
}