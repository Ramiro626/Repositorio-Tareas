/*
 ============================================================================
 Name        : Labo5-1.c
 Author      : Ramiro Sanchez
 Version     : 2
 Copyright   : DIV D
 Description : Ejercicio 5-1:
 Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "inicializar.h"

#define TAM 5

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado[TAM], val;

	val = inicializarArray(numeroIngresado, TAM);
	validar(val);
	cargaArray(numeroIngresado, TAM);
	mostrarArray(numeroIngresado, TAM);
	printf("\nY su suma es: %d", sumaArray(numeroIngresado, TAM));
	printf("\nY sus sumatorias son: ");
	for (int i = 0; i < TAM; i++) {
		printf("%d ", sumatoria(numeroIngresado[i]));
	}
	return EXIT_SUCCESS;
}
