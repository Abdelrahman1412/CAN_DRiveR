/*---------------------------------------------------------------------
File Name:      <CAN.h>
Created on:     <April 14, 2019>
Author:         <Abdelrahman Tarek>
Description:    <Module's Header File>
Status:         <<Finished>>
----------------------------------------------------------------------*/

#ifndef CAN_H_
#define CAN_H_

/*---------------------------INCLUDES ----------------------------*/

#include "ComStack_Types.h"
#include "Can_GeneralTypes.h"
#include "Can_Cfg.h"
/*-------------------------Module's Types ----------------------------*/

typedef struct {

    Can_ChannelType CanChannel [CONFIGURED_CHANNELS];
}Can_ConfigType;

typedef struct {

    Can_ControllerStateType     mode;

}Can_ChannelType;

#define     CAN_BUSY            (0x02)  // Overlayed return value of Std_ReturnType for CAN driver API Can_Write()




/*---------------------Functions Prototypes ----------------------------*/

Std_ReturnType Can_Write( Can_HwHandleType Hth, const Can_PduType* PduInfo );

void Can_MainFunction_Mode( void );

#endif /* CAN_H_ */
