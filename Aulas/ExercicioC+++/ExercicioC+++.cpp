//#include <stdio.h>
//#include "stdafx.h"
//#include <locale.h>
//#include <string.h>
//#define DIM 1
//#define MESES 5
//
//// Prot�tipos
//void recebeValores(int filiais[DIM][1020]);
//void incrementaQuantidadeSaquesMes(int mes);
//void exibeQuantidadeSaquesMes(void);
//int quantidadeSaques(int mes);
//void somaSaquesPorMes(int filiais[DIM][1020]);
//int menorValorSaques();
//int mesMaiorSomatorio();
//void mesesSemSaque(void);
//void imprimeMesesSemSaque(void);
//
//// Vari�veis globais
//int saques[MESES];
//int somaSaques[MESES];
//int mesesSemNenhumSaque[MESES];
//
//int main() {
//	setlocale(LC_ALL, "portuguese");
//	int filiais[DIM][1020];
//	recebeValores(filiais);
//	exibeQuantidadeSaquesMes();
//
//	somaSaquesPorMes(filiais);
//
//	// Imprime o menor valor dos saques
//	printf("O menor valor dos saques �: %i\n", menorValorSaques());
//
//	// Imprime o m�s com maior valor somat�rio
//	printf("O m�s com maior valor somat�rio �: %i\n", mesMaiorSomatorio());
//
//	// Imprime meses sem saque
//	imprimeMesesSemSaque();
//
//}
//
//// Recebe os valores
//void recebeValores(int filiais[DIM][1020]) {
//	int i = 0, j = 0, l = 0, valor;
//
//	// Realiza at� o fim das filiais
//	for (j = 0; j < DIM; j++) {
//		printf("Informe o valores da filial %i:\n", j + 1);
//		do {
//			printf("Informe um valor de saque no m�s %i: ", i);
//			scanf("%i", &valor);
//			if (valor >= 0) {
//				// Salva o valor na matriz
//				filiais[j][l] = valor;
//
//				// Incrementa a quantidade de saques no m�s
//				incrementaQuantidadeSaquesMes(i);
//			}
//			else {
//				// Finaliza o m�s
//				filiais[j][l] = -1;
//
//				// Muda de m�s
//				i++;
//			}
//
//			// Incrementa coluna
//			l++;
//
//			// Se chegar no fim do vetor, finaliza o do while
//			if (l == 1020) {
//				break;
//			}
//		} while (i <= MESES);
//		// Mensagem de aviso de mudan�a de filial
//		printf("Filial %i preenchida, indo para a filial %i:\n", j + 1, j + 2);
//		// Reseta os meses
//		i = 0;
//	}
//	return;
//}
//
//// Incrementa quantidade de saques no m�s
//void incrementaQuantidadeSaquesMes(int mes) {
//	saques[mes] += 1;
//	return;
//}
//
//// Exibe quantidade de saques no m�s
//void exibeQuantidadeSaquesMes(void) {
//	int mes;
//	printf("Qual m�s quer verificar a quantidade de saques?: ");
//	scanf("%i", &mes);
//	printf("A quantidade de saques no m�s de %i foram: %i\n", mes, quantidadeSaques(mes));
//}
//
//// Retorna a quantidade de saques
//int quantidadeSaques(int mes) {
//	return saques[mes];
//}
//
//// Soma todos saques
//void somaSaquesPorMes(int filiais[DIM][1020]) {
//	int i, j, l;
//	for (i = 0; i < MESES; i++) {
//		for (j = 0; j < DIM; j++) {
//			if (filiais[j][l] >= 0) {
//				somaSaques[i] = somaSaques[i] + filiais[j][l];
//			}
//
//			l++;
//		}
//	}
//	return;
//}
//
//// Imprime o menor valor dos saques
//// Fun��o porca por�m funciona
//int menorValorSaques() {
//	int janeiro = somaSaques[0];
//	int fevereiro = somaSaques[1];
//	int marco = somaSaques[2];
//	int abril = somaSaques[3];
//	int maio = somaSaques[4];
//	int junho = somaSaques[5];
//
//	if (janeiro < fevereiro && janeiro < marco && janeiro < abril && janeiro < maio && janeiro < junho) {
//		return janeiro;
//	}
//	else if (fevereiro < janeiro && fevereiro < marco && fevereiro < abril && fevereiro < maio && fevereiro < junho) {
//		return fevereiro;
//	}
//	else if (marco < janeiro && marco < fevereiro && marco < abril && marco < maio && marco < junho) {
//		return marco;
//	}
//	else if (abril < janeiro && abril < fevereiro && abril < marco && abril < maio && abril < junho) {
//		return abril;
//	}
//	else if (maio < janeiro && maio < fevereiro && maio < marco && maio < abril && maio < junho) {
//		return maio;
//	}
//	else {
//		return junho;
//	}
//}
//
//int mesMaiorSomatorio() {
//	int janeiro = somaSaques[0];
//	int fevereiro = somaSaques[1];
//	int marco = somaSaques[2];
//	int abril = somaSaques[3];
//	int maio = somaSaques[4];
//	int junho = somaSaques[5];
//
//	if (janeiro > fevereiro && janeiro > marco && janeiro > abril && janeiro > maio && janeiro > junho) {
//		return 0;
//	}
//	else if (fevereiro > janeiro && fevereiro > marco && fevereiro > abril && fevereiro > maio && fevereiro > junho) {
//		return 1;
//	}
//	else if (marco > janeiro && marco > fevereiro && marco > abril && marco > maio && marco > junho) {
//		return 2;
//	}
//	else if (abril > janeiro && abril > fevereiro && abril > marco && abril > maio && abril > junho) {
//		return 3;
//	}
//	else if (maio > janeiro && maio > fevereiro && maio > marco && maio > abril && maio > junho) {
//		return 4;
//	}
//	else {
//		return 5;
//	}
//}
//
//// Verifica meses sem saque
//void mesesSemSaque(void) {
//	int i, j = 0;
//
//	for (i = 0; i < MESES; i++) {
//		if (somaSaques[i] <= 0) {
//			mesesSemNenhumSaque[j] = i;
//			j++;
//		}
//	}
//
//	return;
//}
//
//void imprimeMesesSemSaque(void) {
//	int i;
//
//	printf("O meses sem saque foram: ");
//	for (i = 0; i < MESES; i++) {
//		printf("%i ", mesesSemNenhumSaque[i]);
//	}
//
//}
//

