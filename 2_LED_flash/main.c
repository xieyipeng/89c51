#include "reg52.h"
typedef unsigned char u8;
typedef unsigned int u16;

sbit led=P2^0;	  //D1

void delay(u16 i){	  //i==1,10΢��
	while(i--);
}

void main(){
	while(1){
		led=0;
		delay(50000);
		led=1;
		delay(50000);
	}
}