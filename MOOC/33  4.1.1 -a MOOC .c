#include <stdio.h>
int main()
{
	int x=33333333;
	x=x/10;
	int n=0;
	//scanf("%d", &x);
	while(x>0)
	{
		n++;
		x=x/10;
	}
	printf("%d", n);
	return 0;
}
