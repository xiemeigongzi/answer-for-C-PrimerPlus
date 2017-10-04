#include <stdio.h>
int main()
{
	int i=1;
	float sum1=0;
		float sum2=0;
	float sign=1.0;
	long int n;
	scanf("%ld", &n);
	while(n>0){
	for(i=1;i<=n;i++)
	{
		sum1+=1.0/i;
		
		sum2+=sign*1/i;
		sign=(-1.0)*sign;
		
	}
	printf("sum1 = %f,    sum2 = %f \n", sum1, sum2);
	scanf("%ld",&n);
	}
	return 0;
}
