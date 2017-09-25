#include <stdio.h>
int main()
{
	double a[8];
	double b[8];
	double sum[8];
	int i;
	for(i=0;i<8;i++)
	{
		scanf("%lf", &a[i]);
		printf("a[%d]=%f\n", i, a[i]);
		int j;
		for(j=0;j<=i;j++){
			sum[i]+=a[j];
		}
		printf("sum[%d]=%f\n", i,sum[i]);
	}
	
	for(i=0;i<8;i++)
	{
		b[i]=sum[i];
		printf("b[%d]=%f\n", i, b[i]);
	}
	
	return 0;
}
