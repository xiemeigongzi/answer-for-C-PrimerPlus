#include <stdio.h>
int main()
{
	printf("this program computes moduli.\n");
	printf("enter an integer to serve as the second operand:\n");
	int a;
	scanf("%d", &a);
	printf("now enter the first operand.\n");
	int b;
	scanf("%d",&b);
	int c;
	while(b>0)
	{
		c=b%a;
		printf("%d %% %d = %d\n",b,a,c);
		printf("enter next number for first operand (<=0 to quit):\n");
		scanf("%d",&b);
	}
	
	return 0;
}
