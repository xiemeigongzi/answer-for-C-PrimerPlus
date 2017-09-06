#include <stdio.h>
int main()
{
	int i;
	int n;
	int sign=1;
	scanf("%d", &n);
	double sum=0;
	for(i=1;i<=n;i++){
		sum=sum+1.0*sign/i;
		sign=-1.0*sign;
	}
	printf("sum is %f", sum);
	return 0;
}
