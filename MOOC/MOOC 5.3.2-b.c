#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int ret1=0;
	int n=x;
	int a;
	while(n>0)
	{
		a=n%10;
		ret1=ret1*10+a;
		n=n/10;
	 } 
	printf("%d\n", ret1);
	
	n=ret1;
	int ret2;
	int digit;
	while(n>0) 
	{
		digit= n%10;
		ret2=ret2*10+digit;
		n=n/10;
		printf("%d\t", digit);
	}
	printf("%d\n", ret2);
	
	return 0;
}
