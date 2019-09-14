/*---------------------------------------------------------------------
File Name:      <Can_GeneralTypes.h>
Created on:     <Sep 9, 2019>
Author:         <Abdelrahman Tarek>
Description:    <Module's Header File>
Status:         <<Finished>>
----------------------------------------------------------------------*/

#ifndef CAN_GENERALTYPES_H_
#define CAN_GENERALTYPES_H_


/*  This type unites PduId (swPduHandle), SduLength (length), SduData (sdu), and CanId (id) for any CAN L-SDU. */
typedef struct {

    Can_IdType          CanId;          // Standard/Extended CAN ID of CAN L-PDU
    Can_HwHandleType    Hoh;            // ID of the corresponding Hardware Object Range
    uint8               ControllerId;   // ControllerId provided by CanIf clearly identify the corresponding controller
}Can_HwType;

typedef struct {

    PduIdType           swPduHandle;    //  PduId
    uint8               length;         //  SduLength
    Can_IdType          id;             //  CanId
    uint8*              sdu;            //  SduData
}Can_PduType;

typedef     uint32      Can_IdType;
/*
 * Represents the Identifier of an L-PDU.
 * The two most significant bits specify the frame type:
 * 00 CAN message with Standard CAN ID
 * 01 CAN FD frame with Standard CAN ID
 * 10 CAN message with Extended CAN ID
 * 11 CAN FD frame with Extended CAN ID
 */
typedef     uint8      Can_ErrorStateType;
#define     CAN_ERRORSTATE_ACTIVE           (0x00)  //  The CAN controller takes fully part in communication.
#define     CAN_ERRORSTATE_PASSIVE          (0x01)  //  The CAN controller takes part in communication, but does not send active error frames
#define     CAN_ERRORSTATE_BUSOFF           (0x02)  //  The CAN controller doesn't take part in communication.

typedef     uint8      Can_ControllerStateType;
#define     CAN_CS_UNINIT                   (0x00)  //  CAN controller state UNINIT.
#define     CAN_CS_STARTED                  (0x01)  //  CAN controller state STARTED.
#define     CAN_CS_STOPPED                  (0x02)  //  CAN controller state STOPPED.
#define     CAN_CS_SLEEP                    (0x03)  //  CAN controller state SLEEP.


#if     (CAN_HWUNIT_NO == EXTD)
typedef     uint16      Can_HwHandleType;

#if     (CAN_HWUNIT_NO == STD)
typedef     uint8      Can_HwHandleType;

#endif /* CAN_GENERALTYPES_H_ */
