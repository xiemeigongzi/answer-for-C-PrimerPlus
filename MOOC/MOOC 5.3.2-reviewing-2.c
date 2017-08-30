#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int a,b;
	a=x;
	int i=1;
	//int cnt=0;
	int mask=1;
	while(a>9)
	{
		a=a/10;
		//cnt++;	
		mask=mask*10;
	}
	printf("%d", mask);
	
	while(mask>0)
	{
		b=x/mask;	
		x=x%mask;
		printf("%d",b);
		if(mask>9)
		{
			printf(" ");
		}
		mask=mask/10;		
	}
	return 0;
}
