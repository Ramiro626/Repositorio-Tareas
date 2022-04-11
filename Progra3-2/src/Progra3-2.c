/*
 ============================================================================
 Name        : Progra3-2.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 3-2:
 Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso
 afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//declaracion funciones
int parImpar(int parImpar);

//declaracion variables
int numIngresado;
int validar;
int resultado;

int main(void) {
	setbuf(stdout, NULL); //Limpieza consola
	//inicializacion variables
	numIngresado = 0;
	validar = 0;
	resultado = 0;

	do {
		printf("Ingrese un numero par o impar\n");
		validar = scanf("%d", &numIngresado);
		if (validar == 0) {
			printf("Error, eso no es un numero!\n");
			fflush(stdin);
		}
	} while (validar == 0);

	if (parImpar(numIngresado) == 1) {
		printf("Usted ingreso un numero par\n");
	} else {
		printf("Usted ingreso un numero impar\n");
	}
	return 0;
}

int parImpar(int parImpar) {
	if (parImpar % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}
