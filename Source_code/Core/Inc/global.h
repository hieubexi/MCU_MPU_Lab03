/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: hieun
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "button.h"
#include "display7SEG.h"
#include "software_timer.h"
#define INIT 		0

#define No_RESET 	1
#define No_INC	 	2
#define No_DEC	 	3

#define REST		4

#define	RESET_LONG	11
#define INC_LONG	12
#define DEC_LONG	13

#define RESET_NOR 	21
#define INC_NOR		22
#define	DEC_NOR		23

#define RED1 	R1_GPIO_Port
#define RED2 	R2_GPIO_Port
#define AMBER1 	A1_GPIO_Port
#define AMBER2 	A2_GPIO_Port
#define GREEN1 	G1_GPIO_Port
#define GREEN2 	G2_GPIO_Port

#define Pin_RED1	R1_Pin
#define Pin_RED2	R2_Pin
#define Pin_AMBER1	A1_Pin
#define Pin_AMBER2	A2_Pin
#define Pin_GREEN1	G1_Pin
#define Pin_GREEN2	G2_Pin

#define AUTO_RED	31
#define AUTO_YELLOW	32
#define AUTO_GREEN	33



extern int value;
extern int status;
extern int counter;			// counter  = value when traffic system is on mode 2 3 4
extern int status_traffic_0 ;
extern int status_traffic_1 ;
extern int i ;
extern int i1 ;
#endif /* INC_GLOBAL_H_ */
