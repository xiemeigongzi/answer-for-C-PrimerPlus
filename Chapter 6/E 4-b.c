#include <stdio.h>
int main()
{
	int i=65,j;
	int n=0;
	int m=0;
	for(i=65+m;i<86;i++)
	{
		for(j=65;j<=i;j++)
		{
			
			printf("%c",j);
		}
		printf("\n");
		n=n+1;
		m++;
	}
	
	return 0;
}
