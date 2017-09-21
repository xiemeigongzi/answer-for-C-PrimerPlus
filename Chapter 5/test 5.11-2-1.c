#include <stdio.h>
int main()
{
	int a;
	printf("enter a number for a.\n");
	scanf("%d",&a);
	int i;
	i=a+10;
	while(a<=i)
	{
		printf("%d\n",a);
		a++;
	}
	
	return 0;
}
