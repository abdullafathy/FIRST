#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include "DIO_int.h"

#include "LED_priv.h"
#include "LED_int.h"

u8 LED_voidSETLedOn(u8 u8LED_IndexCpy) {
	if(u8LED_IndexCpy < LED_u8_NB){
		if(   LED_State[u8LED_IndexCpy] == LED_u8_NORMAL )
		{
		DIO_voidSETPinValue(DIO_u8_HIGH,LED_u8Dio_Link[u8LED_IndexCpy]);
		return LED_u8_NOERROR;
		}
		else{			
		DIO_voidSETPinValue(DIO_u8_LOW,LED_u8Dio_Link[u8LED_IndexCpy]);
		return LED_u8_NOERROR;
		}
	}
	else 
		return LED_u8_ERROR;
}
u8 LED_voidSETLedOff(u8 u8LED_IndexCpy) {
	if(u8LED_IndexCpy < LED_u8_NB){
		if(   LED_State[u8LED_IndexCpy] == LED_u8_NORMAL )
		{
		DIO_voidSETPinValue(DIO_u8_LOW,LED_u8Dio_Link[u8LED_IndexCpy]);
		return LED_u8_NOERROR;
		}
		else{			
		DIO_voidSETPinValue(DIO_u8_HIGH,LED_u8Dio_Link[u8LED_IndexCpy]);
		return LED_u8_NOERROR;
		}
	}
	else 
		return LED_u8_ERROR;
}
