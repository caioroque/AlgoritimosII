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
//

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

//Ex9

//int main()
//{
//	int op = 0;
//	float media;
//	float mediaP;
//	float mediaH;
//	int nota1 = lerValor();
//	int nota2 = lerValor();
//	int nota3 = lerValor();
//	printf("Escolha um op\n");
//	printf("1. Aritmetica\n");
//	printf("2. Ponderada\n");
//	printf("3. Harmonica\n");
//	scanf_s("%i", &op);
//	
//	if (op == 1) {
//		system("cls");
//		printf("Aritimetica\n");
//		media = (nota1 + nota2 + nota3) / 3;
//		printf("A media do aluno e:%0.2f", media);
//	}
//	else if (op == 2) {
//
//		printf("Ponderada\n");
//		mediaP = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / 10;
//		printf("A media será de:%0.2f", mediaP);
//
//	}
//	else if (op == 3) {
//		printf("Harmonica\n");
//	/*	mediaH =  ((1 / nota1) + (1 / nota2) + (1 / nota3)) / 3;*/
//		printf("A será de:%0.2f", 3 /((1 / nota1) + (1 / nota2) + (1 / nota3)));
//	}
//	else {
//		printf("Não Valido!");
//	}
//		
//
//
//	system("pause");
//	return 0;
//}

// EX10
//int main()
//{
//	setlocale(LC_ALL, "Portuguese");
//	float cod = 0, valor = 0, preco = 0;
//	int  quant = 0;
//
//
//
//	printf("1 - Calcular salario\n");
//	printf("Digite o cod: ");
//	scanf_s("%f", &cod);
//	printf("Digite a quantidade: ");
//	scanf_s("%i", &quant);
//
//
//	if (cod == 1001) {
//		preco = 5.32;
//		valor = (preco * quant);
//		printf("O preco é:%0.2f" , valor);
//	}
//
//	else if (cod == 1324) {
//		preco = 6.45;
//		valor = (preco * quant);
//		printf("O preco é:%0.2f", valor);
//
//	}
//	else if (cod == 6548) {
//		preco = 2.37;
//		valor = (preco * quant);
//		printf("O preco é:%0.2f", valor);
//	}
//
//	else if (cod == 947) {
//		preco = 5.32;
//		valor = (preco * quant);
//		printf("O preco é:%0.2f", valor);
//	}
//	else if(valor = (cod == 7623)){
//		preco = 6.45;
//		valor = (preco * quant);
//		printf("O preco é:%0.2f", valor);
//	}
//
//
//	system("pause");
//	return 0;
//}
//

