/*
 ============================================================================
 Name        : Progra2-4.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 2-4:
			   Ingresar 5 caracteres e informar cuantas letras p (min�sculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	setbuf(stdout, NULL); //Limpieza consola

	int i;
	int pes;
	char caracter;
	caracter = 'a';
	pes = 0;

	for (i = 0; i < 5; i++) {
		do {
			printf("Ingrese una letra: ");
			scanf(" %c", &caracter);
			if (isalpha(caracter) == 0) {
				printf("\nEso no es una letra!\n");
				fflush(stdin);
			}
		} while (isalpha(caracter) == 0);
		if (caracter == 'p') {
			pes++;
		}
	}
	printf("La ultima letra que ingreso es %c\n", caracter);
	printf("La cantidad de letras p minusculas que ingreso es de %d\n", pes);
	return (0);
}
