// MaiorValor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
void HalloWord() {

	printf("EAAAIIII\n");
}

float lerValor() {
	float variavel = 0;
	printf(" Numero:");
	scanf_s("%f", &variavel);
	return variavel;
}
float MediaValor(float a, float b, float c, float d) {

	float media = a + b + c + d / 4;
	return media;

}

void MaiorDoQueMedia(float a, float b, float c, float d) {

	float media = MediaValor(a, b, c, d);

	printf("O valor da media eh: %f\nOs valores maiores das medias sao:", media);
	if (a > media) {
		printf("%f", a);
	}
	 if (b > media) {
		printf("%f", b);
	}
	if (c > media) {
		printf("%f", c);
	}
	 if (d > media) {
		printf("%f", d);
	}
	
}


int main()
{

	float primeiroValor = lerValor();
	float segundoValor = lerValor();
	float terceiroValor = lerValor();
	float quartoValor = lerValor();
	//float f = Media(primeiroValor, segundoValor, terceiroValor, quartoValor);
	MaiorDoQueMedia(primeiroValor, segundoValor, terceiroValor, quartoValor);
	
	system("pause");
	return 0;
}
