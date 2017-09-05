#include <stdio.h>
int main()
{
	double x;
	scanf("%d", &x);
	int cnt=0;
	while(x>0)
	{
		x=x/10;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
