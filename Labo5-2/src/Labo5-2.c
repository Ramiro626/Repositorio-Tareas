/*
 ============================================================================
 Name        : Labo5-2.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 5-2:
 Pedir el ingreso de 10 n�meros enteros entre -1000 y 1000. Determinar:
 a) Cantidad de positivos y negativos.
 b) Sumatoria de los pares.
 c) El mayor de los impares.
 d) Listado de los n�meros ingresados.
 e) Listado de los n�meros pares.
 f) Listado de los n�meros de las posiciones impares.
 Anexo 5-2
 g) Los n�meros que se repiten
 h) Los positivos creciente y los negativos de manera decreciente
 Se deber�n utilizar funciones y vectores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "inicializar.h"

#define TAM 10
#define MAX 1000
#define MIN -1000

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado[TAM], val;

	val = inicializarArray(numeroIngresado, TAM);
	validar(val);
	cargaArrayMaxMin(numeroIngresado, TAM, MAX, MIN);
	mostrarArray(numeroIngresado, TAM);
	return EXIT_SUCCESS;
}
