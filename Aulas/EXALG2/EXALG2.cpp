// EXALG2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
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

//ex12
//int main()
//{
//
//	int base, altura;
//		float area;
//	
//	printf("Digite a base:");
//	scanf_s("%i", &base);
//	printf("Digite a altura:");
//	scanf_s("%i", &altura);
//	area =( base + altura )/ 2;
//	printf("A area e:%0.2f" , area);
//	system("pause");
//	return 0;
//}

//ex13
//int main() {
//
//	int i, n, soma = 0;
//	printf("Digite o valor de n: ");
//	scanf_s("%d", &n);
//		for (i = 0; i<n; i++)
//			printf(" %d ", i * 2 + 1);
//		return 1;
//	}

//ex14
//int main() {
//
//	printf("XXXXX\n");
//	printf("X   X\n");
//	printf("X   X\n");
//	printf("X   X\n");
//	printf("XXXXX\n");
//	system("pause");
//	return 0;
//}

//ex15

//int main() {
//	       
//	int potencia, contador;
//
//	printf("Calculo de potencias\n");
//	int x = lerValor();
//	int n = lerValor();
//
//	potencia = 1;
//	contador = 0;
//
//	while (contador != n) {
//		potencia = potencia * x;
//		contador = contador + 1;
//	}
//
//	printf("\nO valor de %i elevado a %i: %i\n", x, n, potencia);
//	system("pause");
//	return 0;
//}


//ex 16

//ex17
//
//int main() {
//
//	printf("        X       \n");
//	printf("       XXX       \n");
//	printf("      XXXXX       \n");
//	printf("     XXXXXXX      \n");
//	printf("    XXXXXXXXX       \n");
//	printf("   XXXXXXXXXXX      \n");
//	printf("  XXXXXXXXXXXXX       \n");
//	printf(" XXXXXXXXXXXXXXX       \n");
//	printf("       XX      \n");
//	printf("       XX      \n");
//	printf("      XXXX     \n");
//	system("pause");
//	return 0;
//}

//ex18

//int main() {
//	int c, x, y;
//
//	printf("\nentre com um valor de 2 a 20: ");
//	scanf_s("%d", &x);
//
//	for (c = 1; c <= x; c++) {
//		for (y = 1; y <= c; y++)
//			printf("%d", y);
//		printf("\n");
//	}
//
//	for (c = c - 2; c>0; c--) {
//		for (y = 1; y <= c; y++)
//			printf("%d", y);
//		printf("\n");
//	}
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//ex19

//int main() {
//	int k, c, m, d, n, i, j;
//
//	printf("Digite a dimensao da matriz\n");
//	scanf_s("%d %d", &k, &c);
//
//	int a[5][5];
//	//aqui foi tirada a matriz b, que era desnecessária.
//
//	printf("Digite os valores da matriz\n");
//	for (i = 0; i<k; i++) {
//		printf("Digite os valores para a %d linha\n", i + 1);
//		for (j = 0; j<c; j++)
//			scanf_s("%d", &a[i][j]);
//	}
//
//	printf("A matriz digitada é\n");
//	for (i = 0; i<k; i++) {
//		for (j = 0; j<c; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("Se você quer multiplicar uma linha entre 1 e se quer multiplicar uma coluna entre 2.\n");
//	scanf_s("%d", &d);
//	if (d > 2 || d < 1)
//		printf("Entrada invalida\n");
//	else {
//
//		if (d == 1) {
//
//			printf("Digite qual a linha que vai ser multiplicada\n");
//			scanf_s("%d", &m);
//
//			printf("Digite o valor pelo qual quer multiplicar\n");
//			scanf_s("%d", &n);
//
//			for (i = 0; i<c; i++) {
//				a[m - 1][i] = n * a[m - 1][i]; //usa-se somente a matriz a percorrendo as colunas (limite: variável c).
//			}
//
//			printf("A matriz multiplicada é\n");
//			for (i = 0; i<k; i++) {
//				for (j = 0; j<c; j++) {
//					printf("%d ", a[i][j]); //imprime-se a matriz já multiplicada.
//				}
//				printf("\n");
//			}
//		}
//
//		if (d == 2) {
//
//			printf("Digite qual a coluna que vai ser multiplicada\n");
//			scanf_s("%d", &m);
//
//			printf("Digite o valor pelo qual quer multiplicar\n");
//			scanf_s("%d", &n);
//
//			for (j = 0; j<k; j++) {
//				a[j][m - 1] = n * a[j][m - 1]; //usa-se somente a matriz a percorrendo as linhas (limite: variável k).
//			}
//
//			printf("A matriz multiplicada é\n");
//			for (i = 0; i<k; i++) {
//				for (j = 0; j<c; j++) {
//					printf("%d ", a[i][j]);
//				}
//				printf("\n");
//			}
//
//		}
//	}
//
//	system("pause"); 
//	return 0; 
//}

//ex20 =  faltaa

//ex 21 = faltaa

