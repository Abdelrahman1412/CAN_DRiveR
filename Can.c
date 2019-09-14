/*---------------------------------------------------------------------
File Name:      <Can.c>
Created on:     <Sept 9, 2019>
Author:         <Abdelrahman Tarek>
Description:    <Module's Source File>
Status:         <<Not Finished>>
----------------------------------------------------------------------*/

/***************************** INCLUDES ******************************/

#include "Can.h"
#include "Can_Reg.h"
#include "CanIf_Cbk.h"
#include "EcuM_Cbk.h"
#include "Os.h"
#include "Spi.h"
#include "SchM_Can.h"
#include "MemMap.h"
#include "Det.h"
#include "Dem.h"

/**************************Global Variables****************************/

/************************Function Definitions**************************/

/*---------------------------------------------------------------------
Function Name:  <Can_Write>
Service ID:     <0x06>
Parameters (in):
- Hth:
information which HW-transmit handle shall be used for transmit.
Implicitly this is also the information about the controller to use because the Hth numbers are unique inside one Hw-unit.
- PduInfo:
Pointer to SDU user memory, Data Length and Identifier.
Description:
- This function is called by CanIf to pass a CAN message to CanDrv for transmission.

----------------------------------------------------------------------*/
Std_ReturnType Can_Write(
    Can_HwHandleType    Hth,
    const Can_PduType*  PduInfo
    )
{
    if ()       //  DET ERROR
    {
        return E_NOT_OK;
    }

    else if ()  //  No TX hardware buffer available or pre-emptive call of the function
    {
        return CAN_BUSY;
    }
    else
    {
        //  function code

        return E_OK;
    }
}

/*---------------------------------------------------------------------
Function Name:  <Can_MainFunction_Mode>
Service ID:     <0x0c>
Description:
- Scheduled function.
- This function performs the polling of CAN controller mode transitions.
- it implements the polling of CAN status register flags to detect transition of CAN Controller state.
----------------------------------------------------------------------*/
void Can_MainFunction_Mode( void )
{
    // mask the flag bits of the CAN mode and update its value in the cfg_ptr
    switch (MODE_PIN_REG)
    {
    case    0x00:MODE_PARAM_CFG = CAN_CS_UNINIT;  break;
    case    0x01:MODE_PARAM_CFG = CAN_CS_STARTED; break;
    case    0x02:MODE_PARAM_CFG = CAN_CS_STOPPED; break;
    case    0x03:MODE_PARAM_CFG = CAN_CS_SLEEP;   break;
    default;
    }
}

