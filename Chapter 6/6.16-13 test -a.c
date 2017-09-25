#include <stdio.h>
#include <math.h>
int main()
{
	int a[8];
	int i;
	float b=0.5;
	for (i=0;i<8;i++)
	{
		b=b*2;
		a[i]=b;
		printf("a[%d]=%d, namely 2^%d = %d \n", i,a[i],i,a[i]);
	}
	i=0;
	do {
	    printf("a[%d]=%d\n", i, a[i]);
	    i=i+1;	
	} while(i<8);
	return 0;
}
