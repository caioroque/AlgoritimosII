// EXALG2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h> 
#define PI 3.141592 

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

//ex4
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

//Ex5
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

//Ex11
//
//int main()
//{
//	float  area, raio;
//	printf("Digite o raio:\n");
//	scanf("%f", &raio);
//	area = PI*(pow(raio, 2));
//	printf("A area da circunferencia é: %.2f", area);
//
//	return 0;
//}

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
//void vetor(char* string, int* posicoes, int* numDeLetras, char letra) {
//
//	for (int i = 0; i < 100; i++) {
//		if (string[i] == letra) {
//			posicoes[*numDeLetras] = i;
//			(*numDeLetras)++;
//		}
//
//		if (string[i] == '\n') {
//			break;
//		}
//	}
//}
//
//int main() {
//
//	char frase[100], letra;
//	int posicoes[100], qnt = 0;
//
//	printf("Digite uma frase: ");
//	for (int i = 0; i < 100; i++) {
//		scanf_s("%c", &frase[i]);
//
//		if (frase[i] == '\n') {
//			break;
//		}
//	}
//
//	printf("Digite uma letra: ");
//	scanf_s("%c", &letra);
//
//	vetor(frase, posicoes, &qnt, letra);
//
//	printf("Total de letras encontradas na frase: %d\n", qnt);
//	printf("Posicao de cada letra na frase: ");
//	for (int i = 0; i < qnt; i++) {
//		printf("%d ", posicoes[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}


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
//	scanf_s("%i", &x);
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

//ex20 
//#define M 3 
//#define M 4 
//
//void funcao(int x[][], int lin, int col) {
//	int i, j;
//	for (i = 0; i<lin; i++)
//		for (j = 0; j<col; j++)
//			if (x[i][j] < 0)
//				x[i][j] = -x[i][j];
//}
//int main() {
//	int mat[M][N], i, j;
//	for (i = 0; i<M; i++)
//		for (j = 0; j<N; j++) {
//			printf("Informe mat[%d][%d]: ", i, j);
//			scanf("%d", &mat[i][j]);
//		}
//	printf("Matriz antes\n");
//	for (i = 0; i<M; i++) {
//		for (j = 0; j<N; j++)
//			printf("%d\t", mat[i][j]);
//		printf("\n");
//	}
//	funcao(mat, M, N);
//	printf("Matriz depois\n");
//	for (i = 0; i<M; i++) {
//		for (j = 0; j<N; j++)
//			printf("%d\t", mat[i][j]);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//ex 21 

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

//ex 22

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
//}

//ex 23

//int main() {
//
//	int tempo, velocidade, distancia, litros;
//	
//	printf("Informe o tempo de viajem:");
//	scanf_s("%i", &tempo);
//	printf("Informe a velocidade media:");
//	scanf_s("%i", &velocidade);
//	distancia = tempo * velocidade;
//	litros = distancia / 12;
//	printf("A velocidade media e:%i\n", velocidade);
//	printf("O tempo da viagem foi:%i\n", tempo);
//	printf("A distancia da viagem foi:%i\n", distancia);
//	printf("A quantidade de litros utilizados na viagem foi:%i\n", litros);
//
//	system("pause");
//	return 0;
//}


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
//
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
//int main()
//{
//
//	int troco1, troco10, troco100, compra, trocoreal, troco;
//
//	printf("Digite o valor da compra: ");
//	scanf_s("%i", &compra);
//
//	printf("Digite o valor pago: ");
//	scanf_s("%i", &troco);
//
//	troco100 = (troco / 100);
//	troco10 = ((troco - troco100) / 10);
//	troco1 = (troco - troco100 - troco10);
//
//	trocoreal = compra - troco;
//
//	printf("Notas de 100: %i\n", troco100);
//	printf("Notas de 10: %i\n", troco10);
//	printf("Notas de 1: %i\n", troco1);
//	printf("O seu troco e: %i\n", trocoreal);
//	printf("O valor total da compra e %i\n", compra);
//
//	system("pause");
//	return 0;
//}

// Exemplo função
//void Helloworld(int num1, int num2)
//{
//	int aux;
//
//	printf("Digite um numero");
//	scanf_s("%i", &num1);
//
//	printf("Digite um numero");
//	scanf_s("%i", &num2);
//	
//	aux = num1 + num2;
//
//	printf("A soma e %i", aux);
//
//}
//
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//
//	Helloworld(num1, num2);
//
//	system("pause");
//	return 0;
//}

//ex28

