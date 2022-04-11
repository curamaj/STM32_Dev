/**
  ******************************************************************************
  * @file    hx8347d.h
  * @author  MCD Application Team
  * @version V1.1.1
  * @date    24-November-2014
  * @brief   This file contains all the functions prototypes for the hx8347d.c
  *          driver.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
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
#ifndef __HX8347D_H
#define __HX8347D_H

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/
#include "../Common/lcd.h"

/** @addtogroup BSP
  * @{
  */ 

/** @addtogroup Components
  * @{
  */ 
  
/** @addtogroup HX8347D
  * @{
  */

/** @defgroup HX8347D_Exported_Types
  * @{
  */
   
/**
  * @}
  */ 

/** @defgroup HX8347D_Exported_Constants
  * @{
  */
/** 
  * @brief  HX8347D ID  
  */  
#define  HX8347D_ID    0x0047
   
/** 
  * @brief  HX8347D Size  
  */  
#define  HX8347D_LCD_PIXEL_WIDTH    ((uint16_t)320)
#define  HX8347D_LCD_PIXEL_HEIGHT   ((uint16_t)240)
   
/** 
  * @brief  HX8347D Registers  
  */ 
#define LCD_REG_0             0x00
#define LCD_REG_1             0x01
#define LCD_REG_2             0x02
#define LCD_REG_3             0x03
#define LCD_REG_4             0x04
#define LCD_REG_5             0x05
#define LCD_REG_6             0x06
#define LCD_REG_7             0x07
#define LCD_REG_8             0x08
#define LCD_REG_9             0x09
#define LCD_REG_10            0x0A
#define LCD_REG_12            0x0C
#define LCD_REG_13            0x0D
#define LCD_REG_14            0x0E
#define LCD_REG_15            0x0F
#define LCD_REG_16            0x10
#define LCD_REG_17            0x11
#define LCD_REG_18            0x12
#define LCD_REG_19            0x13
#define LCD_REG_20            0x14
#define LCD_REG_21            0x15
#define LCD_REG_22            0x16
#define LCD_REG_23            0x17
#define LCD_REG_24            0x18
#define LCD_REG_25            0x19
#define LCD_REG_26            0x1A
#define LCD_REG_27            0x1B
#define LCD_REG_28            0x1C
#define LCD_REG_29            0x1D
#define LCD_REG_30            0x1E
#define LCD_REG_31            0x1F
#define LCD_REG_32            0x20
#define LCD_REG_33            0x21
#define LCD_REG_34            0x22
#define LCD_REG_35            0x23
#define LCD_REG_36            0x24
#define LCD_REG_37            0x25
#define LCD_REG_39            0x27
#define LCD_REG_40            0x28
#define LCD_REG_41            0x29
#define LCD_REG_43            0x2B
#define LCD_REG_45            0x2D
#define LCD_REG_48            0x30
#define LCD_REG_49            0x31
#define LCD_REG_50            0x32
#define LCD_REG_51            0x33
#define LCD_REG_52            0x34
#define LCD_REG_53            0x35
#define LCD_REG_54            0x36
#define LCD_REG_55            0x37
#define LCD_REG_56            0x38
#define LCD_REG_57            0x39
#define LCD_REG_59            0x3B
#define LCD_REG_60            0x3C
#define LCD_REG_61            0x3D
#define LCD_REG_62            0x3E
#define LCD_REG_63            0x3F
#define LCD_REG_64            0x40
#define LCD_REG_65            0x41
#define LCD_REG_66            0x42
#define LCD_REG_67            0x43
#define LCD_REG_68            0x44
#define LCD_REG_69            0x45
#define LCD_REG_70            0x46
#define LCD_REG_71            0x47
#define LCD_REG_72            0x48
#define LCD_REG_73            0x49
#define LCD_REG_74            0x4A
#define LCD_REG_75            0x4B
#define LCD_REG_76            0x4C
#define LCD_REG_77            0x4D
#define LCD_REG_78            0x4E
#define LCD_REG_79            0x4F
#define LCD_REG_80            0x50
#define LCD_REG_81            0x51
#define LCD_REG_82            0x52
#define LCD_REG_83            0x53
#define LCD_REG_84            0x54
#define LCD_REG_85            0x55
#define LCD_REG_86            0x56
#define LCD_REG_87            0x57
#define LCD_REG_88            0x58
#define LCD_REG_89            0x59
#define LCD_REG_90            0x5A
#define LCD_REG_91            0x5B
#define LCD_REG_92            0x5C
#define LCD_REG_93            0x5D
#define LCD_REG_96            0x60
#define LCD_REG_97            0x61
#define LCD_REG_106           0x6A
#define LCD_REG_118           0x76
#define LCD_REG_128           0x80
#define LCD_REG_129           0x81
#define LCD_REG_130           0x82
#define LCD_REG_131           0x83
#define LCD_REG_132           0x84
#define LCD_REG_133           0x85
#define LCD_REG_134           0x86
#define LCD_REG_135           0x87
#define LCD_REG_136           0x88
#define LCD_REG_137           0x89
#define LCD_REG_139           0x8B
#define LCD_REG_140           0x8C
#define LCD_REG_141           0x8D
#define LCD_REG_143           0x8F
#define LCD_REG_144           0x90
#define LCD_REG_145           0x91
#define LCD_REG_146           0x92
#define LCD_REG_147           0x93
#define LCD_REG_148           0x94
#define LCD_REG_149           0x95
#define LCD_REG_150           0x96
#define LCD_REG_151           0x97
#define LCD_REG_152           0x98
#define LCD_REG_153           0x99
#define LCD_REG_154           0x9A
#define LCD_REG_157           0x9D
#define LCD_REG_192           0xC0
#define LCD_REG_193           0xC1
#define LCD_REG_227           0xE3
#define LCD_REG_229           0xE5
#define LCD_REG_231           0xE7
#define LCD_REG_239           0xEF
#define LCD_REG_232           0xE8
#define LCD_REG_233           0xE9
#define LCD_REG_234           0xEA
#define LCD_REG_235           0xEB
#define LCD_REG_236           0xEC
#define LCD_REG_237           0xED
#define LCD_REG_241           0xF1
#define LCD_REG_242           0xF2

