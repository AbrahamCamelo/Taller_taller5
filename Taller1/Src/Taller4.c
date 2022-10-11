/*
 * main2.c
 *
 *  Created on: Aug 25, 2022
 *      Author: acamelo
 */

#include <stdint.h>

#define SUMA '+'
#define MULTIPLICACION '*'
#define RESTA '-'
#define DIVISION '/'

int16_t resultadoOperacion (int8_t numero1, int8_t numero2, uint8_t Operacion);

int main (void){

	int8_t variableA = 15;
	int16_t variableB = 25;

	int16_t resultadoSuma = resultadoOperacion(variableA,(int8_t)variableB, SUMA);
	resultadoSuma++;
	while (1){
	}

}


int16_t resultadoOperacion (int8_t numero1, int8_t numero2, uint8_t Operacion){

	int16_t resultado = 0;

	switch(Operacion){

	case SUMA:
	{
		resultado = numero1 + numero2;
		break;
	}
	case RESTA:
	{
		resultado = numero1 - numero2;
		break;
	}
	case MULTIPLICACION:
	{
		resultado = numero1 * numero2;
		break;
	}
	case DIVISION:
	{
		resultado = numero1 / numero2;
		break;
	}
	default:{
		resultado = 0;
	}

	}

	return resultado;

}
