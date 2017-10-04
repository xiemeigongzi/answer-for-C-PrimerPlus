#include <stdio.h>
int main()
{
	int a[8];
    int i;
    for(i=0;i<8;i++)
    {
    	scanf("%d", &a[i]);
    	printf("a[%d]=%d\n", i, a[i]);
	}
	printf("\n");
	printf("\n");

	for(i=7;i>-1;i--)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	return 0;
}
