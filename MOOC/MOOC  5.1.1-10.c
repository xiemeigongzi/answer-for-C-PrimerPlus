#include <stdio.h>
int main()
{
	int x=1;
	int cnt;
	while(cnt<50)
	{
		int i;
		int isPrime=1;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d is Prime\n",x);
			cnt++;
		
		}
			x++;
	}
}
