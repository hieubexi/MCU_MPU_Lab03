/*
 * software_timer.c
 *
 *  Created on: Sep 23, 2022
 *      Author: hieun
 */
#include "software_timer.h"
#define TIME_CYCLE 10
int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

int timer3_counter = 0;
int timer3_flag = 0;

int timer4_counter = 0;
int timer4_flag = 0;

int timer5_counter = 0;
int timer5_flag = 0;

int timer6_counter = 0;
int timer6_flag = 0;

int timer7_counter = 0;
int timer7_flag = 0;

int timer8_counter = 0;
int timer8_flag = 0;

int timer9_counter = 0;
int timer9_flag = 0;

int timer10_counter = 0;
int timer10_flag = 0;

int timer0_counter = 0;
int timer0_flag = 0;

void setTimer0(int duration){
	timer0_counter = duration/TIME_CYCLE;
	timer0_flag = 0;
}
void setTimer10(int duration){
	timer10_counter = duration/TIME_CYCLE;
	timer10_flag = 0;
}
void setTimer9(int duration){
	timer9_counter = duration/TIME_CYCLE;
	timer9_flag = 0;
}
void setTimer8(int duration){
	timer8_counter = duration/TIME_CYCLE;
	timer8_flag = 0;
}

void setTimer7(int duration){
	timer7_counter = duration/TIME_CYCLE;
	timer7_flag = 0;
}
void setTimer6(int duration){
	timer6_counter = duration/TIME_CYCLE;
	timer6_flag = 0;
}
void setTimer5(int duration){
	timer5_counter = duration/TIME_CYCLE;
	timer5_flag = 0;
}

void setTimer4(int duration){
	timer4_counter = duration/TIME_CYCLE;
	timer4_flag = 0;
}

void setTimer3(int duration){
	timer3_counter = duration/TIME_CYCLE;
	timer3_flag = 0;
}

void setTimer2(int duration){
	timer2_counter = duration/TIME_CYCLE;
	timer2_flag = 0;
}
void setTimer1(int duration){
	timer1_counter = duration/TIME_CYCLE;
	timer1_flag = 0;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter == 0){
			timer1_flag = 1;
		}
	}

	if(timer2_counter > 0){
			timer2_counter--;
			if(timer2_counter == 0){
				timer2_flag = 1;
			}
		}

	if(timer3_counter > 0){
				timer3_counter--;
				if(timer3_counter == 0){
					timer3_flag = 1;
				}
			}

	if(timer4_counter > 0){
				timer4_counter--;
				if(timer4_counter == 0){
					timer4_flag = 1;
				}
			}

	if(timer5_counter > 0){
			timer5_counter--;
			if(timer5_counter == 0){
				timer5_flag = 1;
			}
		}


	if(timer6_counter > 0){
				timer6_counter--;
				if(timer6_counter == 0){
					timer6_flag = 1;
				}
			}

	if(timer7_counter > 0){
			timer7_counter--;
			if(timer7_counter == 0){
				timer7_flag = 1;
			}
		}

	if(timer10_counter > 0){
			timer10_counter--;
			if(timer10_counter == 0){
				timer10_flag = 1;
			}
		}


	if(timer9_counter > 0){
				timer9_counter--;
				if(timer9_counter == 0){
					timer9_flag = 1;
				}
			}

	if(timer8_counter > 0){
			timer8_counter--;
			if(timer8_counter == 0){
				timer8_flag = 1;
			}
		}

	if(timer0_counter > 0){
			timer0_counter--;
			if(timer0_counter == 0){
				timer0_flag = 1;
			}
		}
}

