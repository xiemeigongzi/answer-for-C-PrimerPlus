#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i=1;
	int fact=1;
	for(i=1; i<=n;i++)
	{
		fact=fact*i;           //    i   fact
	                     //    1    1
	}                          //    2    2
	printf("%d!=%d\n",n,fact); //    3
	return 0;
}
