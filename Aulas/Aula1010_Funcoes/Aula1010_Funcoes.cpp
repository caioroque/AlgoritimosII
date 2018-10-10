// Aula1010_Funcoes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void HalloWord() {

	printf("EAAAIIII\n");
}

int Soma2Valores(int a, int b) {
	
	return a + b;
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
	int d = Soma2Valores(primeiroValor, segundoValor);
	printf("%i", d);
	system("pause");
    return 0;
}

