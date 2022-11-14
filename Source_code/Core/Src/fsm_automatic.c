/*
 * fsm_automatic.c
 *
 *  Created on: Oct 28, 2022
 *      Author: hieun
 */

#include "fsm_automatic.h"
int index1 = 0 ;
void fsm_automatic_run_0(){
	switch (status_traffic_0) {
		case INIT:
			HAL_GPIO_WritePin(RED1, Pin_RED1, SET);
			HAL_GPIO_WritePin(AMBER1, Pin_AMBER1, SET);
			HAL_GPIO_WritePin(GREEN1, Pin_GREEN1, SET);
			status_traffic_0 =  AUTO_RED ;
			setTimer1(5000) ;	// thoi gian den do
			setTimer2(1000) ;
			setTimer3(100) ;
			counter =  5 - 1 ;
			bufferMode(counter ) ;
			break;
		case AUTO_RED:
			HAL_GPIO_WritePin(RED1, Pin_RED1, RESET);
			HAL_GPIO_WritePin(AMBER1, Pin_AMBER1, SET);
			HAL_GPIO_WritePin(GREEN1, Pin_GREEN1, SET);

			if(timer1_flag == 1){
				status_traffic_0 = AUTO_GREEN ; // chuyen sang den Xanh
				setTimer1(3000);
				setTimer2(1000) ;
				setTimer3(100) ;
				counter =  3 - 1 ;
				bufferMode(counter ) ;
			}
			if(timer2_flag >= 1){
				setTimer2(1000) ;
				counter-- ;
				if(counter < 0 ) counter = 0 ;
				bufferMode(counter ) ;
			}
			if(timer3_flag >= 1){
				setTimer3(500);
				if(i > 1) i = 0 ;
				update_mode(i++) ;
			}
			break;

		case AUTO_YELLOW:
			HAL_GPIO_WritePin(RED1, Pin_RED1, SET);
			HAL_GPIO_WritePin(AMBER1, Pin_AMBER1, RESET);
			HAL_GPIO_WritePin(GREEN1, Pin_GREEN1, SET);
			if(timer1_flag == 1){
				status_traffic_0 = AUTO_RED ; // chuyen sang den DO
				setTimer1(5000);
				setTimer2(1000) ;
				setTimer3(100) ;
				counter =  5 - 1 ;
				bufferMode(counter ) ;
			}
			if(timer2_flag >= 1){
				setTimer2(1000) ;
				counter-- ;
				if(counter < 0 ) counter = 0 ;
				bufferMode(counter ) ;
			}
			if(timer3_flag >= 1){
				setTimer3(500);
				if(i > 1) i = 0 ;
				update_mode(i++) ;
			}
			break;
		case AUTO_GREEN:
			HAL_GPIO_WritePin(RED1, Pin_RED1, SET);
			HAL_GPIO_WritePin(AMBER1, Pin_AMBER1, SET);
			HAL_GPIO_WritePin(GREEN1, Pin_GREEN1, RESET);
			if(timer1_flag == 1){
				status_traffic_0 = AUTO_YELLOW ; // chuyen sang den VANG
				setTimer1(2000);
				setTimer2(1000) ;
				setTimer3(100) ;
				counter =  2 - 1 ;
				bufferMode(counter ) ;
			}
			if(timer2_flag >= 1){
				setTimer2(1000) ;
				counter-- ;
				if(counter < 0 ) counter = 0 ;
				bufferMode(counter ) ;
			}
			if(timer3_flag >= 1){
				setTimer3(500);
				if(i > 1) i = 0 ;
				update_mode(i++) ;
			}
			break;
		default:
			break;
	}
}

void fsm_automatic_run_1(){
	switch (status_traffic_1) {
		case INIT:
			//TO DO
			HAL_GPIO_WritePin(RED2, Pin_RED2, SET);
			HAL_GPIO_WritePin(AMBER2, Pin_AMBER2, SET);
			HAL_GPIO_WritePin(GREEN2, Pin_GREEN2, SET);
			status_traffic_1 = AUTO_GREEN;
			setTimer4(3000);
			setTimer5(1000);
			setTimer6(100);
			value = 3 ;
			bufferValue(value);
			break;
		case AUTO_RED:
			HAL_GPIO_WritePin(RED2, Pin_RED2, RESET);
			HAL_GPIO_WritePin(AMBER2, Pin_AMBER2, SET);
			HAL_GPIO_WritePin(GREEN2, Pin_GREEN2, SET);
			if(timer4_flag >= 1){
				status_traffic_1 = AUTO_GREEN; // chuyen sang den xanh
				setTimer4(3000); // thoi gian den xanh
				setTimer5(1000);
				setTimer6(100);
				value = 3 ;
				bufferValue(value);
			}
			if(timer5_flag >= 1){
				setTimer5(1000) ;
				value--;
				if(value < 0 ) value = 0 ;
				bufferValue(value);
			}
			if(timer6_flag >= 1){
				setTimer6(500) ;
				if(index1 > 1) index1 = 0 ;
				update_value(index1++) ;
			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(RED2, Pin_RED2, SET);
			HAL_GPIO_WritePin(AMBER2, Pin_AMBER2, RESET);
			HAL_GPIO_WritePin(GREEN2, Pin_GREEN2, SET);
			if(timer4_flag == 1){
				status_traffic_1 = AUTO_RED ; // chuyen sang den do
				setTimer4(5000); // thoi gian  do
				setTimer5(1000);
				setTimer6(100);
				value = 5 ;
				bufferValue(value);
			}
			if(timer5_flag >= 1){
				setTimer5(1000) ;
				value--;
				if(value < 0 ) value = 0 ;
				bufferValue(value);
			}
			if(timer6_flag >= 1){
				setTimer6(500) ;
				if(index1 > 1) index1 = 0 ;
				update_value(index1++) ;
			}
			break;
		case AUTO_GREEN:
			HAL_GPIO_WritePin(RED2, Pin_RED2, SET);
			HAL_GPIO_WritePin(AMBER2, Pin_AMBER2, SET);
			HAL_GPIO_WritePin(GREEN2, Pin_GREEN2, RESET);

			if(timer4_flag == 1){
				status_traffic_1 = AUTO_YELLOW; // chuyen sang den VANG
				setTimer4(2000); // thoi gian den VANG
				setTimer5(1000);
				setTimer6(100);
				value = 2 ;
				bufferValue(value);
			}
			if(timer5_flag >= 1){
				setTimer5(1000) ;
				value--;
				if(value < 0 ) value = 0 ;
				bufferValue(value);
			}
			if(timer6_flag >= 1){
				setTimer6(500) ;
				if(index1 > 1) index1 = 0 ;
				update_value(index1++) ;
			}
			break;
		default:
			break;
	}
}
