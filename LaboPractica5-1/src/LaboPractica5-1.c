/*
 ============================================================================
 Name        : LaboPractica5-1.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : recursividad sumatoria
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "funcionSumatoria.h"

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int resultado;
	int validar;
	char respuesta = 's';

	do {
		printf("Ingrese un numero: ");
		validar = scanf("%d", &numeroIngresado);
		while(validar == 0)
				{
					printf("Error, ingrese un numero: ");
					fflush(stdin);
					validar = scanf("%d", &numeroIngresado);
				}
		resultado = sumatoria(numeroIngresado);

		printf("La sumatoria de %d es: %d", numeroIngresado, resultado);

		printf("\nDesea continua? (s para si, n para no): ");
		scanf(" %c", &respuesta);
		respuesta = tolower(respuesta);
		while (respuesta != 's' && respuesta != 'n') {
			printf("Error, ingrese s para si o n para no: ");
			scanf(" %c", &respuesta);
			respuesta = tolower(respuesta);
		}
	} while (respuesta == 's');

	printf("Fin de programa");

	return EXIT_SUCCESS;
}
