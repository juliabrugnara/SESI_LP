#include <stdio.h>

int main() {
	float nota;
	printf("Nota (0-10): ");
	scanf("%f", &nota);

	if (nota >= 9) printf("Conceito A\n");
	else if (nota >= 7) printf("Conceito B\n");
	else if (nota >= 5) printf("Conceito C\n");
	else printf("Conceito D\n");

	return 0;
}