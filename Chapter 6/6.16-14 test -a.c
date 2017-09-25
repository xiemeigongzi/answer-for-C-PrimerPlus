#include <stdio.h>
int main()
{
	double a[8];
	double b[8];
	b[0]=0;
	int i;
	double sum[8];
	sum[0]=0;
	for(i=0;i<8;i++)
	{
		scanf("%lf",&a[i]);
		printf("%f   ", a[i]);
		//sum[i]+=a[i];
		//printf("%f   ", sum[i]);
	}
	
	for(i=0;i<8;i++){
		int j;
		double sum1[8];
		sum1[0]=0.0;
		for(j=0;j<=i;j++)
			{
		    sum1[j]+=a[j]	;
	        }
	        printf("sum1[%d]=%f\n", j,sum1[j]);
		b[i]=sum1[i];
		printf("b[%d]=%f\n", i,b[i]);}
   		return 0;
}
