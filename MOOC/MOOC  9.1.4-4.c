#include <stdio.h>

int main()
{
	char ac[]={0,1,2,3,4,5,6,7,8,9,-1};
	char *p=  ac;
	
	while (*p!=-1)
	{
		printf("%d\n",*p);
		*p++;
	}
	return 0;
}
