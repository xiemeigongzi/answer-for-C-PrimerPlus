#include <stdio.h>
int main()
{
	float a[8]={0,};
	float b[8]={0,};
	int i;
	for(i=0;i<8;i++)
	{
		scanf("%f", &a[i]);
		b[i]+=a[i];
		printf("a[%d]=%.3f   ",i,a[i]);
	}

	printf("\n");

	for(i=0;i<8;i++)
	{
		b[i]+=a[i];
		printf("b[%d]=%.3f   ",i,b[i]);
		if(b[i]>10)
		{
			
		}
	}

	return 0;
}
