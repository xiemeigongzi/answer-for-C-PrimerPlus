#include <stdio.h>
int main()
{
	int x=7000;
	//scanf("%d", &x);
	int mask=1000;
	int digit;
	do{
		digit=x/mask;
		printf("%d", digit);
		if(mask>0)
		{
			printf(" ");
		}
		x=x%mask;
		mask=mask/10;		
	}while(mask>0);
	
	return 0;
}
