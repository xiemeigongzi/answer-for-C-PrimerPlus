//
#include <stdio.h>
int main()
{
    int a=0;
	printf("Input your age.\n");
	
	scanf("%d",&a);
	
	double b=a*3.156e7;
	
	printf("%f\n", b); 
	printf("%e\n", b);
	
		return 0;
 } 
 
 
 // int?如果是32位机，则32bit，最大是全1，（最高位为符号位），也就是2^31-1.
// unsigned int就是2^32-1 
