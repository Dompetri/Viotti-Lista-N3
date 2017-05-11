#include "stdio.h"
#include "locale.h"

char UF;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exercício 6\n");
	printf("Informe a sigla do estado\n");
	scanf_s("%c", &UF);
	fflush(stdin);
	switch (UF) {
	case 'AC':
		printf("Acreano"); 
		break;
	case 'AL':
		printf("Alagoano");
		break;
	case 'AP':
		printf("Amapaense");
		break;
	case 'AM':
		printf("Amazonense");
		break;
	case 'BA':
		printf("Baiano");
		break;
	case 'CE':
		printf("Cearense");
		break;
	case 'DF':
		printf("Brasiliense");
		break;
	case 'ES':
		printf("Capixaba");
		break;
	case 'GO':
		printf("Goiano");
		break;
	case 'MA':
		printf("Maranhense");
		break;
	case 'MT':
		printf("Mato-grossense");
		break;
	case 'MS':
		printf("Sul-mato-grossense");
		break;
	case 'MG':
		printf("Mineiro");
		break;
	case 'PA':
		printf("Paraense");
		break;
	case 'PB':
		printf("Paraibano");
		break;
	case 'PR':
		printf("Paranaense");
		break;
	case 'PE':
		printf("Pernambucano");
		break;
	case 'PI':
		printf("Piauiense");
		break;
	case 'RJ':
		printf("Carioca");
		break;
	case 'RN':
		printf("Potiguar");
		break;
	case 'RS':
		printf("Gaúcho");
		break;
	case 'RO':
		printf("Rondoniense");
		break;
	case 'RR':
		printf("Roraimense");
		break;
	case 'SC':
		printf("Catarinense");
		break;
	case 'SP':
		printf("Paulista");
		break;
	case 'SE':
		printf("Sergipano");
		break;
	case 'TO':
		printf("Tocantinense");
		break;
	}
	getch();
}