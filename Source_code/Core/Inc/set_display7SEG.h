/*
 * set_display7SEG.h
 *
 *  Created on: Nov 7, 2022
 *      Author: hieun
 */

#ifndef INC_SET_DISPLAY7SEG_H_
#define INC_SET_DISPLAY7SEG_H_

#include "software_timer.h"
#include "display7SEG.h"
#include "main.h"

#define EN0		EN0_GPIO_Port
#define EN1		EN1_GPIO_Port
#define EN2		EN2_GPIO_Port
#define EN3		EN3_GPIO_Port

#define P_EN0	EN0_Pin
#define	P_EN1	EN1_Pin
#define P_EN2	EN2_Pin
#define	P_EN3	EN3_Pin

#define MAX_LEN	4
void updateBuffer(int index);

void update7SEG(int index);


extern int num ;

#endif /* INC_SET_DISPLAY7SEG_H_ */
