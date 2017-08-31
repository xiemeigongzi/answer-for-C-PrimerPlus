#include <stdio.h>
int main()
{
	int m=10,n=31;
	//scanf("%d %d", &m,&n);
	
	int i;
	int cnt=0;
	int sum=0;
	if(m==1)
	m=2;
	for(i=m;i<=n;i++)
	{
		int k;
		int isPrime=1;
		for(k=2;k<i-1;k++)
		{
			if(i%k==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1)
		{
			cnt++;
			sum=sum+k;
		}
	}
	printf("%d %d",cnt,sum);
	return 0;
}
