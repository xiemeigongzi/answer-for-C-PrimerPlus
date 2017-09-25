#include <stdio.h>
void product();
int main()

{
	double a, b;
	int c;
	c=scanf("%lf %lf", &a, &b);
	while(c==2){
		product(a,b);
		c=scanf("%lf %lf", &a, &b);
	}
	return 0;
}

void product(double a, double b)
{
	printf("(a-b)/(a*b)=%f", (a-b)/(a*b));
}
