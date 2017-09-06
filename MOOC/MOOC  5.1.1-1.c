#include <stdio.h>
int main()
{
	int x=10;
	int i;
	int product=1;
	for (i=x;i>=1;i--)
	{
		product*=i;
	}
	printf("x!=%d \n", product);
	return 0;
}
