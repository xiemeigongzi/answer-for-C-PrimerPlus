#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a=n;
	int m;
	for(m=1;n>=1;n--)
	{
		m=m*n;
	}
	printf("%d ! = %d", a,m);
	
	return 0;
}
