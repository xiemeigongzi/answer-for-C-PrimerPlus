#include <stdio.h>
int main()
{
	
	int a=100;
	int b=100;
	int c=1;
	int is_Prime=1;
	for(a;a>0;a--)
	{
		for(b;b<=a;b--)
		{
			c=a%b;
			if(c==0)
			{
				is_Prime=0;		
			}
			else{
				printf("%d is a Prime.\n",c);
			}
			}
		}
		
	return 0;
}
