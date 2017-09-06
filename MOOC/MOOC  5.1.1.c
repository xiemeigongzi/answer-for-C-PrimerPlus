#include <stdio.h>
int main()
{
	int x=10;
	int fact=1;
	int i;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	printf("%d!= %d", x,fact);
	return 0;
}
