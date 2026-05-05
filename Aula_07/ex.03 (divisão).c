#include <stdio.h>

int divisaoDeDoisValores(int a, int b) {
	return a / b;
}

int main() {
	int n1, n2;
	int divisao=0;

	printf("Digite o primeiro valor:");
	scanf("%i", &n1);

	printf("Digite o segundo valor:");
	scanf("%i", &n2);

	//divisao = n1 + n2;
	divisao = divisaoDeDoisValores(n1, n2);


	printf("A divisao dos dois valores: %i", divisao);
	printf("\n 5 / 5 = %i", divisaoDeDoisValores(5, 5));
	printf("\n 3 / 15 = %i", divisaoDeDoisValores(3, 15));

}

