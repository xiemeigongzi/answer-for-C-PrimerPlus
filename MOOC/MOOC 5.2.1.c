#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
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
	printf("%d is a Prime.\n",x);}
	else{
		printf("%d is not a Prime.\n",x);
	}
	return 0;
 } 
