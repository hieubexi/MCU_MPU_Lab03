/*
 * display7SEG.c
 *
 *  Created on: Oct 4, 2022
 *      Author: hieun
 */
#include "display7SEG.h"
void display7SEG_0(int num){
	//	if(num >= 10) num = 0 ;
		if(num == 0){
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, SET);
		}else if(num == 1){
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, SET);
		}else if(num == 2){
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);
		}else if(num == 3){
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);

		}else if( num == 4){
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);

		}else if(num == 5){
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);

		}else if(num == 6){
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);

		}else if(num == 7){
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, SET);

		}else if (num == 8 ){
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);

		}else{
			HAL_GPIO_WritePin(GPIO_1, P_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P_SEG6, RESET);

		}
}
void display7SEG_1(int num){
		if(num >= 10) num = 0 ;
		if(num == 0){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, SET);
		}else if(num == 1){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, SET);
		}else if(num == 2){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, RESET);
		}else if(num == 3){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, RESET);

		}else if( num == 4){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, RESET);

		}else if(num == 5){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, RESET);

		}else if(num == 6){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, RESET);

		}else if(num == 7){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, SET);

		}else if (num == 8 ){
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, RESET);

		}else{
			HAL_GPIO_WritePin(GPIO_1, P1_SEG0, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG1, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG2, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG3, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG4, SET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG5, RESET);
			HAL_GPIO_WritePin(GPIO_1, P1_SEG6, RESET);

		}
}

