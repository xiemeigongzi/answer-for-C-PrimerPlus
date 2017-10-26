#include <stdio.h>
int main()
{
	int x=2345;
	int digit;
	int ret=0;
	while(x>0)
	{
		digit=x%10;
		ret=ret*10+digit;
		x=x/10;
	}
	printf("%d", ret);
	return 0;
}
