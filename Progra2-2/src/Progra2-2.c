/*
 ============================================================================
 Name        : Progra2-2.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Ejercicio 2-2:
			   Ingresar 10 números enteros, distintos de cero. Mostrar:
			   a. Cantidad de pares e impares.
			   b. El menor número ingresado.
			   c. De los pares el mayor número ingresado.
			   d. Suma de los positivos.
			   e. Producto de los negativos.
 ============================================================================
 */

//Librerias
#include <stdio.h>
#include <stdlib.h>

//Inicio funcion
int main(void) {
	setbuf(stdout, NULL); //Limpieza consola

	//Declaracion e Inicializacion de variables
	int numIn, par, impar, flag1, flag2, numMenor, numMayorPar, sumPos, prodNeg, i;
	i = 0;
	numIn = 0;
	par = 0;
	impar = 0;
	flag1 = 1;
	flag2 = 1;
	numMenor = 0;
	numMayorPar = 0;
	sumPos = 0;
	prodNeg = 1;

	//Loop para ingresar 10 numeros enteros
	while (i<10)
	{
		//pido numero y guardo en variable
		printf("Ingrese un numero entero");
		scanf("%d", &numIn);

		//validacion de entero
		while(numIn == 0)
		{
			printf("Error, ingrese un numero entero");
			scanf("%d", &numIn);
		}

		//separacion de par e impar con if
		if (numIn %2 == 0)
		{
			par++; //contador par

			//numero mayor par
			if (flag1 == 1)
			{
				numMayorPar = numIn;
				flag1 = 0;
			}
			else if (numIn>numMayorPar)
			{
				numMayorPar = numIn;
			}
		}
		else
		{
			impar++; //contador impar
		}

		//numero Menor
		if (flag2 == 1)
		{
			numMenor = numIn;
			flag2 = 0;
		}
		else if (numIn<numMenor)
		{
			numMenor = numIn;
		}

		//separacion suma positivos y producto negativos
		if(numIn>0)
		{
			sumPos = sumPos + numIn;
		}
		else if(numIn<0)
		{
			prodNeg = prodNeg * numIn;
		}

		i++;//contador loop (while)
	}
	//display por prinft
	printf("La cantidad de pares es de: %d", par);
	printf(" y la cantidad de impares es de: %d\n", impar);
	printf("El menor numero ingresado es: %d\n", numMenor);
	printf("El mayor numero par es: %d\n", numMayorPar);
	printf("La suma de positivos es: %d\n", sumPos);
	printf("El producto de los negativos es: %d\n", prodNeg);

	return 0;
}
