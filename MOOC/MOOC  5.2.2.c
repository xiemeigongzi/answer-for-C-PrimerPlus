#include <stdio.h>
int main()
{
	int 100;
	//scanf("%d", &x);
	int isPrime=1;
	//int i;
	int n;
	int k=1;	
	for(n=1;n<x;n++)
	{
		
		for(k=2;k<n;k++)
		{
			if(n%k==0){
				isPrime=0;
			    break;	
			}
		}	
		if(isPrime==1)
		printf("n=%d, k=%d\n",n,k);
	}
	
	
	return 0;
}
