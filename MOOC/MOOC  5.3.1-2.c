#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i=1;
	double sum=0.000;
	int sign=1;
	
	for(i=1;i<=n;i++)
	{
		sum=sum+sign*1.000/i;
		sign=-sign;
	}
	printf("f(%d)=%f", n,sum);
	return 0;	
}
