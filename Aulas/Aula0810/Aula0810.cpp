// Aula0810.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int a;
float b;
double c;
bool d;


int main()
{
	int e;

	printf("BORAAAAAAA\n");
	printf("valor total:%i\n", 20 + 10);

	a = 20;
	e = 30;

	int f = a + e;

	printf("o resultado é: %i\n", f);

	scanf_s("%i", &f);
	printf("vc digitou %i\n", f);

	printf("digite um valor:");
	scanf_s("%f", &b);
	printf("o resultado é: %i\n", b);
	
	system("pause");



    return 0;
}

