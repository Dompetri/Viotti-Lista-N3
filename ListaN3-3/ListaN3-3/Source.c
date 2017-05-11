#include "stdio.h"
#include "locale.h"

float base, altura, perimetro, area;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exercício 3\n");
	printf("Digite o valor da base do retângulo\n");
	scanf_s("%f", &base);
	printf("Digite o valor da altura do retângulo\n");
	scanf_s("%f", &altura);
	printf("O perímetro do retângulo é de %.2f e a área é de %.2f", 2 * (base + altura), base * altura);

	_getch();
}