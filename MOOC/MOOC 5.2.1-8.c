#include <stdio.h>
int main()
{
	int x;
	int cnt=0;
	for(x=1;cnt<50;x++){
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
		cnt++;
	}
}
	return 0;
}
