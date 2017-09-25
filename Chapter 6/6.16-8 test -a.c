#include <stdio.h>
int main()
{
	double a, b;
	int c;
	c=scanf("%lf %lf", &a, &b);
	while(c==2){
		printf("(a-b)/(a*b)=%f", (a-b)/(a*b));
		c=scanf("%lf %lf", &a, &b);
	}
	
	
	return 0;
}
