// imposto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>



int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario = 0, valor = 0, result;



	printf("1 - Calcular salario\n");
	printf("Digite o Salario: ");
	scanf_s("%f", &salario);


			if (salario == 1903.98) {
				printf("sem imposto!");
			}
			
			else if (salario > 1903.99 && salario < 2826.65) {
				valor = (salario * 0.075) - 142.80;
				printf("O imposto será de:%f", valor);

			}
			else if (salario > 2826.66 && salario < 3751.05) {
				valor = (salario * 0.15) - 354.80;
				printf("O imposto será de:%f", valor);
			}

			else if (salario > 3751.06 && salario < 4664.68) {
				valor = (salario * 0.225) - 636.13;
				printf("O imposto será de:%f", valor);
			}
		   else{
				valor = (salario * 0.275) - 869.36;
				printf("O imposto será de:%f", valor);
			}

	
	system("pause");
	return 0;
}
