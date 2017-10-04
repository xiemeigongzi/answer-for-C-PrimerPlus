#include <stdio.h>
int main()
{
	float a[8]={0,};
	float b[8]={0,};
	int i;
	for(i=0;i<8;i++)
	{
		scanf("%lf", &a[i]);
	/*	printf("a[%d]=%d   ",i,a[i]);*/
	}
	
	printf("\n");
	
	for(i=0;i<8;i++)
	{
		b[i]+=a[i];
		printf("b[%d]=%d   ",i,b[i]);
	}
	
	return 0;
}
