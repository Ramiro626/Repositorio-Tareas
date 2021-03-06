/*
 ============================================================================
 Name        :  Progra2-3.c
 Author      :  Ramiro Sanchez
 Version     :  1
 Copyright   :  DIV D
 Description :  Ejercicio 2-3:
				Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas,
				de cada persona debemos obtener los siguientes datos:
				- N?mero de cliente,
				- Estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
				- Edad (Solo mayores de edad, m?s de 17),
				- Temperatura corporal (validar por favor)
				- Genero ('f' para femenino, 'm' para masculino, 'o' para no binario).
				NOTA: El precio por pasajero es de $600.
				Se debe informar (solo si corresponde):
				a) La cantidad de personas con estado "viudo" de m?s de 60 a?os.
				b) el n?mero de cliente y edad de la mujer soltera m?s joven.
				c) cu?nto sale el viaje total sin descuento.
				d) si hay m?s del 50% de los pasajeros que tiene m?s de 60 a?os , el precio final tiene un descuento del 25%, que
				solo mostramos si corresponde.
 ============================================================================
 */

//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Inicio funcion
int main(void) {
	setbuf(stdout, NULL); //Limpieza consola

	//Declaracion e Inicializacion de variables
	int numCliente, edad, tempCorp, viudos, flagm, numClienteF, edadF, pasajerosTotal, pasajerosViejos;
	char estCivil, genero, rt;
	int isNumber;
	rt = 's';
	viudos = 0;
	flagm = 1;
	pasajerosTotal = 0;
	pasajerosViejos = 0;

	//loop principal
	while (rt == 's')
	{
		do //loop y verificacion numero de cliente
		{
			printf("Ingrese un numero de cliente\n");
			isNumber = scanf(" %d", &numCliente);
			if (isNumber == 0 || numCliente <= 0) {
				printf("Numero de cliente invalido!\n");
				fflush(stdin); //limpio buffer
			}
		} while(isNumber == 0 || numCliente <= 0);

		do //loop y verificacion estado civil
		{
			printf("Ingrese un estado civil: S para soltero, C para casado, V para viudo\n");
		    scanf(" %c", &estCivil);
		    if (estCivil != 's' && estCivil != 'c' && estCivil != 'v') {
		    	printf("Estado civil invalido!\n");
		    	fflush(stdin);
		    }
		}while(estCivil != 's' && estCivil != 'c' && estCivil != 'v');

		do //loop y verificacion edad
		{
			printf("Ingrese su edad\n");
			isNumber = scanf(" %d", &edad);
			if (isNumber == 0 || edad <= 17 || edad>120)
			{
				printf("Edad invalida!\n");
				fflush(stdin);
			}
		}while(isNumber == 0 || edad <= 17 || edad>120);

		do //loop y verificacion temperatura
		{
			printf("Ingrese su temperatura corporal\n");
			isNumber = scanf(" %d", &tempCorp);
			if (isNumber == 0 || tempCorp<32 || tempCorp>41)
			{
				printf("Temperatura invalida!\n");
				fflush(stdin);
			}
		}while(isNumber == 0 || tempCorp<32 || tempCorp>41);

		do //loop y verificacion genero
		{
			printf("Ingrese un genero: f (femenino), m (masculino), o (no binario)\n");
		    scanf(" %c", &genero);
		    if (genero != 'f' && genero != 'm' && genero != 'o') {
		    	printf("Genero invalido!\n");
		    	fflush(stdin);
		    }
		}while(genero != 'f' && genero != 'm' && genero != 'o');

		if (edad > 60)
		{
			pasajerosViejos++;
			if (estCivil == 'v')
			{
				viudos++;
			}
		}

		if (genero == 'f' && estCivil == 's' && flagm == 1)
		{
			numClienteF = numCliente;
			edadF = edad;
			flagm = 0;
		}
		else if (genero == 'f' && estCivil == 's' && edadF<edad)
		{
			numClienteF = numCliente;
			edadF = edad;
		}

		pasajerosTotal++; // contador pasajeros

		//Pregunta RT para continuar ingresando datos.
		printf("Desea continuar? (S para si, N para no)\n");
		scanf(" %c", &rt);
		rt = tolower(rt);
		//validacion RT
		while(rt != 's' && rt != 'n')
		{
			printf("Error, ingrese S para si o N para no\n");
			scanf(" %c", &rt);
			rt = tolower(rt);
		}
	}

	printf("La cantidad de personas con mas de 60 que son viudas es de %d\n", viudos);
	printf("El numero de cliente de la mujer soltera mas joven es %d, y su edad es de %d a?os\n", numClienteF, edadF);
	if (pasajerosViejos > (pasajerosTotal*0.5))
	{
		printf("El viaje sin descuento cuesta %d y ", pasajerosTotal*600);
		printf("El precio con descuento es de %d", pasajerosTotal*450);
	}
	else
	{
		printf("El viaje cuesta %d", pasajerosTotal*600);
	}

	printf("\n\nFin de programa");

	return 0;
}
