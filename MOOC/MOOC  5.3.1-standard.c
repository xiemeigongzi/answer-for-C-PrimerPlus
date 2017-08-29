#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double sum=0.000;
	int sign=1;
	int i;
	for(i=1;i<=n;i++)
	{
		sum = sum + sign*1.0/i;
		sign=-sign;
	}
	printf("f= %f\n", sum);
	return 0;
}
