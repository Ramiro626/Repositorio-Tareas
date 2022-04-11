/*
 ============================================================================
 Name        : Progra1-1.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 1-1 Ingresar dos números enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num1, num2, suma;
	num1 = 0;
	num2 = 0;
	suma = 0;

	printf("Ingrese un numero \n");
	scanf("%d", &num1);
	printf("Ingrese otro numero \n");
	scanf("%d", &num2);
	suma = num1 + num2;
	printf("La suma es %d", suma);

	return 0;
}
