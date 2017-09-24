#include <stdio.h>
int main()
{
	int x;
	int a;
	a=scanf("%d", &x);
	int count=0;
	int sum=0;
	float average;
	for(;a==1;count++)
	{
		a=scanf("%d", &x);
		sum=sum+x;
	}
	average = sum/count;
	printf(" %d / %d = %f\n", sum,count, average);
	
	return 0;
 } 
