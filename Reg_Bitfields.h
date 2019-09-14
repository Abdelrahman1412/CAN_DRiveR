/*---------------------------------------------------------------------
File Name:      <REG_BITFIELDS.h>
Created on:     <April 14, 2019>
Author:         <Abdelrahman Tarek>
Description:    <Module's Header File>
Status:         <<Finished>>
----------------------------------------------------------------------*/

#ifndef REG_BITFIELDS_H_
#define REG_BITFIELDS_H_

#define PLATFORM_REG_SIZE               (32U)



#if (PLATFORM_REG_SIZE == 32)
typedef union
{
    uint32 Data;
    struct
    {
        uint32 BIT0:1;
        uint32 BIT1:1;
        uint32 BIT2:1;
        uint32 BIT3:1;
        uint32 BIT4:1;
        uint32 BIT5:1;
        uint32 BIT6:1;
        uint32 BIT7:1;
        uint32 BIT8:1;
        uint32 BIT9:1;
        uint32 BIT10:1;
        uint32 BIT11:1;
        uint32 BIT12:1;
        uint32 BIT13:1;
        uint32 BIT14:1;
        uint32 BIT15:1;
        uint32 BIT16:1;
        uint32 BIT17:1;
        uint32 BIT18:1;
        uint32 BIT19:1;
        uint32 BIT20:1;
        uint32 BIT21:1;
        uint32 BIT22:1;
        uint32 BIT23:1;
        uint32 BIT24:1;
        uint32 BIT25:1;
        uint32 BIT26:1;
        uint32 BIT27:1;
        uint32 BIT28:1;
        uint32 BIT29:1;
        uint32 BIT30:1;
        uint32 BIT31:1;
    }BITS;
}REG_32BITS;
#endif

#if (PLATFORM_REG_SIZE == 16)

typedef union
{
    uint16 Data;
    struct
    {
        uint16 BIT0:1;
        uint16 BIT1:1;
        uint16 BIT2:1;
        uint16 BIT3:1;
        uint16 BIT4:1;
        uint16 BIT5:1;
        uint16 BIT6:1;
        uint16 BIT7:1;
        uint16 BIT8:1;
        uint16 BIT9:1;
        uint16 BIT10:1;
        uint16 BIT11:1;
        uint16 BIT12:1;
        uint16 BIT13:1;
        uint16 BIT14:1;
        uint16 BIT15:1;
    }BITS;
}REG_16BITS;
#endif

#if (PLATFORM_REG_SIZE == 8)

typedef union
{
    uint8 Data;
    struct
    {
        uint8 BIT0:1;
        uint8 BIT1:1;
        uint8 BIT2:1;
        uint8 BIT3:1;
        uint8 BIT4:1;
        uint8 BIT5:1;
        uint8 BIT6:1;
        uint8 BIT7:1;
    }BITS;
}REG_8BITS;
#endif

#endif /* REG_BITFIELDS_H_ */
