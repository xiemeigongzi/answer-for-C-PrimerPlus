#include <stdio.h>
int main()
{
	int x;
	for(x=1;x<=100;x++)
	{
		int i;
		int isPrime=1;
		int a;
		for(i=2;i<x;i++)
		{
			a=x%i;
			if(a==0){
				isPrime=0;
				break;
			}	
		}
		if(isPrime==1)
		printf("%d is Prime\n",x);
	}
	return 0;
}
