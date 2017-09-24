#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	
	int t;
	do{
		int d=x%10;
		t=t*10+d;
		x/=10;
	}while(x>0);
	printf("t=%d\n", t);
	
	x=t;
		
	do {
		int d=x%10;
		printf("%d", d);
		if(x>9)
		printf(" ");
		x=x/10;
	}while(x>0);
	return 0;
}
