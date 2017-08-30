#include <stdio.h>
int main()
{
	int n=4;
	int sign=1;
	double sum=0;
	int i;
	for(i=1;i<=n;i++)
	{
		sum=sum+1.000*sign/i;
		printf("sum is %f\n",sum);
		sign=-sign;
	}
		printf("Total sum is %f",sum);
	
	return 0;
 } 