//int main()
//{
//	int i, n, soma = 0;
//	printf("Digite um Numero");
//	scanf_s("%d", &n); 
//	for (i = 1; i <= n; i++)
//		if ((n % 2) == 0) {
//			soma = soma + i;
//		}
//	printf(" soma = %d", soma);
//	system("pause");
//	return 0;
//}

//ex 22 = faltaaaa

//int main() {
//	int k, c, m, d, n, i, j;
//
//	printf("Digite a dimensao da matriz\n");
//	scanf_s("%d %d", &k, &c);
//
//	int a[3][3];
//	//aqui foi tirada a matriz b, que era desnecessária.
//
//	printf("Digite os valores da matriz\n");
//	for (i = 0; i < k; i++) {
//		printf("Digite os valores para a %d linha\n", i + 1);
//		for (j = 0; j < c; j++)
//			scanf_s("%d", &a[i][j]);
//	}
//
//	printf("A matriz digitada é\n");
//	for (i = 0; i < k; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("Matriz transposta:\n");
//
//	
//	system("pause");
//	return 0;
//
//}

//ex 23


//ex24
//int main() {
//	int aux = 0;
//
//	int A = lerValor();
//	int B = lerValor();
//
//	aux = A;
//	A = B;
//	B = aux;
//
//	printf("O valor de A:%i e o valor de B:%i", A, B);

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
//	system("pause");
//	return 0;
//}

//ex25
//int main() {
//	float desconto = 0, resto = 0;
//
//	float salario = lerValor();
//	
//	desconto = (salario * 10)/100;
//	resto = ((salario - desconto) * 5)/100;
//	float ultimo = salario - desconto - resto;
//	printf("O salario liquido e:%f", ultimo);
//
//	system("pause");
//	return 0;
//}

//ex 26

//int main()
//{
//
//	int data, mes, ano, dia = 365;
//
//	printf("Digite a quantos anos a pessoa viveu");
//	scanf_s("%i", &data);
//
//	ano = data * dia;
//
//	printf("A pessoa viveu %i dias ", ano);
//
//	system("pause");
//	return 0;
//
//}


//27


//ex28

//int main() {
//
//	float salarioM, comissao = 50, saltotal, total, sal;
//	int quant;
//
//	printf("Digite o valor do salario minimo: ");
//	scanf_s("%f", &salarioM);
//	
//	printf("Quantos carros o funcionario vendeu: ");
//	scanf_s("%i", &quant);
//
//	printf("Digite o valor total de vendas do mes: ");
//	scanf_s("%f", &total);
//	
//	sal = (total * 5) / 100;
//	total = quant * comissao;
//	saltotal = (2 * salarioM) + total + sal;
//
//	printf("O salario total do vendedor e %.2f \n", saltotal);
//
//	system("pause");
//	return 0;
//}

//EX 29 incompleto

//int main()
//{
//
//	int x, y;
//	int i;
//
//	printf("digite um numero entre 2 e 20: ");
//	scanf_s("%i", &x);
//
//	for ( i = x; i > 0; i--){
//		for (y = 1; y <= i; y++) 
//			printf("X%i", y);
//			printf("\n");	
//	}
//	/*
//	for ( i = i - 1; i > 0 ; i--)
//	{
//		for(y = 1; y <= i; y++)
//			printf("%i", y);
//		printf("\n");
//	}*/
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



////EX 35
//int main(void)
//{
//	setlocale(LC_ALL, "portuguese");
//	int idade, sexo, olho, cabelo;
//	int maiorIdade = 0, quantFemi = 0;
//	int validar = 0;
//	
//	do
//	{
//
//	printf("****** Cadastro ******\n\n");
//	for (int i = 0; ; i++)
//	{
//		printf("Digite a idade ");
//		scanf_s("%i", &idade);
//		if (idade < 0)
//
//		break;
//		if (i == 0)
//
//			maiorIdade = idade;
//		else if (maiorIdade > idade )
//		
//		system("cls");
//		printf("Sexo \n");
//		printf("1 - Masculino \n2 - Feminino \n");
//		scanf_s("%i", &sexo);
//
//		system("cls");
//		printf("Cor dos olhos \n");
//
//		printf("1 - Azuis \n2 - Verdes\n3 - Castanhos \n");
//		scanf_s("%i", &olho);
//
//		system("cls");
//		printf("Cor do cabelo \n");
//
//		printf("1 - louro \n2 - castanho\n3 - preto \n");
//		scanf_s("%i", &cabelo);
//		system("cls");
//
//		if (sexo == 2)
//			if ((idade >= 18) && (idade <= 35))
//				if (olho == 2)
//					if (cabelo == 3)
//						quantFemi++;
//
//		validar = 1;
//		}
//	} while (idade != -1);
//	if (!validar)
//	{
//		("Não há dados");
//	}
//	else
//	{
//		printf("A maior idade é %i\n A quantidade de mulheres entre 18 e 35 que tem olhos verdes e cabelo preto é de %i \n", maiorIdade, quantFemi);
//	}
//
//
//	system("pause");
//	return 0;
//
//}

