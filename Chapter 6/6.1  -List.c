#include <stdio.h>
int main()
{
	long num;
	long sum=0L;
	int status;
	
	status=scanf("%ld", &num);
	while(status==1)
	{
		sum+=num;
		status = scanf("%ld", &num);
	}
	
	printf("sum to %ld.\n", sum);
	return 0;
}
