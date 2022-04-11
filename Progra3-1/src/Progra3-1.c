/*
 ============================================================================
 Name        : Progra3-1.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 3-1:
 Crear una función que muestre por pantalla el número flotante que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "numeroflotante.h"

//void print(float num1);

float numIngresado;
int valido;

int main(void) {
	setbuf(stdout, NULL); //Limpieza consola
	numIngresado = 0;
	valido = 0;

	do {
		printf("Ingrese un numero flotante (decimal)\n");
		valido = scanf("%f", &numIngresado);
		if (valido == 0 || fmod(numIngresado,1) == 0) {
			printf("Usted no ingreso un numero flotante valido\n");
			fflush(stdin);
		}
	} while (valido == 0 ||fmod(numIngresado,1) == 0);
	print(numIngresado);
	return 0;
}

//void print(float num1) {
//	printf("El numero es: %f\n", num1);
//}
