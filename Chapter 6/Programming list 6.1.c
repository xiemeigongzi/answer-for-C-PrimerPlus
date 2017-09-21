#include <stdio.h>
int main()
{
	long num;
	long sum=0L;
	int status;
	
	printf("please enter an integer to be summed \n");
	printf("q to quit: \n");
	status = scanf("%ld", &num);
	//printf("status=%ld, num=%ld\n", status, num);
	while (status ==1)
	{
		
		sum =sum+num;
		printf(" enter next integer (q to quit):\n");
		status = scanf("%ld", &num);
	}
	printf("those integers sum to %ld . \n", sum);
	return 0;
}
