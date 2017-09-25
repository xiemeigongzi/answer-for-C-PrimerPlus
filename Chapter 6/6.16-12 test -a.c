#include <stdio.h>
void search();
int main()
{
	
	long long  n;
	scanf("%ld", &n);
	
	while(n>0){
		search(n);
		scanf("%ld", &n);

	}
	return 0;
}

void search(int n)
{
	float i;
	int sign=1;
	double sum1=0;
	double sum2=0;
	for(i=1.0;i<=n;i++)
	{
		sum1+=1.0/i;
		sum2+=sign*1.0/i;
		sign=-1*sign;
	}
	printf("when n=%ld, sum1=%f , sum2=%f\n", n, sum1, sum2);
	printf("sum1+sum2=%f\n ",sum1+sum2);
	
}
