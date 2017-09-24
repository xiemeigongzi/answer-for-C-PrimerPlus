#include <stdio.h>
int main()
{
	int x;
	int a;
	a=scanf("%d", &x);
	int count=0;
	int sum=0;
	float average;
	while(a==1)
	{
		sum=sum+x;
		a=scanf("%d", &x);
		count++;
	}
	
	average = sum/count;
	printf(" %d / %d = %f\n", sum,count, average);
	
	return 0;
 } 
