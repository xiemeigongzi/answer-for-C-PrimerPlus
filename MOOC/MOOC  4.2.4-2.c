#include <stdio.h>
int main()
{
	int x=0;
	scanf("%d", &x);
	int digit;
	int ret=0;
	
	while(x>0)
	{
	digit=x%10;
	ret=ret*10+digit;
	x=x/10;
	printf("x is %d, digit is %d, ret is %d\n",x,digit,ret);
	}
	printf("x is %d, digit is %d, ret is %d\n",x,digit,ret);
	return 0;
}
