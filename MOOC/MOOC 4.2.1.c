#include <stdio.h>
int main()
{
	int x=0;
	int ret=0;
	
	scanf("%d", &x);
	while(x>1)
	{
		x/=2;
		ret = ret+1;
	}
	printf("log2 of %d is %d \n", x, ret);

}
