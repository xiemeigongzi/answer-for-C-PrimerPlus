#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int t=x;
	int d;
	int mask=1;
	while (t>9)
	{
		t=t/10;
		mask=mask*10;
	}
	printf("%d\n", mask);
	
	t=x;
	int ret=0;
	while(mask>0)
	{
		d=t/mask;
		printf("%d\t", d);
		t=t%mask;
		mask/=10;
		ret=ret*10+d;
	}
	printf("%d", ret);
	return 0;
}
