#include <stdio.h>

void swap(int a, int b);

int main()
{
	int a=5;
	int b=6;
	
	swap(a,b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
void swap(int x, int y)
{
	int t=x;
	x=y;
	y=t;
}
