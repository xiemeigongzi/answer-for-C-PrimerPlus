#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int digit=0;
	int t=0;
	int q=0;
	while(x>0)
	{
		digit=x%10;
		x=x/10;
		t=t*10+digit;
	}
	x=t;
	while(x>0)
	{
		digit=x%10;
		printf("%d",digit);
		if(x>9)
		{
			printf(" ");
		}
		x=x/10;
		q=q*10+digit;		
	}
	
	return 0;
}
