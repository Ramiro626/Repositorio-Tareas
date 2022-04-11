/*
 ============================================================================
 Name        : PrimerClaseD.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Hello World in C, Ansi-style
 ============================================================================


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int edad;

	edad = 3;

	printf("Ingrese su edad ");
	scanf("%d", &edad);

	printf("Su edad es: %d \n", edad);

	//system("PAUSE");

	return EXIT_SUCCESS;
}


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	float a;
	float b;
	int resultado;
	a = 3.14;
	b = 5.5;
	resultado = a < b;
	printf("resultado de a menor que b es: %d", resultado);

	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un numero menor a 3 ");
	scanf("%d", &numero);

	while(numero>3)
	{
		printf("Error, ingrese un numero nuevamente ");
		scanf("%d", &numero);
	}

	return 0;
}
