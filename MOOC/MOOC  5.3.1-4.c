#include <stdio.h>
int main()
{
	double sum=0;
	double sum1=0;
	double sum2=0;
	int i=1;
	int n;
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)	{
			sum2=sum2+1.000/i;
			printf("every step sum2 is %f\n", sum2);	
		}
		else{
			sum1=sum1+1.000/i;
			printf("every step sum1 is %f\n", sum1);
		}
	}	
	sum = sum1-sum2;
	
	printf("sum is %f\n",sum );
	
	return 0;
} 

/*   i    sum1      sum2
     1  	1        0
     2		1	    -1/2
     3		1+1/3   -1/2
     4      1+1/3    -1/2-1/4
     
sum = 1+1/3-1/2-1/4= */
