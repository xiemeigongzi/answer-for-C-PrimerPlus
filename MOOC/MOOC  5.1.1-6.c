#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int fact=1;
	int i=1;
	for(i=2;i<=n;i++)
	fact=fact*i;
	printf("%d! is %d\n", n, fact);
	return 0;
}
