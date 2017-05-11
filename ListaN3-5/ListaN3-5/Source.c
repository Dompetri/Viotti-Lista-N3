#include "stdio.h"
#include "locale.h"

int idade = 0;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exercício 5\n");
	printf("Digite a idade\n");
	scanf_s("%i", &idade);
	if (idade > 10 && idade < 18) {
		printf("A idade está entre 10 e 18 anos");
	}
	else {
		printf("A idade não está no intervalo pretendido.");
	}
	_getch();
}