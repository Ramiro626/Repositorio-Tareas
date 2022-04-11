/*
 ============================================================================
 Name        : Progra3-4.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 3-4:
 Especializar la función anterior para que permita validar el entero ingresado en un rango
 determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//funcion
int entero(void);

//variable
int numRetornado;

int main(void) {
	setbuf(stdout, NULL);

	numRetornado = entero();
	printf("El numero que ingreso es %d\n", numRetornado);

	return 0;
}

int entero(void) {
	int retorno;
	int validar;
	int rangoMenor;
	int rangoMaximo;
	retorno = 0;
	validar = 0;
	rangoMenor = -50;
	rangoMaximo = 150;
	do {
		printf("Ingrese un numero entero\n");
		validar = scanf("%d", &retorno);
		if (validar == 0) {
			printf("Error, eso no es un numero entero!\n");
			fflush(stdin);
		} else if (retorno < rangoMenor || retorno > rangoMaximo) {
			printf("Error, ese numero esta fuera del rango determinado!\n");
			fflush(stdin);
		}
	} while (validar == 0 || retorno < rangoMenor || retorno > rangoMaximo);
	return retorno;

}
