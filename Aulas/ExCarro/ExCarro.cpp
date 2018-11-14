// ExCarro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

struct Carro
{
	char modelo[20];
	char Marca[15];
	char cor[10];
	char placa[10];
	int AnoFabricacao[4];
};

struct Funcionario {

	char nome[50];
	char cpf[15];
	float salario;
	int dataNasc[10];
	
	
};


int main()
{
	int i;
	struct Funcionario f;
	
	/*for (i = 0; i < 5; i++) {*/
		printf("informe o nome:");
		fgets(f.nome, 50, stdin);
		printf("informe o cpf:");
		fgets(f.cpf, 15, stdin);
		fflush(stdin);
		printf("informe o salario:");
		scanf_s("%f", &f.salario);
		printf("informe a data de nascimento:");
		scanf_s("%i", &f.dataNasc);
	

	/*for (i = 0; i < 5; i++) {*/
		printf("Nome: %c\n", f.nome);
		printf("cpf %c:\n", f.cpf);
		printf("salario: %f\n", f.salario);
		printf("data: %i\n", f.dataNasc);
		
	
	system("pause");
	return 0;
}

