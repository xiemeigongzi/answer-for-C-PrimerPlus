#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int d;
	int mask=10000;
	do{
		int d=x/mask;
		printf("%d",d);
		if(mask>9)
		{
			printf(" ");
		}
		x=x%mask;
		mask=mask/10;	
	}while(mask>0);
	return 0;
}
