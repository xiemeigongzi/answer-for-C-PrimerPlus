#include <stdio.h>
int main()
{
	double f=0;
	int i;
	int n;
	scanf ("%d", &n);
	for(i=1;i<=n;i++)
	{
		f=f+1.0/i;
	}
	printf("the sum is %f", f);
	return 0;
}
