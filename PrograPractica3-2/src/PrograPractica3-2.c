/*
 ============================================================================
 Name        : PrograPractica3-2.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calcular.h" //libreria creada por mi

//void sumar(void); //prototipo
//void sumar(int fuxi, int nuwa);; //parametros formales
//int sumar(int fuxi, int nuwa); // retorno a principal
//int sumar(void); // pido datos en secundaria

int main(void) {
	setbuf(stdout, NULL);
	int resultado;
	int a;
	int b;

	printf("ingrese un numero: \n");
	scanf("%d", &a);

	printf("Ingrese otro numero \n");
	scanf("%d", &b);

	resultado = sumar(a, b);
	/*al llamar una funcion secundaria, esta copia los valores de las variables
	 *de la funcion principal y las almacena en las variables formales
	 *de la funcion secundaria.
	 */
	printf("El resultado de la suma es : %d", resultado);

	return 0;
}

/*
int sumar(void)
{
	int a=2;
	int b=4;
	int retorno;

	printf("ingrese un numero: \n");
	scanf("%d", &a);

	printf("Ingrese otro numero \n");
	scanf("%d", &b);

	retorno = a + b;

	return retorno;
}


void sumar(int fuxi, int nuwa)
{
	int mobius;

	mobius = fuxi + nuwa;

	printf("\nEl resultado de la suma es : %d", mobius);

	printf("\n%d", fuxi);

}


int sumar(int fuxi, int nuwa)
{
	int retorno;

	retorno = fuxi + nuwa;

	return retorno;
}
*/


