/*
 ============================================================================
 Name        : LaboPractica1-3.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : funciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum(int a, int b);

int main(void) {
	setbuf(stdout, NULL);
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    sum(a,b);

    return 0;
}

void sum(int a, int b) {
	int c, d, ola;
	ola = 0;
	c = a;
	d = b;
    ola = c + d;
    printf("La suma es: %d", ola);
}

