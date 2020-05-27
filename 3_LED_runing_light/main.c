#include "reg52.h"
#include "intrins.h"
typedef unsigned char u8;
typedef unsigned int u16;

#define led P2

void delay(u16 i){	  //i==1,10΢��
	while(i--);
}

void main(){
	u8 i=0;
	led=0xfe;	//1111 1110
	delay(50000);
	while(1){
		for(i=0;i<7;i++){
			led=_crol_(led,1);		  //0xfe 1111 1101
			delay(50000);
		}
		for(i=0;i<7;i++){
			led=_cror_(led,1);		 
			delay(50000);
		}
		//led=0xfe;
	}
}