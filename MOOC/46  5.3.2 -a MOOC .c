#include <stdio.h>
int main()
{
	int x=13425;
	do{
		int d;
		d=x%10;
		printf("%d", d);
		if(x>9)
		printf(" ");
		x=x/10;
		
	}while(x>0);
	
	return 0;
}
