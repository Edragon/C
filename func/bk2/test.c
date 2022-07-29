/* #define D_A   PORTA_PORTA7    //数码管A段对应端口
#define D_B   PORTB_PORTB1    //数码管B段对应端口
#define D_C   PORTC_PORTC6    //数码管C段对应端口
#define D_D   PORTC_PORTC0    //数码管D段对应端口
#define D_E   PORTD_PORTD7    //数码管E段对应端口
#define D_F   PORTB_PORTB0    //数码管F段对应端口
#define D_G   PORTC_PORTC7    //数码管G段对应端口
#define D_P   PORTC_PORTC1    //数码管G段对应端口
 */

#include <stdio.h>

void main() {
  //printf("print test ");
  
  int i = 00111101;

  if ( (i&0x01) == 1) {
      D_A= 1;
      printf("DA = 0");
  }

}


/* if((i&0x02)!=0)
    D_B=0;
if((i&0x04)!=0)
    D_C=0;
if((i&0x08)!=0)
    D_D=0;
if((i&0x10)!=0)
    D_E=0;
if((i&0x20)!=0)
    D_F=0;
if((i&0x40)!=0)
    D_G=0; */