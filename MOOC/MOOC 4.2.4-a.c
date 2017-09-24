#include <stdio.h>
int main()                 
{
	int x;
	scanf("%d", &x);
	int a=x;
	int digit;
	int ret=0;                            
	while (x>0) 
	{
		digit= x%10;              //  123
		ret=ret*10+digit;        //  digit   ret    x 
		x=x/10;                 //     3      3   12
	}                           //     2     32   1 
	printf("%d",ret);           //    1     321  0
	return 0;
}
