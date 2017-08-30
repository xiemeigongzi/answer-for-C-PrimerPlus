#include <stdio.h>
int main()
{
	int x=123456;
	int ret=0;
	int digit=0;
	while(x>0)
	{
		digit=x%10;
		printf("digit is %d\n", digit);
		x=x/10;
		ret = ret*10+digit;
	}
	printf("result is %d", ret);
	return 0;}
