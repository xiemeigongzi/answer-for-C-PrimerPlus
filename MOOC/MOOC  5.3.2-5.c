#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int t;
	int d=0;
	do{
		d=x%10;
		t=t*10+d;
		x=x/10;
	}while(x>0);
	x=t;
	do{
		int d=x%10;
		printf("%d",d);
		if(x>9){
			printf(" ");
		}
		x/=10;
	} while(x>0);
	printf("\n");
	
	return 0;
	}
