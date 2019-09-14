/*
 * ComStack_Types.h
 *
 *  Created on: Sep 9, 2019
 *      Author: Abdelrahman
 */

#ifndef COMSTACK_TYPES_H_
#define COMSTACK_TYPES_H_


#include "Std_Types.h"
#include "ComStack_Cfg.h"

typedef     uint8      IcomConfigIdType;

typedef     uint8      IcomSwitch_ErrorType;
#define     ICOM_SWITCH_E_OK                (0x00)      //  The activation of Pretended Networking was successful.
#define     ICOM_SWITCH_E_FAILED            (0x01)      //  The activation of Pretended Networking was NOT successful.

#if (PDUS_MAX_LENGTH == SEGMENTED_NPDU)      // generated in ComStack_Cfg.h file
typedef     uint16      PduLengthType;
#else
typedef     uint8       PduLengthType;
#endif


#if (PDUS_MAX_NUMBER == MORE_THAN_256)      // generated in ComStack_Cfg.h file
typedef     uint16      PduIdType;
#else
typedef     uint8      PduIdType;
#endif

typedef struct
{
    uint8*          SduDataPtr;
    uint8*          MetaDataPtr;
    PduLengthType   SduLength;
}PduInfoType;


#endif /* COMSTACK_TYPES_H_ */
