#include <stdio.h>
 
int main ()
{
   int  var = 20;   /* 实际变量的声明 */
	int  *ip;        /* 指针变量的声明 */
   
    // ip = &var;
	// *ip = &var's value =20
 
   ip = &var;  /* 在指针变量中存储 var 的地址 */
 
   printf("var's variable address is: %p\n", &var  );
 
 
   /* 在指针变量中存储的地址 */
   printf("ip's variable address is: %p\n", ip );
   
   
 
   /* 使用指针访问值 */
   printf("*ip's variable value: %d\n", *ip );
 
   return 0;
}