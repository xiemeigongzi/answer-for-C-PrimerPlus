#include <stdio.h>
int main()
{
	int n;
	scanf ("%d", &n);
	int a=n;
	int m=1;
	while (n>0)
	{
		m=m*n;
		n--;
	}
	printf("%d!=%d\n",a,m);
	return 0;
}
