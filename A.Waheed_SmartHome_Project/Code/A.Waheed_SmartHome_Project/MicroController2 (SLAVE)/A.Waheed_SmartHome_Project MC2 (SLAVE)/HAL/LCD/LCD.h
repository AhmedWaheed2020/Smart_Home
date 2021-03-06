/*
 * LCD.h
 *
 * Created: 26/8/2020 11:57:40
 *  Author: Ahmed_Waheed
 */ 


#ifndef LCD_H_
#define LCD_H_

#include  "LCD_Cfg.h"


void LCD_Init(void);
void LCD_WriteCommand(uint8 cmd);
void LCD_WriteData(uint8 data);
void LCD_GoTo(uint8 row , uint8 col);
void LCD_WriteString(uint8 *str);
void LCD_Clear(void);



#endif /* LCD_H_ */