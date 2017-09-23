#include <stdio.h>
int main()
{
	int n;
	printf("  n   n cubed\n");
	for(n=1;n<=10;n++)
	{
		printf("%5d  %5d \n", n, n*n*n);
	}
	return 0;
}
