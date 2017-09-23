#include <stdio.h>
int main()
{
	double s;
	int sign=1;
	double a;
	int count;
	int limit;
	scanf("%d", &limit);
	
	for(s=1,a=1,count=1; count<=limit;count++)
	{
		a*=2;
		s+=sign*1.0/a;
		sign*=(-1);
		printf("time = %f when terms = %d\n",s,count);
	}
	printf("the result is %f \n", 2*s);
	return 0;
}
