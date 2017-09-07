#include <stdio.h>
void swap();
int main()
{
	int a=5;
	int b=6;
	swap(a,b);
	{
		printf("%d %d", a,b);
	}
	
	printf("a=%d b=%d\n", a,b);
	return 0;
}

void swap(double  a, double b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
