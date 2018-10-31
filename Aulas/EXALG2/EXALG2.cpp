// EXALG2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lerValor() {
	int variavel = 0;
	printf(" Numero:");
	scanf_s("%i", &variavel);
	return variavel;
}
//EX1
//int main()
//{
//	float raiz;
//	int d;
//	int x1 = lerValor();
//	int x2 = lerValor();
//	int y1 = lerValor();
//	int y2 = lerValor();
//	d = (x2*x2 - 2 * x1*x2 + x1*x1) + (y2*y2 - 2 * y2*y1 + y1*y1);
//	raiz = sqrt(d);
//	printf("RESPOSTA:%0.2f", raiz);
//	system("pause");
//    return 0;
//}

//EX2
//int main()
//{
//	float Z;
//	int  R, S, D;
//	int A = lerValor();
//	int B = lerValor();
//	int C = lerValor();
//	R = (A*A) + (B*B);
//	S = (B*B )+ (C*C);
//	D = R + S;
//	Z = (D / 2);
//	printf("RESPOSTA:%0.2f", Z);
//	system("pause");
//	return 0;
//
//}


//EX3
//int resto(int x, int y);
//int main(void);
//
//int resto(int x, int y) {
//	int q, r;
//	q = x / y;
//	r = x - q * y;
//	return(r);
//}
//
//int main(void) {
//	int x, anos, dias, y, w, meses, diass;
//	dias = lerValor();
//	x = resto(dias, 365);
//	if (x == 0)
//	{
//		anos = (dias / 365);
//		printf("%d ano(s) e 0 mes(es) e 0 dia(s)", anos);
//	}
//	else
//	{
//		anos = (dias / 365);
//		y = resto(dias, 365);
//		w = resto(y, 30);
//		if (w = 0)
//		{
//			meses = y / 30;
//			printf("%d ano(s) e %d mes(es) e 0 dia(s)", anos, meses);
//		}
//		else
//		{
//			anos = dias / 365;
//			meses = (y / 30);
//			diass = resto(y, 30);
//			printf("%d ano(s) e %d mes(es) e %d dia(s)", anos, meses, diass);
//		}
//	}
//

