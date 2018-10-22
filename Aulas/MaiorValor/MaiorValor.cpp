// MaiorValor.cpp : Defines the entry point for the console application.
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

int Maior(int a, int b, int c, int d, int media) {
	
	if (a > media) {
		return a;
	}
	else if (b > media) {
		return b;
	}
	else if (c > media) {
		return c;
	}
	else if( d > media){
		return d;
	}
	else {
		printf("nenhum valor e maior que a media!");
	}
}
int Media(int a, int b, int c, int d) {
	 
	int media = a + b + c + d / 4;
	return media;

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
