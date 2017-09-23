#include <stdio.h>
double power();
int main()
{
	double x;
	scanf("%lf", &x);
	int  p;
	scanf("%d", &p);
	double n;
	n=power(x,p);
	printf("%lf", n);
	
	int i;
	while(n==scanf("%lf", &x))
	{
		//scanf("%lf", &x);
		scanf("%d", &p);
		n=power(x,p);
		printf("%lf", n);
	}
	
return 0;
}

double power(double x, int p)
{
	int i;
	double pow=1;
	for(i=1;i<=p;i++)
	{
		pow*=x;
	}
	return pow;
}
