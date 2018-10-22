// ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
void HalloWord() {

	printf("EAAAIIII\n");
}

int lerValor() {
	int variavel;
	printf(" Numero:");
	scanf_s("%i", &variavel);
	return variavel;
}

int Maior(int a, int b, int c, int d) {

	if (a > b, a > c, a > d) {
		return a;
	}
	else if (b > a, b > c, b > d) {
		return b;
	}
	else if (c > a, c > b, c > d) {
		return c;
	}
	else {
		return d;
	}
}

int main()
{
	int primeiroValor = lerValor();
	int segundoValor = lerValor();
	int terceiroValor = lerValor();
	int quartoValor = lerValor();
	int f = Maior(primeiroValor, segundoValor, terceiroValor, quartoValor);
	printf("O Maior valor e: %i", f);
	system("pause");
    return 0;
}

