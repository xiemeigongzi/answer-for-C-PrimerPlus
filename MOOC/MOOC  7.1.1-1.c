#include <stdio.h>
int main()
{
	int x=13;
	//scanf("%d", &x);
	int is_Prime=1; 
	int i=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			is_Prime=0;
			printf("%d",i);
			break;
		}
	}
	return 0;
}
