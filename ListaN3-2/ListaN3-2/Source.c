#include "stdio.h"
#include "locale.h"

float dívida = 0;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exercício 2\n");
	printf("Digite o valor do empréstimo\n");
	scanf_s("%f", &dívida);
	printf("Sua dívida após 6 meses é de: %.2f", dívida + (dívida * 0.05));

	_getch();
}
