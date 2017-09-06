#include <stdio.h>
int main()
{
	int x=13425;
	int n;
	int digit=0;
	int ret=0;
	n=x;
	
	while(n>0){
		digit=n%10;
		ret=ret*10+digit;
		n=n/10;
		printf("digit=%d ret=%d\n", digit,ret);
	}
	printf("ret=%d\n", ret);
	x=ret;
	ret=0;
	while(x>0){
	digit=x%10;
	printf("%d ",digit);
		ret=ret*10+digit;
		x=x/10;	
	}
	printf("ret=%d",ret);
	return 0;
}
