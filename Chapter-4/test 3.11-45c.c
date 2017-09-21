//
#include <stdio.h>
int main()
{
	long long a=0;
	printf("Input your age.\n");
	
	scanf("%ld",&a);
	
	long long b=a*3.156e7; // 这里出现错误；long 是整数类型  不能用来定义带小数点的数。 
	
	printf("%ld\n", b); 
	printf("%e\n", b);
	
		return 0;
 } 
 
 
 // int?如果是32位机，则32bit，最大是全1，（最高位为符号位），也就是2^31-1.
// unsigned int就是2^32-1 
