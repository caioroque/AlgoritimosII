// Aula1010_Funcoes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void HalloWord() {

	printf("EAAAIIII\n");
}

int Soma(int a, int b) {
	
	return a + b;
}

int Subtracao(int a, int b) {

	return a - b;
}

int Divisao(int a, int b) {

	return a / b;
}

int Multiplicacao(int a, int b) {

	return a * b;
}


int main()
{
	HalloWord();

	int primeiroValor = lerValor();
	int segundoValor = lerValor();
	int d = Soma(primeiroValor, segundoValor);
	int d = Subtracao(primeiroValor, segundoValor);
	int d = Divisao(primeiroValor, segundoValor);
	int d = Multiplicacao(primeiroValor, segundoValor);
	printf("%i", d);
	system("pause");
    return 0;
}

