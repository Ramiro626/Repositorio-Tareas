/*
 ============================================================================
 Name        : Tarea.c
 Author      : Ramiro Sanchez
 Version     :
 Copyright   : DIV D
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int cont, numscan;
	float prom, sum;
	prom = 0;
	sum = 0;
	cont = 0;
	numscan = 0;

	for(int i = 0; i<5; i++)
	{
		printf("Ingrese un numero\n");
		scanf("%d", &numscan);
		sum = sum + numscan;
		cont = cont + 1;
	}
	prom = sum / cont;
	printf("El promedio de los 5 numeros ingresados es %f", prom);

	return EXIT_SUCCESS;
}
