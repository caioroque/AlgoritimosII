// EXPONTEIRO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void troca(float *a, float *b) {
	float temp; 
	temp = *a; 
	*a = *b;
	*b = temp;
}


void MaximoMinimo(int *v, int n, int *min, int *max) {
	int i;
	*min = v[0];
	*max = v[0];
	for (i = 1; i < n; i++) {
		if (v[i] > *max) {
			*max = v[i];
		}
		else if ((v[i] < *min)){
			*min = v[i];
		}
	}
}

int main() {
	int n, i, *vet, minimo, maximo;
	printf("Quantos numeros voce deseja digitar? ");
	scanf("%d", &n);
	vet == malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("Digite o numero de indice %d: ", i); 
		scanf("%d", &vet[i]);
	}
	MaximoMinimo(vet, n, &minimo, &maximo);
	printf("Minimo: %d. Maximo: %d.\n", minimo, maximo); 
	system("pause");
	return 0;
}

	


