#include <stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d", &n);
	double sum1=0.0000;
	double sum2=0.0000;
	double sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0){
			sum1=sum1+1/i;
		}
		else{
			sum2=sum2+1/i;
		}
	}
	sum=sum2-sum1;
	printf("f is %f", sum);
	return 0;
}
