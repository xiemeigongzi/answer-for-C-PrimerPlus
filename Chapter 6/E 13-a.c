#include <stdio.h>
int main()
{
	int a[8]={2,};
	int i;
	for(i=1;i<8;i++)
	{
		a[i]=2*a[i-1];
		printf("a[%d]=%d\n", i,a[i] );
	}
	i=0;
	do{
		printf("a[%d]=%d\n", i,a[i] );
		i++;
	}while(i<8);
	
	return 0;
}
