/*
 ============================================================================
 Name        : Progra3-3.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 3-3:
 Crear una función que pida el ingreso de un entero y lo retorne.
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
	retorno = 0;
	validar = 0;
	do {
		printf("Ingrese un numero entero\n");
		validar = scanf("%d", &retorno);
		if (validar == 0) {
			printf("Error, eso no es un numero entero!\n");
			fflush(stdin);
		}
	} while (validar == 0);
	return retorno;

}