/**
  * @}
  */
  
/** @defgroup HX8347D_Exported_Functions
  * @{
  */ 
void     hx8347d_Init(void);
uint16_t hx8347d_ReadID(void);
void     hx8347d_WriteReg(uint8_t LCDReg, uint16_t LCDRegValue);
uint16_t hx8347d_ReadReg(uint8_t LCDReg);

void     hx8347d_DisplayOn(void);
void     hx8347d_DisplayOff(void);
void     hx8347d_SetCursor(uint16_t Xpos, uint16_t Ypos);
void     hx8347d_WritePixel(uint16_t Xpos, uint16_t Ypos, uint16_t RGBCode);
uint16_t hx8347d_ReadPixel(uint16_t Xpos, uint16_t Ypos);

void     hx8347d_DrawHLine(uint16_t RGBCode, uint16_t Xpos, uint16_t Ypos, uint16_t Length);
void     hx8347d_DrawVLine(uint16_t RGBCode, uint16_t Xpos, uint16_t Ypos, uint16_t Length);
void     hx8347d_DrawBitmap(uint16_t Xpos, uint16_t Ypos, uint8_t *pbmp);

void     hx8347d_SetDisplayWindow(uint16_t Xpos, uint16_t Ypos, uint16_t Width, uint16_t Height);


uint16_t hx8347d_GetLcdPixelWidth(void);
uint16_t hx8347d_GetLcdPixelHeight(void);

/* LCD driver structure */
extern LCD_DrvTypeDef   hx8347d_drv;

/* LCD IO functions */
void     LCD_IO_Init(void);
void     LCD_IO_WriteMultipleData(uint8_t *pData, uint32_t Size);
void     LCD_IO_WriteReg(uint8_t Reg);
uint16_t LCD_IO_ReadData(uint16_t Reg);
void     LCD_Delay (uint32_t delay);
/**
  * @}
  */ 
      
#ifdef __cplusplus
}
#endif

#endif /* __HX8347D_H */

/**
  * @}
  */ 

/**
  * @}
  */ 

/**
  * @}
  */
  
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/