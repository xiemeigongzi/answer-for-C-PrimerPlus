#include <stdio.h>
int main()
{
	float a=950.0;
   float b= 3.0e-23;
	
	float c;
	scanf("%f", &c); //  这里出现问题 是%f  不是f 
	
	float d;
	
	d=a*c/b;
	
	
	printf("%f\n",d);
	//printf("%e\n",d);
	return 0;
 } 
