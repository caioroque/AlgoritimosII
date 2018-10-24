// Case.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>



int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario = 0, valor = 0, result;
	int op = 0;


	printf("1 - Calcular salario\n");
	printf("\nEscolha uma opcao: ");
	scanf_s("%i", &op);

	printf("Digite o Salario: ");
	scanf_s("%f", &salario);


	do {
		switch (op)
		{
		case 1:
			if (salario == 1903.98) {
				printf("sem imposto!");
			}
			break;
		case 2:
		
			if(salario > 1903.99 && salario < 2826.65 ){
				valor = (salario * 7.5) - 142.80;
				printf("O imposto será de:%f", valor);
			}
		case 3:
			if (salario > 2826.66 && salario < 3751.05) {
				valor = (salario * 15.0) - 354.80;
				printf("O imposto será de:%f", valor);
			}

		case 4:
			if (salario > 3751.06 && salario < 4664.68) {
				valor = (salario * 22.5) - 636.13;
				printf("O imposto será de:%f", valor);
			}
		case 5:
			if (salario > 4664.68) {
				valor = (salario * 27.5) - 869.36;
				printf("O imposto será de:%f", valor);
			}

		default:
			printf_s("Operação invalida");
			}
			printf("\n\t O resultado é: %0.2f", result);
			printf("\n Digite 1 para continuar: ");
			scanf_s("%i", &op);

			} while (op == 1);

			/*system("pause");
			return 0;*/
			}
