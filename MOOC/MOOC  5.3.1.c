#include <stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d", &n);
	double sum=0;
	for(i=1;i<=n;i++){
		sum=sum+1.0/i;
	}
	printf("sum is %f", sum);
	return 0;
}
