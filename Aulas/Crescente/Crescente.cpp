// Crescente.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
void HalloWord() {

	printf("EAAAIIII\n");
}
int lerValor() {
	int variavel = 0;
	printf(" Numero:");
	scanf_s("%i", &variavel);
	return variavel;
}
void ImprimirValor() {
	int n1, n2, n3 ,n4, n5, numero;
	int i = 0;

	while (i < 5) {

		numero = lerValor();
		if (i == 0) {
			n1 = numero;
		}
		else if (i == 1) {
			n2 = numero;
		}
		else if (i == 2) {
			n3 = numero;
		}
		else if (i == 3) {
			n4 = numero;
		}
		else if (i == 4) {
			n5 = numero;
		}
		i++;
	}

	if ((n1 <= n2) && (n2 <= n3) && (n3 <= n4) && (n4 <= n5))
	{
		printf("Ordem Crescente:%i %i %i %i %i\n", n1, n2, n3, n4, n5);

	}
	else {
		printf("Os numeros nao estao em ordem crescente");
	}

}

void  Crescente() {
	int numero = 0, anterior = 0;
	int crescente = 1, i = 0;


	while (i < 5)
	{
		if (i == 1) {
			anterior = numero;
		}
		else {
			if (anterior > numero) {
				crescente = 0;
			}

		}

		anterior = numero;
		i++;
	}
	if (crescente == 1) {
		printf("Os numeros são crescentes");
	}
	else {
		printf("Os numeros nao estao em ordem crescente");
	}
}
int main()
{
	ImprimirValor();
	
	printf("\n\n");
	system("pause");
	return 0;
}
