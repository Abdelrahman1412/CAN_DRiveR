/*---------------------------------------------------------------------
File Name:		<bitwise.h>
Created on:		<April 14, 2019>
Author:			<Abdelrahman Tarek>
Description:	<Module's Header File>
Status: 		<<Finished>>
----------------------------------------------------------------------*/

#ifndef BITWISE_H
#define BITWISE_H

#define SET_BIT(REG,BIT)     (REG |= 1<<(BIT))
#define CLEAR_BIT(REG,BIT)   (REG &= ~(1<<(BIT)))
#define TOGGLE_BIT(REG,BIT)	 (REG ^= (1<<(BIT)))

#define ROTATE_LEFT(REG,N)   ((REG<<N)|(REG >> ((sizeof(REG)*8)-N)))
#define ROTATE_RIGHT(REG,N)  ((REG>>N)|(REG << ((sizeof(REG)*8)-N)))

#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )          /* Check if a specific bit is set */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )     /* Check if a specific bit is cleared*/

#endif
