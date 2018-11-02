// EXALG2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int lerValor() {
	int variavel = 0;
	printf(" Numero:");
	scanf_s("%i", &variavel);
	return variavel;
}
								//EX 1
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

								//EX 2
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


								//EX 3
//int main()
//{
//	int idade, ano, mes = 12, dia = 365, calc, calcular, calcular1;
//
//	printf("Digite a idade: \n");
//	scanf_s("%i", &idade);
//
//	ano = idade * mes;
//	mes = idade * ano;
//	dia = idade * ano + mes;
//	//calc = idade * ano;
//
//	printf("Por dia e: %i , %i, %i", ano, mes, dia);
//
//	system("pause");
//	return 0;
//}
//

								//EX 4
//int main()
//{
//	float media;
//	int d;
//	int nota1 = lerValor();
//	int nota2 = lerValor();
//	int nota3 = lerValor();
//	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
//	printf("A media e:%0.2f", media );
//	system("pause");
//    return 0;
//}

								//EX 5
//int main()
//{
//	setlocale(LC_ALL, "portuguese");
//
//	int total = 0, imposto = 0, dis = 0, custo = 0;
//
//	printf("Digite o custo de um carro: ");
//	scanf_s("%i", &custo);
//
//	imposto = ((45 * custo)) / 100;
//	dis = ((28 * custo)) / 100;
//
//	total = custo + imposto + dis;
//	printf("Seu carro saíra pelo valor total de: %i", total);
//	printf("\n\n");
//
//	system("pause");
//	return 0;
//
//}

								//EX 6
//int main()
//{
//	setlocale(LC_ALL, "portuguese");
//
//	int n, i, soma;
//
//	printf("Digite o valor de N: ");
//	scanf_s("%i", &n);
//
//	soma = 0;
//	i = 1;
//	while (i <= n)
//	{
//		soma = soma + i;
//		i ++;
//	}
//
//	printf("A soma dos %i primeiros numeros inteiros é: %i", n, soma);
//
//	system("pause");
//	return 0;
//	
//}

									//EX 7
//int main()
//{
//	setlocale(LC_ALL, "portuguese");
//
//	int a = lerValor();
//	int b = lerValor();
//
//	if (a > b)
//	{
//		if (a % b == 0)
//		{
//			printf("São multiplos");
//		}
//		else
//		{
//			printf("Não são multiplos  ");
//		}
//	}
//
//	system("pause");
//	return 0;
//
//}

									//EX 8
//int main()
//{
//	int idade, op = 0;
//	
//	printf("Digite sua idade: ");
//	scanf_s("%i", &idade);
//
//	if (idade < 5)
//	{
//		printf("Abaixo de todas as categorias \n");
//	}
//	else if ((idade >= 5) && (idade <= 7))
//	{
//		printf("Categoria Infantil A \n");
//	}
//	else if ((idade >= 8) && (idade <= 10))
//	{
//		printf("Categoria Infantil B \n");
//	}
//	else if ((idade >= 11) && (idade <= 13))
//	{
//		printf("Categoria Juvenil A \n");
//	}
//	else if ((idade >= 14) && (idade <= 17))
//	{
//		printf("Categoria Juvenil B \n");
//	}
//	else if (idade > 18)
//	{
//		printf("Categoria Adulto \n");
//	}
//	else
//	{
//		printf("Idade invalida \n");
//	}
//
//	system("pause");
//	return 0;
//}




