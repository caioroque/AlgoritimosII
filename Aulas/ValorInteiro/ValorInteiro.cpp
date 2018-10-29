// ValorInteiro.cpp : Defines the entry point for the console application.
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

int main()
{

	int n1 = lerValor();
	int n2 = lerValor();
	while (n1 < n2-1) {
		n1++;
		printf("%i\t", n1);
	
	}
	printf("\n\n");
	system("pause");
	return 0;
}
