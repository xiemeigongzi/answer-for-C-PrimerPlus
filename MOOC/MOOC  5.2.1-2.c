#include <stdio.h>
int main()
{
	int x=0;
	scanf("%d", &x);
	
	int i=1;
	int is_Prime=1;
	for(i=2;i<x;i++)
	{
		x=x%i;
		if(x==0){
		is_Prime=0;
		break;	
		}
	}
	if(is_Prime==1)
	{
		printf("It is a Prime");}
		else
			printf("It is not a Prime");
	return 0;
}
