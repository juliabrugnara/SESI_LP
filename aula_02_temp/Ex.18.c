/* 18) VerificaC'C#o de Ano de EleiC'C#o
Leia um ano e informe se C) ano de eleiC'C#o (mC:ltiplo de 4). */

#include <stdio.h>

int main() {
	int ano;

	printf("Digite um ano para saber se foi ano eleição ou não: ");
	scanf("%d", &ano);

	// O operador '%' pega o resto da divisC#o.
	// Se o resto por 4 for zero, o nC:mero C) mC:ltiplo de 4.
	if (ano % 4 == 0) {
		printf("O ano %d e ano de eleicao.\n", ano);
	}
	else {
		printf("O ano %d nao e ano de eleicao.\n", ano);
	}

	return 0;
}