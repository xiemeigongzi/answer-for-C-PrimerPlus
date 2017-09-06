#include <stdio.h>
int main()
{
	int x;
	x=700;
	int t=0;
	int digit=0;
	while(x>0){
	digit=x%10;
	t=t*10+digit;
	x=x/10;
	}
	printf("t=%d\n", t);
	//scanf("%d", &x);
	x=t;
	while(x>0){
		digit=x%10;
		printf("%d",digit);
		if(x>9){
			printf(" ");
		}
		x=x/10;
	}
	return 0;
}
