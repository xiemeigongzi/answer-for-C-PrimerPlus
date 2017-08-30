#include <stdio.h>
int main()
{
	int x=13425;
	int b,t;
	b=x;
	int mask=1;
	while(x>9)
	{
		x=x/10;
		mask=mask*10;
	}
	 printf("%d\n",mask);
	 
	 while(mask>0)
	 {
	 	t=b/mask;
	 	printf("%d",t);
	 	if(mask>9)
	 	{ printf(" ");
		 }
	 	b=b%mask;
	 	mask=mask/10;
	 }	
	return 0;
}
