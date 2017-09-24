#include <stdio.h>
int main()
{
	int x=6;
	//scanf("%d", &x);
	int i;
	int judge=1;
	for (i=2; i<x;i++)
	{
		if(x%i==0)
		{
			judge=0;
			break;
		}	
	}
	
	if(judge==1)
	printf("%d is a Prime.\n", x);
	else 
	printf("%d is not a Prime.\n", x);
	
	return 0;
}
