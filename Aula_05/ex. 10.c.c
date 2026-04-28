#include <stdio.h>

int main() {
	int vet[10], aux;

	printf("Digite 10 numeros:\n");
	for(int i = 0; i < 10; i++) {
		scanf("%d", &vet[i]);
	}

	// Algoritmo de Ordenação Bubble Sort
	for(int i = 0; i < 10; i++) {
		for(int j = i + 1; j < 10; j++) {
			if(vet[i] > vet[j]) {
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}

	printf("Vetor em ordem crescente: ");
	for(int i = 0; i < 10; i++) {
		printf("%d ", vet[i]);
	}
	printf("\n");

	return 0;
}