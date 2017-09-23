#include <stdio.h>
int main()
{
	long num; 
	long sum = 0L;
	int status;
	
	printf("enter an integer to be summed ");
	printf("(q to quit)");
	status = scanf("%ld", &num);
	while (status==1)
	{
		sum=sum+num;
		printf("enter next integer (q to quit):");
		status = scanf("%ld", &num);
	 } 
	printf("thoese integers sum to %ld . \n", sum);
	return 0;
 } 
