/*
 * ComStack_Cfg.h
 *
 *  Created on: Sep 14, 2019
 *      Author: Abdelrahman
 */

#ifndef COMSTACK_CFG_H_
#define COMSTACK_CFG_H_

#define SEGMENTED_NPDU          (0x01)

#define PDUS_MAX_LENGTH         SEGMENTED_NPDU

#define Less_THAN_256           (0x00)
#define MORE_THAN_256           (0x01)

#define PDUS_MAX_NUMBER         MORE_THAN_256

#endif /* COMSTACK_CFG_H_ */
