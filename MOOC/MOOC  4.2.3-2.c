#include <stdio.h>
int main()
{
	int number;
	int sum;
	int count=-1;
	
	while(number!=-1)
	{
		scanf("%d", &number);
		sum+=number;
		++count;
	}
	printf("Average is %f", 1.0*(sum+1)/count);
	return 0;
}
