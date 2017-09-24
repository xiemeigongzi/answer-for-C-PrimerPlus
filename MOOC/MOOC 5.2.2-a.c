#include <stdio.h>
int main()
{
	int i;
	
	int x;
	
	for(i=1;i<=100;i++)
	{
		int j;
		int isPrime=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				isPrime=0;
				continue;
			}	
		}
		if(isPrime==1)
		{
			printf("%d is a Prime within 100\n", i);
		}
	}
	
	
	
	return 0;
}
