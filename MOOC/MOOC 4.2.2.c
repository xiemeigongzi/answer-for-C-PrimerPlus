#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int ret=0;
	int digit=0;
	while(x>0)
	{
		digit=x%10;
		ret=ret*10+digit;
		x=x/10;
	//	if(x>9){
		printf("x= %d, digit= %d, ret= %d\n", x,digit, ret);
	}
	printf("%d", ret);
	return 0;
}
