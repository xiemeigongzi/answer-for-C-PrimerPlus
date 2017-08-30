#include <stdio.h>
int main()
{
	int x=12345;
	int digit;
	int mask=10000;
	int i;
	
	while(mask>0)
	{
		i=x/mask;
		printf("%d",i);
		if(mask>9){
			printf(" ");
		}
		x=x%mask;
		mask=mask/10;
		//printf("i=%d x=%d mask=%d\n",i,x,mask);
	}
	
	
	
	return 0;
}
