#include <stdio.h>
double triple();
int main()
{
	printf("enter a number.\n");
	double a;
	
	scanf("%lf",&a);
	
	
	printf("%f^3 = %f\n", a, triple(a));
	return 0;
}

double triple(double a)
{
	double b;
	b=a*a*a;
	
	return b;
}
