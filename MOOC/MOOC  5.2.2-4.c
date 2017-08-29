#include <stdio.h>
int main()
{
	int x;	
	for(x=1;x<=100;x++){
		int i=1;
		int is_Prime=1;
		int a;
   		for(i=2;i<x;i++)
	{
		a=x%i;
		if(a==0)
		{
			is_Prime=0;
			break;
		}
	}
	if(is_Prime==1)
	printf("The Prime is %d \n", x);
	}
	return 0;
}
