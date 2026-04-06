/* 16) CC!lculo de Conta de Energia
Leia o consumo em kWh:
AtC) 100 b R$0,50/kWh
101 a 200 b R$0,75/kWh
Acima de 200 b R$1,00/kWh
Calcule o valor total. */

#include <stdio.h>

int main() {

	float kwh, total;

	printf("Consumo em kWh: ");
	scanf("%f", &kwh);

	if (kwh <= 100) {
		total = kwh * 0.50;
	}
	else if (kwh <= 200) {
		total = kwh * 0.75;
	}
	else {
		total = kwh * 1.00;
	}

	printf("Valor total: R$ %.2f\n", total);

	return 0;
}