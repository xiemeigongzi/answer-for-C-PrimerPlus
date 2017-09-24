#include <stdio.h>
int main()
{
	int i=1;
	double f=0;
	int n;
	scanf("%d", &n);
	while (i<=n){
		f=f+1.0/i;
		i++;
	}
	printf("the sum is %f", f);
	return 0;
}
