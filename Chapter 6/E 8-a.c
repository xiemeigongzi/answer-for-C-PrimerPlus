#include <stdio.h>
double find(double a, double b);
int main()
{
	double a,b;
	int  c;
	
	c=scanf("%lf %lf", &a, &b);
	printf("c=%d\n",c);

	while(c==2)
	{
		find(a,b);
		c=scanf("%lf %lf", &a, &b);
	}
	return 0;
}

double find(double a, double b)
{
		double i;
		i=(a-b)/(a*b);
		printf("%.3f\n", i);
		return i;
}
