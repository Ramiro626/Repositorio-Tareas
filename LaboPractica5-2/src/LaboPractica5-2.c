/*
 ============================================================================
 Name        : LaboPractica5-2.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Matrices
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define COLUMNA 3
#define FILA 2

int main(void) {
	setbuf(stdout, NULL);
	int validar;

	int matriz[COLUMNA][FILA];

	for (int i = 0; i < COLUMNA; i++) {
		for (int y = 0; y < FILA; y++) {
			printf("Ingrese un numero: ");
			validar = scanf("%d", &matriz[i][y]);
			while (validar == 0) {
				printf("Error, ingrese un numero valido: ");
				fflush(stdin);
				validar = scanf("%d", &matriz[i][y]);
			}
		}
	}

	for (int i = 0; i < COLUMNA; i++) {
		for (int y = 0; y < FILA; y++) {
			printf("El numero en la columna %d fila %d es: %d\n", i, y,
					matriz[i][y]);
		}
	}
	return EXIT_SUCCESS;
}
