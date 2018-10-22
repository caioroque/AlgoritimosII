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

int Multi(int a, int b) {

	return a * b;
}
int Sub(int a, int b) {

	return a - b;
}
int Div(int a, int b) {

	return a / b;
}

int lerValor() {
	int variavel;
	printf(" Numero:");
	scanf_s("%i", &variavel);
	return variavel;
}
int main()
{
	HalloWord();

	int primeiroValor = lerValor();
	int segundoValor = lerValor();
	int d = Soma(primeiroValor, segundoValor);
	int a = Multi(primeiroValor, segundoValor);
	int b = Sub(primeiroValor, segundoValor);
	int c = Div(primeiroValor, segundoValor);
	printf("Soma:%i\n", d);
	printf("Multi:%i\n", a);
	printf("Sub:%i\n", b);
	printf("Div:%i\n", c);
	system("pause");
    return 0;
}

