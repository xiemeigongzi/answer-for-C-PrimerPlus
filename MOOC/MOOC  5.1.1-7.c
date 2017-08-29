#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i=n;
	int ret=1;
	for(i;i>0;i--)
	ret=ret*i;
	
	printf("%d! is %d\n",n,ret);
	
	return 0;
}
