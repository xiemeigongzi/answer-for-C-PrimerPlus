#include <stdio.h>
int main()
{
	int a,b;
	int min;
	scanf("%d %d", &a, &b);
	if(a<b)
	{
		min=a;
	}
	else{
		min=b;
	}
	int ret=0;
	int i=1;
	for(i=1;i<=min;i++)
	{
		if(a%i==0)
		{	if(b%i==0);
		printf("%d\n",i);
		ret=i;
		}
	}
		printf("%d",ret);
	return 0;
}
