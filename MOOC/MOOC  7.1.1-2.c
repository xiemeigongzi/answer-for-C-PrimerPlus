#include <stdio.h>
int main()
{
	int m=10, n=31;
	int cnt=0;
	int sum=0;
	int i;
	for(i=m;i<=n;i++)
	{
		int k;
		int isPrime=1;
		for(k=2;k<i-1;k++)
		{
			if(i%k==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime==1)
		{
			cnt++;
			sum+=k;
		}
	}
	printf("%d %d", cnt,sum);	
	return 0;
}
