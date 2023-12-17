/*
 * LDR_Program.c
 *
 *  Created on: Oct 21, 2023
 *      Author: hp
 */

#include "../../01-LIB/STD_TYPES.h"
#include "../../04-MCAL/03-ADC/ADC_Interface.h"
#include "LDR_Interface.h"

void LDR_init(void){
	ADC_voidInit();
}

u16 LDR_CallValue(void){
	u16 Local_u16Digital = ADC_u8StartConversion(ADC_CHANNEL_LDR);
	//u16 Local_u16Result = (1000 * Local_u16Digital)/ (5 - Local_u16Digital);
	return Local_u16Digital;
}
