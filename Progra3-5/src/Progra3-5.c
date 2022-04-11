/*
 ============================================================================
 Name        : Progra3-5.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 3-5:
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4
 combinaciones.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//funciones
int sumarUno(int numUno, int numDos);
int sumarDos(void);
void sumarTres(int numUno, int numDos);
void sumarCuatro(void);

//variables
int numIngresadoUno;
int numIngresadoDos;
int suma;
int opcion;
int validacion;
int retorno;

int main(void) {
	setbuf(stdout, NULL);
	//declaracion variables
	validacion = 0;
	retorno = 0;

	do {
		do {
			printf("Ingrese una opcion para sumar 2 numeros "
					"1, 2, 3 o 4\n");
			validacion = scanf("%d", &opcion);
			if (validacion == 0) {
				printf("Error, esa no es una opcion valida!\n");
				fflush(stdin);
			}
		} while (validacion == 0);
		switch (opcion) {
		case 1:
			do {
				printf("Ingrese un numero\n");
				validacion = scanf("%d", &numIngresadoUno);
				if (validacion == 0) {
					printf("Error, ese no es un numero!\n");
					fflush(stdin);
				}
			} while (validacion == 0);

			do {
				printf("Ingrese otro numero\n");
				validacion = scanf("%d", &numIngresadoDos);
				if (validacion == 0) {
					printf("Error, ese no es un numero!\n");
					fflush(stdin);
				}
			} while (validacion == 0);

			retorno = sumarUno(numIngresadoUno, numIngresadoDos); //llamado funcion uno
			printf("La suma de los numeros ingresados es: %d\n", retorno);
			opcion = 5;
			break;
		case 2:
			retorno = sumarDos(); //llamado funcion dos
			printf("La suma de los numeros ingresados es: %d\n", retorno);
			opcion = 5;
			break;
		case 3:
			do {
				printf("Ingrese un numero\n");
				validacion = scanf("%d", &numIngresadoUno);
				if (validacion == 0) {
					printf("Error, ese no es un numero!\n");
					fflush(stdin);
				}
			} while (validacion == 0);

			do {
				printf("Ingrese otro numero\n");
				validacion = scanf("%d", &numIngresadoDos);
				if (validacion == 0) {
					printf("Error, ese no es un numero!\n");
					fflush(stdin);
				}
			} while (validacion == 0);
			sumarTres(numIngresadoUno, numIngresadoDos); //llamado funcion 3
			opcion = 5;
			break;
		case 4:
			sumarCuatro(); //llamado funcion 4
			opcion = 5;
			break;
		default:
			printf("Opcion invalida!\n");
			break;

		}
	} while (opcion != 5);

	return 0;
}

int sumarUno(int numUno, int numDos) {
	return numUno + numDos;
}

int sumarDos() {
	do {
		printf("Ingrese un numero\n");
		validacion = scanf("%d", &numIngresadoUno);
		if (validacion == 0) {
			printf("Error, ese no es un numero\n");
			fflush(stdin);
		}
	} while (validacion == 0);

	do {
		printf("Ingrese otro numero\n");
		validacion = scanf("%d", &numIngresadoDos);
		if (validacion == 0) {
			printf("Error, ese no es un numero\n");
			fflush(stdin);
		}
	} while (validacion == 0);
	return numIngresadoUno + numIngresadoDos;
}

void sumarTres(int numUno, int numDos) {
	printf("La suma de los numeros ingresados es: %d\n", numUno + numDos);
}

void sumarCuatro() {
	do {
		printf("Ingrese un numero\n");
		validacion = scanf("%d", &numIngresadoUno);
		if (validacion == 0) {
			printf("Error, ese no es un numero\n");
			fflush(stdin);
		}
	} while (validacion == 0);

	do {
		printf("Ingrese otro numero\n");
		validacion = scanf("%d", &numIngresadoDos);
		if (validacion == 0) {
			printf("Error, ese no es un numero\n");
			fflush(stdin);
		}
	} while (validacion == 0);
	printf("La suma de los numeros ingresados es: %d\n", numIngresadoUno + numIngresadoDos);
}
