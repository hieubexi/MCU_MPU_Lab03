/*
 * update_value.c
 *
 *  Created on: Nov 10, 2022
 *      Author: hieun
 */

#include "update_value.h"


int buffer_value[2] = {0,0};
int buffer_mode[2] = {0,0} ;
void bufferValue(int value){
	if(value <= 9){
		buffer_value[0] = 0;
		buffer_value[1] = value;
	}else{
		buffer_value[0] = value/10;
		buffer_value[1] = value%10;
	}
}
void bufferMode(int status){
	buffer_mode[0] = 0 ;
	buffer_mode[1] = status + 1;
}
void update_value(int index){
//	if(index > 1) index = 0 ;
	switch (index) {
		case 0:
			display7SEG_1(buffer_value[0]) ;
			 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET) ;
			 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET) ;
			break;
		case 1:
			display7SEG_1(buffer_value[1]) ;
			 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET) ;
			 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET) ;
		default:
			break;
	}
}
void update_mode(int index){
//	if(index > 1) index = 0 ;
	switch (index) {
		case 0:
			display7SEG_0(buffer_mode[0]) ;
//			display7SEG_1(buffer_value[0]) ;
			 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET) ;
			 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET) ;
//			 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET) ;
//			 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET) ;
			break;
		case 1:
			display7SEG_0(buffer_mode[1]) ;
//			display7SEG_1(buffer_value[1]) ;
			 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET) ;
			 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET) ;
//			 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET) ;
//			 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET) ;
		default:
			break;
	}

}

void display_counter(){
	if(timer2_flag >= 1){
		setTimer2(250);
		if(i > 1) i = 0 ;
		update_mode(i++) ;
	}
}

void display_mode(){
//	display7SEG_0(status + 1);
	if(timer3_flag >= 1){
		setTimer3(250);
		if(i > 1) i = 0 ;
		update_mode(i++) ;
	}

}
