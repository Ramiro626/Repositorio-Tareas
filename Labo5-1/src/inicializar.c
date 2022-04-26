/*
 * inicializar.c
 *
 *  Created on: Apr 21, 2022
 *      Author: Ramiro
 */
#include <stdio.h>
#include <stdlib.h>

int inicializarArray(int lista[], int tamanio) {
	int retorno = -1;
	if (lista != NULL) {
		for (int i = 0; i < tamanio; i++) {
			lista[i] = 0;
		}
		retorno = 0;
	}
	return retorno;
}

void validar(int val) {
	if (val == -1) {
		printf("Algo salio mal inicializando el array\n");
	} else if (val == 0) {
		printf("Salio bien la inicalizacion del array\n");
	}
}

void cargaArray(int lista[], int tamanio) {
	for (int i = 0; i < tamanio; i++) {
		printf("Ingrese un numero ");
		scanf("%d", &lista[i]);
	}
}

void mostrarArray(int lista[], int tamanio) {
	printf("Los numeros que ingreso son los siguientes: ");
	for (int i = 0; i < tamanio; i++) {
		printf("%d ", lista[i]);
	}
}

int sumaArray(int lista[], int tamanio) {
	int suma = 0;
	for (int i = 0; i < tamanio; i++) {
		suma = suma + lista[i];
	}
	return suma;
}

int sumatoria(int numero) {
	int resultado = 0;
	if (numero < 1) {
	} else {
		for (int i = 1; i <= numero; i++) {
			resultado = i + resultado;
		}
	}
	return resultado;
}
