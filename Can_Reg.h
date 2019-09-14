/*---------------------------------------------------------------------
File Name:      <CAN_Reg.h>
Created on:     <Sept 9, 2019>
Author:         <Abdelrahman Tarek>
Description:    <Module's Header File>
Status:         <<Finished>>
----------------------------------------------------------------------*/

#ifndef CAN_REG_H_
#define CAN_REG_H_

/******************************INCLUDES********************************/

#include "Reg_Bitfields.h"

/*-------------------------------PLATFORM REGISTERS--------------------------------------*/
#define PORTA_REG (*(volatile REG_8BITS * const)0x3B)
#define DDRA_REG  (*(volatile REG_8BITS * const)0x3A)
#define PINA_REG  (*(volatile const REG_8BITS * const)0x39)

#define PORTB_REG (*(volatile REG_8BITS * const)0x38)
#define DDRB_REG  (*(volatile REG_8BITS * const)0x37)
#define PINB_REG  (*(volatile const REG_8BITS * const)0x36)

#define PORTC_REG (*(volatile REG_8BITS * const)0x35)
#define DDRC_REG  (*(volatile REG_8BITS * const)0x34)
#define PINC_REG  (*(volatile const REG_8BITS * const)0x33)

#define PORTD_REG (*(volatile REG_8BITS * const)0x32)
#define DDRD_REG  (*(volatile REG_8BITS * const)0x31)
#define PIND_REG  (*(volatile const REG_8BITS * const)0x30)
/*-------------------------------PLATFORM CONTROL PINS--------------------------------------*/

#endif /* CAN_REG_H_ */
