/*---------------------------------------------------------------------
File Name:      <Platform_Types.h>
Created on:     <April 14, 2019>
Author:         <Abdelrahman Tarek>
Description:    <Module's Header File>
Status:         <<Finished>>
----------------------------------------------------------------------*/
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#define PLATFORM_VENDOR_ID                          (18U)

#define PLATFORM_SW_MAJOR_VERSION                   (1U)
#define PLATFORM_SW_MINOR_VERSION                   (0U)
#define PLATFORM_SW_PATCH_VERSION                   (0U)

#define PLATFORM_AR_RELEASE_MAJOR_VERSION           (4U)
#define PLATFORM_AR_RELEASE_MINOR_VERSION           (3U)
#define PLATFORM_AR_RELEASE_PATCH_VERSION           (1U)

typedef unsigned char         boolean;

#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

typedef unsigned char         uint8;
typedef signed char           int8;
typedef unsigned short        uint16;
typedef signed short          int16;
typedef unsigned long         uint32;
typedef signed long           int32;
typedef unsigned long long    uint64;
typedef signed long long      int64;
typedef float                 float32;
typedef double                float64;

#endif /* PLATFORM_TYPES_H */
