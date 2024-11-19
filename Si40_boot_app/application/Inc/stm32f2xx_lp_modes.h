/**
  ******************************************************************************
  * @file    PWR/PWR_CurrentConsumption/stm32f2xx_lp_modes.h
  * @author  MCD Application Team
  * @brief   Header for stm32f2xx_lp_modes.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F2xx_LP_MODES_H
#define __STM32F2xx_LP_MODES_H

/* Includes ------------------------------------------------------------------*/
//#include "main.h"
#include "stm32f2xx_hal.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

 #define STANDBY_RTC_BKPSRAM_MODE
/* #define STOP_MODE */
/* #define STANDBY_MODE */
/* #define STANDBY_RTC_MODE */
/* #define STANDBY_RTC_BKPSRAM_MODE */


/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
//void SleepMode_Measure(void);
//void StopMode_Measure(void);
//void StandbyMode_Measure(void);
//void StandbyRTCMode_Measure(void);
void StandbyRTCBKPSRAMMode_Measure(int wakeUpTime);
/**
  * @brief  Writes a data in RTC_BKP_DR0.
  * 
  * @param  Data Data to be written in the sRTC_BKP_DR0.
  * @retval None
  */
void BKUP0Write(unsigned int Data);
    
/**
  * @brief  Reads data from the RTC_BKP_DR0.
  * 
  * @retval Read value
  */
unsigned int BKUP0Read(void);
/**
  * @brief  Writes a data in RTC_BKP_DR1.
  * 
  * @param  Data Data to be written in the sRTC_BKP_DR1.
  * @retval None
  */
void BKUP1Write(unsigned int Data);
/**
  * @brief  Writes a data in RTC_BKP_DR2.
  * 
  * @param  Data Data to be written in the sRTC_BKP_DR2.
  * @retval None
  */
void BKUP2Write(unsigned int Data);
    
/**
  * @brief  Reads data from the RTC_BKP_DR2.
  * 
  * @retval Read value
  */
unsigned int BKUP2Read(void);    
/**
  * @brief  Reads data from the RTC_BKP_DR1.
  * 
  * @retval Read value
  */
unsigned int BKUP1Read(void);
/**
  * @brief  RTCHandler setup
  * 
  * @param  Data Data to be written in the sRTC_BKP_DR0.
  * @retval None
  */

void RTCInit(void);

#endif /* __STM32F2xx_LP_MODES_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