//int main() {
//
//	float salario = 1900;
//	int quant;
//	float comissao = 50;
//	float valor = 0;
//	float valorFinal = 0;
//	printf("Quantos carros vc vendeu?");
//	scanf_s("%i", &quant);
//
//	valor = (salario +(quant * comissao) * 0.5) ;
//	valorFinal = (valor * 5)/100;
//	printf("%f", valorFinal);
//
//	system("pause");
//	return 0;
//}

//ex29

//int main() {
//	int X = lerValor();
//	int Y = lerValor();
//	int Z = lerValor();
//
//	if (X == Y && Y == Z && X == Z) {
//		printf("O Triangulo e equilatero!!");
//	}
//	else if (X == Y && Y != Z ) {
//		printf("O Triangulo e isósceles!!");
//
//	}
//	else if (X != Y && Y != Z) {
//		printf("O Triangulo e escanor!!\n");
//		printf("O Pecado Do Orgulho!!");
//	}
//	system("pause");
//	return 0;
//}

//EX30

//int main() {
//	int c, x, y;
//
//	printf("\nEntre com um valor de 2 a 20: ");
//	scanf("%d", &x);
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
//	return 0;
//}

//Ex31

//int main() {
//
//	int a, i ,negativos = 0;
//
//	for (i = 0; i <= 4; i++) {
//
//		printf("Informe um numero:");
//		scanf_s("%i", &a);
//		if (a < 0) {
//			negativos++;
//		}
//	}
//	printf("valor:%i\n",negativos);
//	system("pause");
//	return 0;
//
//
//}


//Ex32

//int main() {
//
//	int filhos, quant = 0, TotalFilhos = 0;
//	float salario = 0, media, MaiorS = 0, TotalSalario=0, mediaFilhos, salario100=0, Percento100= 0;
//
//	do {
//			printf("Qual seu salario:");
//			scanf_s("%f", &salario);
//			if (salario < 0) {
//				break;
//			}
//			else
//			{
//				printf("Quantos filhos:");
//				scanf_s("%i", &filhos);
//				TotalFilhos = TotalFilhos + filhos;
//				quant++;
//				TotalSalario = MaiorS + salario;
//				if (salario > MaiorS) {
//					MaiorS = salario;
//				}
//				if (salario <= 100) {
//					salario100 = salario;
//				}
//			}
//			
//	} while (salario > 0);
//	media = TotalSalario / quant;
//	mediaFilhos = TotalFilhos / quant;
//	Percento100 = salario100 / quant;
//	printf("Media de salario da populacao:%0.2f\n", media);
//	printf("Media de filhos e: %0.2f\n", mediaFilhos);
//	printf("O maior salario e: %0.2f\n", MaiorS);
//	printf("O Percentual de pessoas com salario menor que 100: %0.2f\n", Percento100);
//	system("pause");
//	return 0;
//}

//EX 33
//int main()
//{
//	float juca = 1.10;
//	float chico = 1.50;
//	int ano;
//	ano = 0;
//	while (juca < chico)
//	{
//		juca = juca + 0.03;
//		chico = chico + 0.02;
//		ano = ano + 1;
//	}
//	printf("%d Anos deverao ser necessarios para que Juca seja maior que Chico. \n", ano);
//	printf("%f A Altura de Juca daqui a 41 anos\n", juca);
//	printf("%f A altura de Chico daqui a 41 anos\n", chico);
//	system("PAUSE");
//	return 0;
//}



//Ex 34
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//		int x, n, maior = 0, menor = 9999;
//		for (x = 1; x <= 50; x++) {
//				printf("informe um numero \n");
//				scanf("%d", &n);
//	
//				if (n > maior) {
//					maior = n;
//				}
//				if (n < menor) {
//					menor = n;
//				}
//		}
//		printf("o maior numero e %d e o menor e %d\n", maior, menor);
//		system("PAUSE");
//		return 0;
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


//EX36
//#define TAM 20
//int main() {
//	int i, j, n;
//	for (i = 0; i < TAM; i++) {
//		printf("Digite um número para o cálculo de sua tabuada de 1 a n x n\n");
//		scanf("%d", &n);
//		for (j = 1; j <= n; j++) {
//			printf("%d x %d = %d\n", j, n, j * n);
//		}
//	}
//	system("pause");
//	return 0;
//}


