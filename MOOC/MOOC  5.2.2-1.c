#include <stdio.h>
int main()
{
	int a=100;
	int b=1;
	int c;

	
	while(a>0)
	{
		a--;
		while(b<=a)
		{
			b++;
			c=a%b;
			if(c==0)
			continue;
			else
			{
				printf("%d is a Prime\n",c);
			}
		}
	}
	
	return 0;
}
