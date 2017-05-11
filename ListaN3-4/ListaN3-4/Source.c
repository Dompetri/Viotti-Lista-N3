#include "stdio.h"
#include "math.h"
#include "locale.h"

int numero = 0;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exercício 4\n");
	printf("Digite o número\n");
	scanf_s("%i", &numero);
	if (numero % 3 == 0 && numero % 6 == 0) {
		printf("%d é divisível por 3 e por 6", numero);
	}
	else {
		printf("%i não é divisível por 3 e por 6", numero);
	}
	_getch();
}