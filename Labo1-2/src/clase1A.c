/*
 ============================================================================
 Name        : clase1a.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Suma y print
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int num1;
	int num2;

	printf("Ingrese un numero: ");

	scanf("%d", &num1);

	printf("\nIngrese otro numero: ");

	scanf("%d", &num2);

	printf("\nLa suma es: %d", num1 + num2);

	return EXIT_SUCCESS;
}
