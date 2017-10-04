#include <stdio.h>
#include <string.h>
int main()
{
	int b;
	printf("how many characters you want to input?\n");
	scanf("%d",&b);
	int a[b];
	scanf("%s", a);
	printf("%s\n",a);
	int i;
	printf("there are %d characetrs.\n", 	strlen(a));
	
	for (i=strlen(a);i>=0;i--)
	{
		printf("a[%d]=%c\n", i, a[i]);
	}
	return 0;
}
