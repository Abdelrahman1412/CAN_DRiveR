/*---------------------------------------------------------------------
File Name:      <Std_Types.h>
Created on:     <April 14, 2019>
Author:         <Abdelrahman Tarek>
Description:    <Module's Header File>
Status:         <<Finished>>
----------------------------------------------------------------------*/

#ifndef STD_TYPES_H
#define STD_TYPES_H

/******************************INCLUDES********************************/

#include "Platform_Types.h"
#include "Compiler.h"
#include "bitwise.h"

/*******************Definitions and Configurations*********************/

#define STD_TYPES_VENDOR_ID                                  (18U)

#define STD_TYPES_SW_MAJOR_VERSION                           (1U)
#define STD_TYPES_SW_MINOR_VERSION                           (0U)
#define STD_TYPES_SW_PATCH_VERSION                           (0U)

#define STD_TYPES_AR_RELEASE_MAJOR_VERSION                   (4U)
#define STD_TYPES_AR_RELEASE_MINOR_VERSION                   (3U)
#define STD_TYPES_AR_RELEASE_PATCH_VERSION                   (1U)

typedef uint8  Std_ReturnType;

typedef struct
{
  uint16  vendorID;
  uint16  moduleID;
  uint8   sw_major_version;
  uint8   sw_minor_version;
  uint8   sw_patch_version;
} Std_VersionInfoType;

#define STD_HIGH        0x01U
#define STD_LOW         0x00U

#define STD_ACTIVE      0x01U
#define STD_IDLE        0x00U

#define STD_ON          0x01U
#define STD_OFF         0x00U

#define E_OK            ((Std_ReturnType)0x00U)
#define E_NOT_OK        ((Std_ReturnType)0x01U)

#endif /* STD_TYPES_H */
