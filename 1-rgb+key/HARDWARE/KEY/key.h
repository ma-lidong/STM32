#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"

#define KEY_ON	1
#define KEY_OFF	0


void KEY_Init(void);//IO��ʼ��
u8 KEY_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin);  	//����ɨ�躯��					    
#endif
