 /*
 ============================================================================
 Name        : Progra1-3.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe.
 En caso de que no exista también informarlo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num1, num2, num3;
	num1 = 0;
	num2 = 0;
	num3 = 0;

	printf("Ingrese un numero \n");
	scanf("%d", &num1);
	printf("Ingrese otro numero \n");
	scanf("%d", &num2);
	printf("Ingrese el ultimo numero \n");
	scanf("%d", &num3);

	if ((num1>num2 && num1<num3) || (num1<num2 && num1>num3))
	{
		printf("El numero del medio es %d", num1);
	}
	else if((num2>num1 && num2<num3) || (num2<num1 && num2>num3))
	{
		printf("El numero del medio es %d", num2);
	}
	else if ((num3>num1 && num3<num2) || (num3<num1 && num3>num2))
	{
		printf("El numero del medio es %d", num3);
	}
	else
	{
		printf("No hay numero del medio");
	}

	return 0;
}
