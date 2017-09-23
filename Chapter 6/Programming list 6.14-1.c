#include <stdio.h>
int main()
{
	int count=1;
	double sum;
	int b;
	printf("enter the times of loop.\n");
	int limit;
	scanf("%d", &limit);
	for(sum=1,b=1;count<=limit;count++)
	{
		b=b*2;
		sum=sum+1.0/b;
		printf("time = %f when terms = %d .\n", sum, count);	
	}
	
	
	return 0;
 } 
