#include <stdio.h>
int main()
{
	int i,j;
	int n=0;
	for(i='A'+n;i<='U';i++)
	{
		for(j=i;j<=i;j++)
		{
			printf("%c",j);
			n++;
		}
		
		printf("\n");
	}
	
	return 0;
}
