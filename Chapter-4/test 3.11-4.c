// 读取浮点数， 先 小数形式 再  指数形式 ， 再十六进制 %p 
#include <stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	
	printf(" Enter a floating-point value: \n");  //
	
	printf("fixed-point notation :%f \n",a);// %f : 小数 
	
	printf("exponential notation : %e \n",a); // %e : 指数 
	
	printf("p notation : %a\n",a);// %p  : 地址；  %a: 十六进制整数； 
	
	return 0;
 } 
