/*
 * LM35_Program.c
 *
 *  Created on: Oct 21, 2023
 *      Author: hp
 */

#include "../../01-LIB/STD_TYPES.h"
#include "../../04-MCAL/03-ADC/ADC_Interface.h"
#include "LM35_Interface.h"

void LM35_init(void){
	ADC_voidInit();
}

u32 LM35_CallValue(void){
	u32 Local_u32Digital = ADC_u8StartConversion(ADC_CHANNEL);
	u32 Local_u32Analog  = (Local_u32Digital*5000)/1024;
	u32 Local_u32Temp    = Local_u32Analog / 10;
	return Local_u32Temp;
}
