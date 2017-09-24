#include <stdio.h>
int main()
{
	long x;
	scanf ("%ld", &x);
	long digit=0;
	while (x>0)
	{
		x=x/10;
		digit++;
		printf("there is %d digits.\n", digit);
	}
	return 0;
}
