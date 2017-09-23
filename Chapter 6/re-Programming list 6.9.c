#include <stdio.h>
int main()
{
	long num;
	long sum=0L;
	_Bool input_is_good;
	
	printf("enter an integer to be summed ");
	printf("(q to quit)");
	input_is_good = (scanf("%ld", &num)==1);
	while (input_is_good)
	{
		sum=sum+num;
		printf("enter next integer : \n");
		input_is_good = (scanf("%ld", &num)==1);	
	}
	printf(" those integers sum to %d \n", sum);
	return 0;
}
