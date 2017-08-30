#include <stdio.h>
int main()
{
	int x=0;
	scanf("%d",&x);
	int digit=0;
	int ret=0;
	int cnt=0;
	while(x>0)
	{
		cnt++;
		digit=x%10;
		ret=ret*10+digit;
		printf("%d times digit is %d\n",cnt,digit);
		x=x/10;
	}
	 
	 x=ret;
	 digit=0;
	 while(x>0)
	 {
	 	digit=x%10;
	 	x=x/10;
	 	printf("%d ", digit);
	 }	
	return 0;
}
