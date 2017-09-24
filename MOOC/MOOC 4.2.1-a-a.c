#include <stdio.h>
int main()
{
	int x;
	int ret=0;
	scanf("%d", &x);
	int t;
	t=x;
	while (t>1)
	{
		t=t/2;
		ret++;
	}
	printf("log2 of %d is %d",x, ret);
	
	return 0;
}
