#include <stdio.h>
int max(int a, int b){
	int max;
	if(a>b){
		max=a;
	}
	else {
		max=b;
	}
	return max;
}

int main()
{
	int a,b,c;
	a=5; b=6;
	c=max(10,12);
	printf("%d\n", c);
	c=max(a,b);
	printf("%d\n", c);
	c=max(c,23);
	printf("%d\n", c);
	c=max(max(23,45),a);
	printf("%d\n", c);
	c=max(23+45,b);
	printf("%d\n", c);
	return 0;
 } 
