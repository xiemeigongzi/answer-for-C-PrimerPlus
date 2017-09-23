#include <stdio.h>
int main()
{
	double sum;
	double product;
	int count;
	printf("enter the times of loop.\n");
	int limit;
	scanf("%d", &limit);
	for(sum=1,product=1;count<=limit;count++)
	{
		product*=2;
		sum+=1.0/product;
		printf("time = %f when terms = %d .\n", sum, count);
	}
	
	return 0;
}
