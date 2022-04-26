/*
 * funcionSumatoria.c
 *
 *  Created on: Apr 22, 2022
 *      Author: Ramiro
 */

int sumatoria(int numero) {
	int retorno = 0;

	if (numero == 1) {
		retorno = 1;
		return retorno;
	} else if (numero > 1) {
		retorno = numero + sumatoria(numero - 1);
	} else if (numero == -1) {
		retorno = -1;
		return retorno;
	} else if (numero < -1) {
		retorno = numero + sumatoria(numero + 1);
	}
	return retorno;
}
