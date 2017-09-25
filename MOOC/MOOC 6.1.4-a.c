#include <stdio.h>
int main()
{
	char c=127;
	c=c+1;
	printf("%d\n",c);
	
	c=-128;
	c=c-1;
	printf("%d\n",c);
	
	unsigned char a=255;
	a=a+1;
	printf("%d\n", a);
	
	return 0;
 } 
