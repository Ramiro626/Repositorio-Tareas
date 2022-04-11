/*
 ============================================================================
 Name        : Progra2-1.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números.
 Probar la aplicación con distintos valores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int num1, num2, num3, num4, num5, suma, prom;

	printf("Ingrese un numero \n");
	scanf("%d", &num1);
	printf("Ingrese otro numero \n");
	scanf("%d", &num2);
	printf("Ingrese otro numero \n");
	scanf("%d", &num3);
	printf("Ingrese otro numero \n");
	scanf("%d", &num4);
	printf("Ingrese el ultimo numero \n");
	scanf("%d", &num5);

	suma = num1 + num2 + num3 + num4 + num5;
	prom = suma / 5;

	printf("El promedio de la suma de los numeros es %d", prom);

	return 0;
}
