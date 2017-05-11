#include "stdio.h"
#include "locale.h"

float PI, A; //PesoIdeal, Altura
char sexo = 0;

void main()
{
	setlocale(LC_ALL, "portuguese");
	printf("Exercício 1\n");
	printf("Digite a sua altura\n");
	scanf("%f", &A);
	printf("Digite seu sexo M/F\n");
	scanf(" %c", &sexo);
	if (sexo == 'M' || sexo == 'm') {
		PI = 72.7 * A - 58;
		printf("Peso ideal masculino: %.2f", PI);
	}
	if (sexo == 'F' || sexo == 'f') {
		PI = 62.1 * A - 44.7;
		printf("Peso ideal feminino: %.2f", PI);
	}
	_getch();
}