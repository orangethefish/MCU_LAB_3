/*
 * input_processing.h
 *
 *  Created on: Oct 5, 2022
 *      Author: DUY HOA
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "main.h"
#include "software_timer.h"
#include "global.h"

void button_reading(void);
unsigned char is_button_pressed(unsigned char index);
unsigned char is_button_pressed_1s(unsigned char index);

#endif /* INC_INPUT_READING_H_ */
