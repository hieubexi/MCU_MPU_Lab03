/*
 * update_value.h
 *
 *  Created on: Nov 10, 2022
 *      Author: hieun
 */

#ifndef INC_UPDATE_VALUE_H_
#define INC_UPDATE_VALUE_H_

#include "main.h"
#include "global.h"
#include "button.h"
#include "software_timer.h"



void bufferValue();
void update_value(int index);
void display_counter();

void bufferMode();
void update_mode(int index);
void display_mode();


#endif /* INC_UPDATE_VALUE_H_ */
