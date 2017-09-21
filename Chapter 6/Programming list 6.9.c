#include <stdio.h>
int main()
{
	long num;
	long sum=0L;
	_Bool input_is_good;  // Âß¼­ÔËËã 
	
	printf("enter an integer to be summed \n");
	printf("(q to quit )\n");
	input_is_good=(scanf("%ld",&num)==1);
	while (input_is_good)
	{
		sum=sum+num;
		printf("enter next integer (q to quit): \n");
		input_is_good = (scanf("%ld",&num)==1);
		}	
		printf("those integers sum to %ld. \n", sum);
	return 0;
}
