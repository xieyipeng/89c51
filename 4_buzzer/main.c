#include "reg52.h"
#include "intrins.h"
typedef unsigned char u8;
typedef unsigned int u16;

sbit beep=P1^5;

void delay(u16 i){	  //i==1,10΢��
	while(i--);
}

void main(){
	
	while(1){
		//beep=~beep;
		delay(100);
	}
}
