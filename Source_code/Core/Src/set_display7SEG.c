/*
 * set_display7SEG.c
 *
 *  Created on: Nov 7, 2022
 *      Author: hieun
 */


#include "set_display7SEG.h"
int index = 0 ;
int num = 0 ;
int buffer[MAX_LEN] = {0,1,2,3};

void update7SEG(int index){
	switch (index) {
		case 0:
			display7SEG_0(buffer[0]) ;
			display7SEG_1(buffer[2]) ;
			HAL_GPIO_WritePin(EN0, P_EN0, RESET) ;
			HAL_GPIO_WritePin(EN1, P_EN1, SET) ;
			HAL_GPIO_WritePin(EN2, P_EN2, RESET) ;
			HAL_GPIO_WritePin(EN3, P_EN3, SET) ;
			break;
		case 1:
			display7SEG_0(buffer[1]) ;
			display7SEG_1(buffer[3]) ;
			HAL_GPIO_WritePin(EN0, P_EN0, SET) ;
			HAL_GPIO_WritePin(EN1, P_EN1, RESET) ;
			HAL_GPIO_WritePin(EN2, P_EN2, SET) ;
			HAL_GPIO_WritePin(EN3, P_EN3, RESET) ;
			break;
		default:
			break;
	}
}
