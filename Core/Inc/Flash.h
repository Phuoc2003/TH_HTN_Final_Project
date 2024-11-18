/*
 * Flash.h
 *
 *  Created on: Nov 15, 2024
 *      Author: Phuoc Huu Phan
 */

#ifndef INC_FLASH_H_
#define INC_FLASH_H_

#include "stm32f4xx_hal.h"
#include <string.h>
#include <stdio.h>
#include <stdint.h>

uint32_t Flash_Write_Data(uint32_t StartSectorAddress, uint16_t *Data, uint16_t number_of_halfwords);

void Flash_Read_Data (uint32_t StartSectorAddress, uint16_t *RxBuf, uint16_t number_of_halfwords);

void Convert_To_Str (uint32_t *Data, char *Buf);

void Flash_Write_NUM (uint32_t StartSectorAddress, float Num);

float Flash_Read_NUM (uint32_t StartSectorAddress);

#endif /* INC_FLASH_H_ */
