#include <stdio.h>

int main() {
	int idade;
	printf("Idade: ");
	scanf("%d", &idade);

	if (idade < 16) printf("Nao pode votar\n");
	else if (idade < 18 || idade > 70) printf("Voto opcional\n");
	else printf("Voto obrigatorio\n");

	return 0;
}