//EX 37
//struct dma {
//	int dia;
//	int mes;
//	int ano;
//};
//
//bool valida(struct dma data) {
//	/* retorna true se data válida ou false se inválida */
//	if (data.mes < 1 || data.mes > 12)
//		return false;
//	else {
//		if (data.mes == 2) {
//			if ((data.ano % 4 == 0) && (data.ano % 100 != 0) || (data.ano % 400 == 0)) {
//				if (data.dia < 1 || data.dia > 29)
//					return false;
//			}
//			else
//				if (data.dia < 1 || data.dia > 28)
//					return false;
//		}
//		else {
//			if (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11) {
//				if (data.dia < 1 || data.dia > 30)
//					return false;
//			}
//			else
//				if (data.dia < 1 || data.dia > 31)
//					return false;
//		}
//	}
//	return true;
//}
//
//int dias_decorridos(struct dma data_ini, struct dma data_fim) {
//	int dias_no_mes[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, tot_dias_ini, tot_dias_fim, i;
//	tot_dias_ini = data_ini.ano * 365.2425;
//	for (i = 1; i<data_ini.mes; i++)
//		tot_dias_ini += dias_no_mes[i];
//	if (((data_ini.ano % 4 == 0) && (data_ini.ano % 100 != 0) || (data_ini.ano % 400 == 0)) && data_ini.mes > 2)
//		tot_dias_ini++;
//	tot_dias_ini += data_ini.dia;
//
//	tot_dias_fim = data_fim.ano * 365.2425;
//	for (i = 1; i<data_fim.mes; i++)
//		tot_dias_fim += dias_no_mes[i];
//	if (((data_fim.ano % 4 == 0) && (data_fim.ano % 100 != 0) || (data_fim.ano % 400 == 0)) && data_fim.mes > 2)
//		tot_dias_fim++;
//	tot_dias_fim += data_fim.dia;
//
//	return (tot_dias_fim - tot_dias_ini);
//}
//
//
//int main() {
//	struct dma data1, data2;
//	printf("Informe a primeira data: ");
//	scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
//	while (!valida(data1)) {
//		printf("Data inválida. Reinforme a primeira data: ");
//		scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
//	}
//	printf("Informe a segunda data: ");
//	scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
//	while (!valida(data2)) {
//		printf("Data inválida. Reinforme a segunda data: ");
//		scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
//	}
//	printf("Dias decorridos: %d\n", dias_decorridos(data1, data2));
//	return 0;
//}

//EX38
//typedef struct dado {
//	int horas;
//	int minutos;
//}Dado;
//
//int main()
//{
//	Dado w;
//	int x, y;
//	printf("informe  os minutos");
//	scanf_s("%d", &w.minutos);
//	y = w.minutos / 60;
//	x = w.minutos % 60;
//	printf("%i:%i", y, x);
//	system("pause");
//	return 0;
//}

