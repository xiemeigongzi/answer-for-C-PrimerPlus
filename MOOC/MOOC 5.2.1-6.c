#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	
	int i;
	int is_Prime=1;
	for(i=2;i<x;i++)
	{
		
		if(x%i==0)
		{
			is_Prime=0;
			break;
		}	
	}
	if(is_Prime==1)
	{
		printf("%d is a Prime\n",x);
	}
	else{
		printf("%d is not a Prime\n",x);
	}
	return 0;
}
