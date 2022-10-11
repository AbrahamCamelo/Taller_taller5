/*
 * Taller4_2.c
 *
 *  Created on: Sep 8, 2022
 *      Author: acamelo
 */


#include "GPIOxDriver.h"
#include "Stm32f4xx.h"
#include <stdint.h>

void delay(uint32_t iteraciones);

int main(void){

	int8_t sumatoria = 0;
	do{
			sumatoria++;
		}while(sumatoria<10);
}

void delay(uint32_t iteraciones){
	uint8_t i = 0;
	while(i < iteraciones){
		i++;
		__NOP();
	}
}