//EX 39
//typedef struct
//{
//	char nome[50];
//	long altura;
//	float peso;
//	int cpf;
//	char sexo;
//} imc;
//
//int main()
//{
//	imc imcs[50];
//	int code;
//	int op, i = 0, j = 0, IMC, h, DIM = 0, teste;
//	char H, M;
//INICIO:
//	printf(" PROGRAMA IMC ");
//	printf("\n\n Deseja cadastrar pessoa? | < 1 > SIM | < 2 >  NAO |\n");
//	scanf_s("%i", &op);
//	switch (op)
//	{
//	case 1: {goto CADASTRAR; }
//	case 2: {goto SAIR; }
//	}
//	for (;; i++)
//	{
//	REFAZ: system("cls");
//		printf("\n\n Deseja continuar cadastros? | < 1 > |");
//		printf("\n Consultar?                  | < 2 > |");
//		printf("\n SAIR                        | < 3 > |\n");
//		scanf_s("%i", &op);
//		switch (op) {
//		case 1: {goto CADASTRAR; }
//		case 2: {goto CONSULTAR; }
//		case 3: {goto SAIR; }
//		}
//
//	CADASTRAR: i = i + 1; DIM = i;
//
//		printf("\n NOME da %io pessoa: \t", i);     scanf_s(" %s", &imcs[i].nome);
//		printf("\n ALTURA da %io pessoa: \t", i);   scanf_s(" %ld", &imcs[i].altura);
//		printf("\n PESO da %io pessoa: \t", i);     scanf_s(" %f", &imcs[i].peso);
//		printf("\n CPF da %io pessoa: \t", i);      scanf_s(" %i", &imcs[i].cpf);
//	CONSULTAR:
//		printf("\n SEXO da %io pessoa: \t", i);
//		printf("\n < 1 - HOMEM > | < 2 - MULHER > ");
//		scanf_s("%i", &op);
//		switch (op)
//		{
//		case 1:
//			goto CONSULTARH;
//		case 2:
//			goto CONSULTARM;
//		}
//		system("cls");
//		for (j = 1; j <= DIM; j++) {
//			printf("\n Codigo %i: - %i", j, imcs[j].cpf);
//		}
//		goto REFAZ;
//	}
//
//CONSULTARH:
//	printf("\n Digite o CPF para calcular o IMC\t");
//	scanf_s("%i", &code);
//	for (j = 1; j <= DIM; j++) {
//		if (code == imcs[j].cpf)
//		{
//			h = ((imcs[i].altura / 100) ^ 2);
//			IMC = imcs[j].peso / h;
//			if (IMC<20.7) { goto ABAIXO; }
//			if ((IMC>20.8) && (IMC <26.4)) { goto NORMAL; }
//			if ((IMC >26.5) && (IMC<27.8)) { goto ACIMA; }
//			if ((IMC >27.9) && (IMC<31.1)) { goto SOBREPESO; }
//			if (IMC >31, 1) { goto OBESO; }
//			goto INICIO;
//		}
//		if (code != imcs[j].cpf)
//		{
//			printf("\n >> CPF INVALIDO! <<");
//			//getch();
//			system("cls");
//			goto CONSULTARH;
//		}
//	}
//CONSULTARM:
//	printf("\n Digite o CPF para calcular o IMC\t");
//	scanf_s("%i", &code);
//	for (j = 1; j <= DIM; j++) {
//		if (code == imcs[j].cpf)
//		{
//			h = ((imcs[i].altura / 100) ^ 2);
//			IMC = imcs[j].peso / h;
//			if (IMC<19.1) { goto ABAIXO; }
//			if ((IMC>19.1) && (IMC <= 25.8)) { goto NORMAL; }
//			if ((IMC >25.8) && (IMC <= 27.3)) { goto ACIMA; }
//			if ((IMC >27.3) && (IMC <= 32.2)) { goto SOBREPESO; }
//			if (IMC >32.2) { goto OBESO; }
//			goto INICIO;
//		}
//		if (code != imcs[j].cpf)
//		{
//			printf("\n >> CPF INVALIDO! <<");
//			//getch();
//			system("cls");
//			goto CONSULTARM;
//		}
//	}
//ABAIXO: printf("\n O IMC eh: %.2f", imcs[j].peso / h);
//	printf("\n ABAIXO DO PESO");
//	//getch();
//	goto REFAZ;
//NORMAL: printf("\n O IMC eh: %.2f", imcs[j].peso / h);
//	printf("\n PESO NORMAL");
//	//getch();
//	goto REFAZ;
//ACIMA:  printf("\n O IMC eh: %.2f", imcs[j].peso / h);
//	printf("\n ACIMA DO PESO");
//	//getch();
//	goto REFAZ;
//SOBREPESO: printf("\n O IMC eh: %.2f", imcs[j].peso / h);
//	printf("\n ATENÇÃO SOBREPESO!!");
//	//getch();
//	goto REFAZ;
//OBESO: printf("\n O IMC eh: %.2f", imcs[j].peso / h);
//	printf("\n CUIDADO, RISCO DE INFARTO");
//	//getch();
//	goto REFAZ;
//SAIR: return 0;
//
//	system("pause");
//}


//EX 40

//int main()
//{
//	setlocale(LC_ALL, "Portuguese");
//	float cod = 0, precotot = 0, preco = 0;
//	int  quant = 0;
//
//	do
//	{
//		printf("Digite o cod: ");
//		scanf_s("%f", &cod);
//
//		if (cod == -1)
//		{
//			break;
//		}
//		else
//		{
//
//			printf("Digite a quantidade: ");
//			scanf_s("%i", &quant);
//
//			if (cod == 1001) {
//				preco = 5.32;
//				precotot = (preco * quant);
//			}
//
//			else if (cod == 1324) {
//				preco = 6.45;
//				precotot = (preco * quant);
//
//			}
//			else if (cod == 6548) {
//				preco = 2.37;
//				precotot = (preco * quant);
//			}
//
//			else if (cod == 947) {
//				preco = 5.32;
//				precotot = (preco * quant);
//			}
//			else if (cod == 7623) {
//				preco = 6.45;
//				precotot = (preco * quant);
//			}
//		}
//	} while (cod > -1);
//
//	printf("O valor total é %.2f", precotot);
//
//	system("pause");
//	return 0;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

