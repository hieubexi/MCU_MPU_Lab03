/*
 * display7SEG.h
 *
 *  Created on: Oct 4, 2022
 *      Author: hieun
 */
#include "main.h"
#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_


#define GPIO_1	GPIOB

#define P_SEG0  SEG0_Pin
#define P_SEG1  SEG1_Pin
#define P_SEG2  SEG2_Pin
#define P_SEG3  SEG3_Pin
#define P_SEG4  SEG4_Pin
#define P_SEG5  SEG5_Pin
#define P_SEG6  SEG6_Pin


#define P1_SEG0  SEG0_1_Pin
#define P1_SEG1  SEG1_1_Pin
#define P1_SEG2  SEG2_1_Pin
#define P1_SEG3  SEG3_1_Pin
#define P1_SEG4  SEG4_1_Pin
#define P1_SEG5  SEG5_1_Pin
#define P1_SEG6  SEG6_1_Pin

extern int num;
extern int num1;
void display7SEG_0(int num);
void display7SEG_1(int num);

#endif /* INC_DISPLAY7SEG_H_ */
