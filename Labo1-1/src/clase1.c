/*
 ============================================================================
 Name        : clase1.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Hello World y practica
 ============================================================================
*/

//Librerias
#include <stdio.h>
#include <stdlib.h>

#define SALUDO "Hola mundo Eclipse!!\n" //sin;

//Inicio
int main(void) {
	setbuf(stdout, NULL);

//	puts("!!!Hello World!!!");  prints !!!Hello World!!!

	printf(SALUDO);

//	var numero; // JS

	int numero;
	float pi = 3.14;
	char c = 'a';

	numero = 1;

	numero = 1.999;

//	numero = "holy";

	printf("El numero int es: %d,\npi: %f,\ny el char es: %c", numero, pi, c);

	printf("\nIngrese un numero: ");

// int n = prompt("Ingrese un numero"); // En Js no funciona esta funcion

	scanf("%d", &numero);

	printf("\nEl numero ingresado es: %d", numero);

	return EXIT_SUCCESS;
}
