#include <stdio.h>
int main()
{
	printf("Input numbers between 0 to 9.\n");
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		a[i]=0;
	}
	int x;
	scanf("%d", &x);
	while(x!=-1)
	{
		a[x]++;
        scanf("%d",&x);
	}
	for(i=0;i<10;i++)
		printf("a[%d] occurs %d times.\n", i, a[i]);
	return 0;
}