//Ponteiro
//Ponteiro � um tipo de dado capaz de armazenar um
//endere�o de mem�ria ou endere�o de outra vari�vel;
//? Um endere�o(ou �ndice num�rico) � definido para cada
//unidade de mem�ria do sistema, transformando toda a
//mem�ria em um grande vetor;
//? A partir de um endere�o � poss�vel obter do sistema o valor
//armazenado na unidade de mem�ria de tal endere�o;
//
//Declarando um ponteiro(para uma vari�vel do tipo inteiro) :
//	? int *ptr;
//? Atribuindo o endere�o da vari�vel
//? ptr = &a;
//? Para acessar o conte�do de uma posi��o de mem�ria, cujo
//endere�o est� armazenado em um ponteiro, usa - se o
//operador de derrefer�ncia(*)
//
//Acessando o conte�do de uma posi��o de mem�ria atrav�s
//de um ponteiro
//? printf("O valor da vari�vel X �: %d\n", *ptr); // imprimindo
//? *ptr = 10; // atribuindo o valor 10 ao �conte�do apontado� por
//ptr
//? Um ponteiro pode ter o valor NULL que � um endere�o
//inv�lido.A macro NULL est� definida na biblioteca stdlib.h e
//seu valor � 0 (zero)na maioria dos computadores.
//
//Seja o seguinte trecho de programa :
//int i = 3, j = 5;
//int *p, *q;
//p = &i;
//q = &j;
//Qual � o valor das seguintes express�es ?
//a) p == &i; b) *p - *q c) *q + 1 d) *p++